@echo "Removing build files"
@echo off

IF EXIST *.o DEL /S *.o
IF EXIST *.exe DEL /S *.exe
IF EXIST *.e DEL /S *.e
IF EXIST include\*.h.gch DEL include\*.h.gch