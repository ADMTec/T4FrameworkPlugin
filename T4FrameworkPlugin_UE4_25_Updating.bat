@echo off

echo [UE4.25] Updating T4FrameworkPlugin...

set UE4_VER=4.25
set UE4_KEY_NAME="HKEY_LOCAL_MACHINE\SOFTWARE\EpicGames\Unreal Engine\%UE4_VER%"
FOR /F "tokens=2*" %%A IN ('REG QUERY %UE4_KEY_NAME% /v InstalledDirectory 2^> nul') DO set "UE4_Path=%%B"

del /S /Q "%UE4_Path%\Engine\Plugins\TECH4Labs\*"
rmdir /S /Q "%UE4_Path%\Engine\Plugins\TECH4Labs"

xcopy /S /Y "%~dp0UE%UE4_VER%\T4Framework\*.*" "%UE4_Path%\Engine\Plugins\TECH4Labs\T4Framework\"
xcopy /S /Y "%~dp0UE%UE4_VER%\T4FrameworkEditor\*.*" "%UE4_Path%\Engine\Plugins\TECH4Labs\T4FrameworkEditor\"

echo timeout -T 3
echo exit /B 0
