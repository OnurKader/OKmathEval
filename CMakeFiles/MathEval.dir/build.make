# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/beronthecolossus/Peki/C++/Projects/OK/MathEval

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/beronthecolossus/Peki/C++/Projects/OK/MathEval

# Include any dependencies generated for this target.
include CMakeFiles/MathEval.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MathEval.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MathEval.dir/flags.make

CMakeFiles/MathEval.dir/test.cpp.o: CMakeFiles/MathEval.dir/flags.make
CMakeFiles/MathEval.dir/test.cpp.o: test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beronthecolossus/Peki/C++/Projects/OK/MathEval/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MathEval.dir/test.cpp.o"
	/usr/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathEval.dir/test.cpp.o -c /home/beronthecolossus/Peki/C++/Projects/OK/MathEval/test.cpp

CMakeFiles/MathEval.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathEval.dir/test.cpp.i"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/beronthecolossus/Peki/C++/Projects/OK/MathEval/test.cpp > CMakeFiles/MathEval.dir/test.cpp.i

CMakeFiles/MathEval.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathEval.dir/test.cpp.s"
	/usr/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/beronthecolossus/Peki/C++/Projects/OK/MathEval/test.cpp -o CMakeFiles/MathEval.dir/test.cpp.s

# Object files for target MathEval
MathEval_OBJECTS = \
"CMakeFiles/MathEval.dir/test.cpp.o"

# External object files for target MathEval
MathEval_EXTERNAL_OBJECTS =

MathEval: CMakeFiles/MathEval.dir/test.cpp.o
MathEval: CMakeFiles/MathEval.dir/build.make
MathEval: libToken.a
MathEval: CMakeFiles/MathEval.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/beronthecolossus/Peki/C++/Projects/OK/MathEval/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MathEval"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathEval.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MathEval.dir/build: MathEval

.PHONY : CMakeFiles/MathEval.dir/build

CMakeFiles/MathEval.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MathEval.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MathEval.dir/clean

CMakeFiles/MathEval.dir/depend:
	cd /home/beronthecolossus/Peki/C++/Projects/OK/MathEval && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/beronthecolossus/Peki/C++/Projects/OK/MathEval /home/beronthecolossus/Peki/C++/Projects/OK/MathEval /home/beronthecolossus/Peki/C++/Projects/OK/MathEval /home/beronthecolossus/Peki/C++/Projects/OK/MathEval /home/beronthecolossus/Peki/C++/Projects/OK/MathEval/CMakeFiles/MathEval.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MathEval.dir/depend
