# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Dell\AppData\Local\Programs\Python\Python38\Lib\site-packages\cmake\data\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Dell\AppData\Local\Programs\Python\Python38\Lib\site-packages\cmake\data\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CoderISP\DataStructures\Queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CoderISP\DataStructures\Queue\build

# Include any dependencies generated for this target.
include CMakeFiles/cmake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake.dir/flags.make

CMakeFiles/cmake.dir/main.cpp.obj: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CoderISP\DataStructures\Queue\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake.dir/main.cpp.obj"
	c:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cmake.dir\main.cpp.obj -c E:\CoderISP\DataStructures\Queue\main.cpp

CMakeFiles/cmake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake.dir/main.cpp.i"
	c:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CoderISP\DataStructures\Queue\main.cpp > CMakeFiles\cmake.dir\main.cpp.i

CMakeFiles/cmake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake.dir/main.cpp.s"
	c:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CoderISP\DataStructures\Queue\main.cpp -o CMakeFiles\cmake.dir\main.cpp.s

# Object files for target cmake
cmake_OBJECTS = \
"CMakeFiles/cmake.dir/main.cpp.obj"

# External object files for target cmake
cmake_EXTERNAL_OBJECTS =

cmake.exe: CMakeFiles/cmake.dir/main.cpp.obj
cmake.exe: CMakeFiles/cmake.dir/build.make
cmake.exe: CMakeFiles/cmake.dir/linklibs.rsp
cmake.exe: CMakeFiles/cmake.dir/objects1.rsp
cmake.exe: CMakeFiles/cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CoderISP\DataStructures\Queue\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake.dir/build: cmake.exe

.PHONY : CMakeFiles/cmake.dir/build

CMakeFiles/cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmake.dir/clean

CMakeFiles/cmake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CoderISP\DataStructures\Queue E:\CoderISP\DataStructures\Queue E:\CoderISP\DataStructures\Queue\build E:\CoderISP\DataStructures\Queue\build E:\CoderISP\DataStructures\Queue\build\CMakeFiles\cmake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake.dir/depend
