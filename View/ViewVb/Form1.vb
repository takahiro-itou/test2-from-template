Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim message As String
        Dim result As Integer
        Dim objWrapper As SampleWrapper.Common.SampleDocument = New SampleWrapper.Common.SampleDocument()

        message = TextBox1.Text
        result = objWrapper.testFunc1(message)
        MsgBox("入力した文字列中のアルファベットの個数は " & result, MsgBoxStyle.OkOnly)
    End Sub
End Class
