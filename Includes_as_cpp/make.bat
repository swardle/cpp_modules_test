
cl /EHsc /W4 /Zo /Zi /experimental:module /MD /std:c++latest /module:stdIfcDir "$(VCToolsInstallDir_150)ifc\$(PlatformTarget)" /nologo -c mimpl.cpp
cl /EHsc /W4 /Zo /Zi /experimental:module /MD /std:c++latest /module:stdIfcDir "$(VCToolsInstallDir_150)ifc\$(PlatformTarget)" /nologo -c main.cpp
@set linkerstuff=/MANIFEST /NXCOMPAT /PDB:"main.pdb" /DYNAMICBASE "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.10.25017\ifc\x64\Release\std.lib" "kernel32.lib" "user32.lib" "gdi32.lib" "winspool.lib" "comdlg32.lib" "advapi32.lib" "shell32.lib" "ole32.lib" "oleaut32.lib" "uuid.lib" "odbc32.lib" "odbccp32.lib" /DEBUG:FULL /MACHINE:X64 /SUBSYSTEM:CONSOLE /NOLOGO
link /OUT:main.exe %linkerstuff% mimpl.obj	main.obj 