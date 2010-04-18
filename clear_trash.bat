:: *****************************************************************************
:: Clear trash files and directorys in project
:: *****************************************************************************

@echo off

:: =0, don't remove, just only print them;
:: else, display and remove them.
set REMOVE_FLAG=1

:: Clear screen
CLS

echo.
echo 将要清除该目录下所有CVS, SVN, VSS目录, 
PAUSE

echo.

:: Clear all CVS directory
IF NOT %REMOVE_FLAG%==0 (
  RMDIR /S /Q CVS
)
FOR /F "tokens=*" %%i IN ('DIR /S/B/AD CVS') DO (
  echo "%%i"
  IF NOT %REMOVE_FLAG%==0 (
    RMDIR /S /Q "%%i"
  )
)

echo.

:: delete all SVN directory
FOR /F "tokens=*" %%i IN ('DIR /S/B/AD *.svn') DO (
  echo "%%i"
  IF NOT %REMOVE_FLAG%==0 (
    RMDIR /S /Q "%%i"
  )
)

echo.

:: delete all depend file, cause it's no use anymore
FOR /F "tokens=*" %%i IN ('DIR /S/B/A-D vssver.scc') DO (
  echo "%%i"
  IF NOT %REMOVE_FLAG%==0 (
    DEL /F /Q "%%i"
  )
)

echo.
echo 清除完毕!
PAUSE

