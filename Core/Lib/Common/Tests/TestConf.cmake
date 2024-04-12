
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   SampleCoreSettingsTest
    COMMAND  $<TARGET_FILE:SampleCoreSettingsTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(SampleCoreSettingsTest   SampleCoreSettingsTest.cpp)
