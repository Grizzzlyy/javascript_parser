@ECHO OFF
for %%f in (.\*.js) do (
	@echo[
	@echo PROCESSING %%f
	@echo[
	..\..\build\parser.exe %%f
)
pause