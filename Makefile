
all: cpp-msvc-x86.exe cpp-msvc-nortti-x86.exe

# ugly crippled msvc options:
# /GR[-]     enable C++ RTTI
# /Zi        enable debugging information
# /Fe<file>  name executable file

cpp-msvc-x86.exe: src/main.cpp
	cl src/main.cpp /O1 /GR /INCREMENTAL:NO /Fe$@

cpp-msvc-nortti-x86.exe: src/main.cpp
	cl src/main.cpp /O1 /GR- /INCREMENTAL:NO /Fe$@

clean:
	rm -rfv *.obj *.exe *.pdb *.ilk
