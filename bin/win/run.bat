@ECHO OFF
cd ..\..\
echo [32m
echo PROCESSING default_test.js
echo note: If you want to run other tests, go to test folder and enter
echo some directory. There are run.bat files
echo [0m
build\parser.exe .\test\default_test.js
cd bin\win
pause