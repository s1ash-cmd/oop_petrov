# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/s1ash/oop_petrov

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s1ash/oop_petrov/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/oop_petrov.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/oop_petrov.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/oop_petrov.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oop_petrov.dir/flags.make

CMakeFiles/oop_petrov.dir/main.cpp.o: CMakeFiles/oop_petrov.dir/flags.make
CMakeFiles/oop_petrov.dir/main.cpp.o: /home/s1ash/oop_petrov/main.cpp
CMakeFiles/oop_petrov.dir/main.cpp.o: CMakeFiles/oop_petrov.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/s1ash/oop_petrov/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oop_petrov.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/oop_petrov.dir/main.cpp.o -MF CMakeFiles/oop_petrov.dir/main.cpp.o.d -o CMakeFiles/oop_petrov.dir/main.cpp.o -c /home/s1ash/oop_petrov/main.cpp

CMakeFiles/oop_petrov.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/oop_petrov.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1ash/oop_petrov/main.cpp > CMakeFiles/oop_petrov.dir/main.cpp.i

CMakeFiles/oop_petrov.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/oop_petrov.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1ash/oop_petrov/main.cpp -o CMakeFiles/oop_petrov.dir/main.cpp.s

CMakeFiles/oop_petrov.dir/petrov_item.cpp.o: CMakeFiles/oop_petrov.dir/flags.make
CMakeFiles/oop_petrov.dir/petrov_item.cpp.o: /home/s1ash/oop_petrov/petrov_item.cpp
CMakeFiles/oop_petrov.dir/petrov_item.cpp.o: CMakeFiles/oop_petrov.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/s1ash/oop_petrov/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/oop_petrov.dir/petrov_item.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/oop_petrov.dir/petrov_item.cpp.o -MF CMakeFiles/oop_petrov.dir/petrov_item.cpp.o.d -o CMakeFiles/oop_petrov.dir/petrov_item.cpp.o -c /home/s1ash/oop_petrov/petrov_item.cpp

CMakeFiles/oop_petrov.dir/petrov_item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/oop_petrov.dir/petrov_item.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1ash/oop_petrov/petrov_item.cpp > CMakeFiles/oop_petrov.dir/petrov_item.cpp.i

CMakeFiles/oop_petrov.dir/petrov_item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/oop_petrov.dir/petrov_item.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1ash/oop_petrov/petrov_item.cpp -o CMakeFiles/oop_petrov.dir/petrov_item.cpp.s

CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o: CMakeFiles/oop_petrov.dir/flags.make
CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o: /home/s1ash/oop_petrov/petrov_shop.cpp
CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o: CMakeFiles/oop_petrov.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/s1ash/oop_petrov/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o -MF CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o.d -o CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o -c /home/s1ash/oop_petrov/petrov_shop.cpp

CMakeFiles/oop_petrov.dir/petrov_shop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/oop_petrov.dir/petrov_shop.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s1ash/oop_petrov/petrov_shop.cpp > CMakeFiles/oop_petrov.dir/petrov_shop.cpp.i

CMakeFiles/oop_petrov.dir/petrov_shop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/oop_petrov.dir/petrov_shop.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s1ash/oop_petrov/petrov_shop.cpp -o CMakeFiles/oop_petrov.dir/petrov_shop.cpp.s

# Object files for target oop_petrov
oop_petrov_OBJECTS = \
"CMakeFiles/oop_petrov.dir/main.cpp.o" \
"CMakeFiles/oop_petrov.dir/petrov_item.cpp.o" \
"CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o"

# External object files for target oop_petrov
oop_petrov_EXTERNAL_OBJECTS =

oop_petrov: CMakeFiles/oop_petrov.dir/main.cpp.o
oop_petrov: CMakeFiles/oop_petrov.dir/petrov_item.cpp.o
oop_petrov: CMakeFiles/oop_petrov.dir/petrov_shop.cpp.o
oop_petrov: CMakeFiles/oop_petrov.dir/build.make
oop_petrov: CMakeFiles/oop_petrov.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/s1ash/oop_petrov/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable oop_petrov"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oop_petrov.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oop_petrov.dir/build: oop_petrov
.PHONY : CMakeFiles/oop_petrov.dir/build

CMakeFiles/oop_petrov.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oop_petrov.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oop_petrov.dir/clean

CMakeFiles/oop_petrov.dir/depend:
	cd /home/s1ash/oop_petrov/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s1ash/oop_petrov /home/s1ash/oop_petrov /home/s1ash/oop_petrov/build/Desktop-Debug /home/s1ash/oop_petrov/build/Desktop-Debug /home/s1ash/oop_petrov/build/Desktop-Debug/CMakeFiles/oop_petrov.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/oop_petrov.dir/depend

