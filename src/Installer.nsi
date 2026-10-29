Name "Family Phone Book"

OutFile "Family_Phone_Book_Installer.exe"
InstallDir "$PROGRAMFILES\Family_Phone_Book"
Icon "icons\icon.ico"
UninstallIcon "icons\icon.ico"
RequestExecutionLevel admin

Page directory
Page instfiles

Section "Install"

  SetOutPath "$INSTDIR"
  File "build\Release\Family_Phone_Book.exe"
  File /r "build\Release\*.dll"
  SetOutPath "$INSTDIR\photos"
  File /r "photos\*.*"
  SetOutPath "$INSTDIR\icons"
  File /r "icons\*.*"
  SetOutPath "$INSTDIR"
  File "accounts.txt"
  File "AdamNovak21.txt"
  File "John5.txt"
  WriteUninstaller "$INSTDIR\Uninstall.exe"
  CreateDirectory "$SMPROGRAMS\Family_Phone_Book"
  CreateShortCut "$SMPROGRAMS\Family_Phone_Book\Family_Phone_Book.lnk" "$INSTDIR\Family_Phone_Book.exe" "" "$INSTDIR\icons\icon.ico" 0 SW_SHOWNORMAL "" "$INSTDIR"
  CreateShortCut "$DESKTOP\Family_Phone_Book.lnk" "$INSTDIR\Family_Phone_Book.exe" "" "$INSTDIR\icons\icon.ico" 0 SW_SHOWNORMAL "" "$INSTDIR"
  CreateShortCut "$SMPROGRAMS\Family_Phone_Book\Uninstall.lnk" "$INSTDIR\Uninstall.exe" "" "$INSTDIR\icons\icon.ico"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Family_Phone_Book" "DisplayName" "Family_Phone_Book"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Family_Phone_Book" "UninstallString" "$INSTDIR\Uninstall.exe"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Family_Phone_Book" "DisplayIcon" "$INSTDIR\icons\icon.ico"

SectionEnd

Section "Uninstall"

  Delete "$INSTDIR\Family_Phone_Book.exe"
  Delete "$INSTDIR\*.dll"
  RMDir /r "$INSTDIR\photos"
  RMDir /r "$INSTDIR\icons"
  Delete "$INSTDIR\*.txt"
  Delete "$INSTDIR\Uninstall.exe"
  Delete "$SMPROGRAMS\Family_Phone_Book\Family_Phone_Book.lnk"
  Delete "$SMPROGRAMS\Family_Phone_Book\Uninstall.lnk"
  RMDir "$SMPROGRAMS\Family_Phone_Book"
  Delete "$DESKTOP\Family_Phone_Book.lnk"
  RMDir "$INSTDIR"
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Family_Phone_Book"

SectionEnd