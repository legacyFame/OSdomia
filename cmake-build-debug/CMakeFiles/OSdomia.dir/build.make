# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "N:\Padfoot\Jetbrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "N:\Padfoot\Jetbrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "N:\3D Objects\OSdomia"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "N:\3D Objects\OSdomia\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/OSdomia.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OSdomia.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OSdomia.dir/flags.make

CMakeFiles/OSdomia.dir/main.c.obj: CMakeFiles/OSdomia.dir/flags.make
CMakeFiles/OSdomia.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="N:\3D Objects\OSdomia\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/OSdomia.dir/main.c.obj"
	N:\Padfoot\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\OSdomia.dir\main.c.obj   -c "N:\3D Objects\OSdomia\main.c"

CMakeFiles/OSdomia.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OSdomia.dir/main.c.i"
	N:\Padfoot\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "N:\3D Objects\OSdomia\main.c" > CMakeFiles\OSdomia.dir\main.c.i

CMakeFiles/OSdomia.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OSdomia.dir/main.c.s"
	N:\Padfoot\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "N:\3D Objects\OSdomia\main.c" -o CMakeFiles\OSdomia.dir\main.c.s

# Object files for target OSdomia
OSdomia_OBJECTS = \
"CMakeFiles/OSdomia.dir/main.c.obj"

# External object files for target OSdomia
OSdomia_EXTERNAL_OBJECTS =

OSdomia.exe: CMakeFiles/OSdomia.dir/main.c.obj
OSdomia.exe: CMakeFiles/OSdomia.dir/build.make
OSdomia.exe: CMakeFiles/OSdomia.dir/linklibs.rsp
OSdomia.exe: CMakeFiles/OSdomia.dir/objects1.rsp
OSdomia.exe: CMakeFiles/OSdomia.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="N:\3D Objects\OSdomia\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable OSdomia.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OSdomia.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OSdomia.dir/build: OSdomia.exe

.PHONY : CMakeFiles/OSdomia.dir/build

CMakeFiles/OSdomia.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OSdomia.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OSdomia.dir/clean

CMakeFiles/OSdomia.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "N:\3D Objects\OSdomia" "N:\3D Objects\OSdomia" "N:\3D Objects\OSdomia\cmake-build-debug" "N:\3D Objects\OSdomia\cmake-build-debug" "N:\3D Objects\OSdomia\cmake-build-debug\CMakeFiles\OSdomia.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OSdomia.dir/depend

