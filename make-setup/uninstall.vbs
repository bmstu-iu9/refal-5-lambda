Option Explicit
Dim WshShell, WshEnvUser, WshNamedArgs
Dim Path, InstallDir, BinDir, DecoratedPath, DecoratedBinDir, FSO

Const CUninstallKey = _
  "HKCU\Software\Microsoft\Windows\CurrentVersion\Uninstall\Refal-5-lambda"

Private Sub Init
  Set WshShell = CreateObject("WScript.Shell")
  Set WshEnvUser = WshShell.Environment("USER")
  Set WshNamedArgs = WScript.Arguments.Named
  Set FSO = CreateObject("Scripting.FileSystemObject")

  Path = WshEnvUser("PATH")
  InstallDir = FSO.GetParentFolderName(WScript.ScriptFullName)
  BinDir = InstallDir & "\bin"

  DecoratedPath = ";" & Path & ";"
  DecoratedBinDir = ";" & BinDir & ";"
End Sub

Private Sub Install
  If Not InStr(1, DecoratedPath, DecoratedBinDir, vbTextCompare) > 0 Then
    WshEnvUser("PATH") = Path & ";" & BinDir
  End If

  WshShell.RegWrite CUninstallKey & "\DisplayIcon", _
    InstallDir & "\icon.ico", "REG_SZ"
  WshShell.RegWrite CUninstallKey & "\DisplayName", _
    "Refal-5(lambda)", "REG_SZ"
  WshShell.RegWrite CUninstallKey & "\DisplayVersion", "1.7.4", "REG_SZ"
  ' WshShell.RegWrite CUninstallKey & "\EstimatedSize", 15000, "REG_DWORD"
  WshShell.RegWrite CUninstallKey & "\Publisher", "BMSTU IU-9", "REG_SZ"
  WshShell.RegWrite CUninstallKey & "\UninstallString", _
    """%SystemRoot%\system32\wscript.exe"" " & _
    """" & InstallDir & "\uninstall.vbs""", "REG_EXPAND_SZ"

  WScript.Echo("Successfully installed")
End Sub

Private Sub UnInstall
  Path = DecoratedPath
  BinDir = DecoratedBinDir
  Path = Replace(Path, BinDir, ";", 1, -1, vbTextCompare)
  Path = Left(Path, Len(Path) - 1)      'Skip right ";"
  Path = Right(Path, Len(Path) - 1)     'Skip left ";"
  WshEnvUser("PATH") = Path

  WScript.Echo("InstallDir: " & InstallDir)

  WshShell.CurrentDirectory = InstallDir & "\.."
  FSO.DeleteFolder InstallDir, True
  FSO.DeleteFolder WshShell.SpecialFolders.Item("Programs") & "\Refal-5-lambda", True

  WshShell.RegDelete CUninstallKey & "\"

  WScript.Echo("Successfully uninstalled")
End Sub


Init

If WshNamedArgs.Exists("install") Then
  Install
Else
  UnInstall
End If
