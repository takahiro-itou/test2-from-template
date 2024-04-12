#!/bin/bash  -x

##
##  コマンド定義。
##

ln_h='ln -f '
ln_s='ln -sf '
rm_f='rm -f '

##
##  シンボリックリンクの確認
##

${rm_f}  .Config/TestConf.txt
touch    .Config/TestConf.txt
${ln_s}  .Config/TestConf.txt  .Config/TestLink
if [ -L  .Config/TestLink ] ; then
    echo  'Symbolic Link Enabled.'
else
    echo  'Cannot Create Symbolic Link. Use Hard Link...'
    ln_s=${ln_h}
fi
${rm_f}  .Config/TestConf.txt  .Config/TestLink

##
##  ツールのバージョン確認
##
##  TODO
##  もし自動判定がうまくいかないようなら、
##  直接バージョン番号を変数に代入する。
##

am_ver=$(automake --version | head --lines=1 \
        | sed -e 's/.*\s\([0-9\.]\+\)/\1/')
am_ver_major=$(echo  ${am_ver} | cut  -d '.'  -f 1)
am_ver_minor=$(echo  ${am_ver} | cut  -d '.'  -f 2)
if [ ${am_ver_major} -gt 1 -o ${am_ver_minor} -ge 13 ] ; then
  am_trg_ver=1.13
else
  am_trg_ver=1.12
fi
${rm_f}  .M4/InitAutoMake.m4
${ln_h}  .M4/InitAutoMake.${am_trg_ver}.m4  .M4/InitAutoMake.m4
