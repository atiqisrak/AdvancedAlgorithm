# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "H:\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "H:\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\AlgorithmProjects\SJF

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\AlgorithmProjects\SJF\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SJF.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SJF.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SJF.dir/flags.make

CMakeFiles/SJF.dir/main.cpp.obj: CMakeFiles/SJF.dir/flags.make
CMakeFiles/SJF.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\AlgorithmProjects\SJF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SJF.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SJF.dir\main.cpp.obj -c H:\AlgorithmProjects\SJF\main.cpp

CMakeFiles/SJF.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SJF.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\AlgorithmProjects\SJF\main.cpp > CMakeFiles\SJF.dir\main.cpp.i

CMakeFiles/SJF.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SJF.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\AlgorithmProjects\SJF\main.cpp -o CMakeFiles\SJF.dir\main.cpp.s

# Object files for target SJF
SJF_OBJECTS = \
"CMakeFiles/SJF.dir/main.cpp.obj"

# External object files for target SJF
SJF_EXTERNAL_OBJECTS =

SJF.exe: CMakeFiles/SJF.dir/main.cpp.obj
SJF.exe: CMakeFiles/SJF.dir/build.make
SJF.exe: CMakeFiles/SJF.dir/linklibs.rsp
SJF.exe: CMakeFiles/SJF.dir/objects1.rsp
SJF.exe: CMakeFiles/SJF.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\AlgorithmProjects\SJF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SJF.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SJF.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SJF.dir/build: SJF.exe

.PHONY : CMakeFiles/SJF.dir/build

CMakeFiles/SJF.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SJF.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SJF.dir/clean

CMakeFiles/SJF.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\AlgorithmProjects\SJF H:\AlgorithmProjects\SJF H:\AlgorithmProjects\SJF\cmake-build-debug H:\AlgorithmProjects\SJF\cmake-build-debug H:\AlgorithmProjects\SJF\cmake-build-debug\CMakeFiles\SJF.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SJF.dir/depend

