# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tosixjuly/ClionProjects/exercise-for-cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/excersise_for_cplusplus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/excersise_for_cplusplus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/excersise_for_cplusplus.dir/flags.make

CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o: CMakeFiles/excersise_for_cplusplus.dir/flags.make
CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o: ../day\ 08/ConstructorWithParameters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o -c "/Users/tosixjuly/ClionProjects/exercise-for-cplusplus/day 08/ConstructorWithParameters.cpp"

CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tosixjuly/ClionProjects/exercise-for-cplusplus/day 08/ConstructorWithParameters.cpp" > CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.i

CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tosixjuly/ClionProjects/exercise-for-cplusplus/day 08/ConstructorWithParameters.cpp" -o CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.s

# Object files for target excersise_for_cplusplus
excersise_for_cplusplus_OBJECTS = \
"CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o"

# External object files for target excersise_for_cplusplus
excersise_for_cplusplus_EXTERNAL_OBJECTS =

excersise_for_cplusplus: CMakeFiles/excersise_for_cplusplus.dir/day_08/ConstructorWithParameters.cpp.o
excersise_for_cplusplus: CMakeFiles/excersise_for_cplusplus.dir/build.make
excersise_for_cplusplus: CMakeFiles/excersise_for_cplusplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable excersise_for_cplusplus"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/excersise_for_cplusplus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/excersise_for_cplusplus.dir/build: excersise_for_cplusplus

.PHONY : CMakeFiles/excersise_for_cplusplus.dir/build

CMakeFiles/excersise_for_cplusplus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/excersise_for_cplusplus.dir/cmake_clean.cmake
.PHONY : CMakeFiles/excersise_for_cplusplus.dir/clean

CMakeFiles/excersise_for_cplusplus.dir/depend:
	cd /Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tosixjuly/ClionProjects/exercise-for-cplusplus /Users/tosixjuly/ClionProjects/exercise-for-cplusplus /Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug /Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug /Users/tosixjuly/ClionProjects/exercise-for-cplusplus/cmake-build-debug/CMakeFiles/excersise_for_cplusplus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/excersise_for_cplusplus.dir/depend

