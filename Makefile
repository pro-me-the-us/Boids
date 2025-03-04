# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/pro-me-the-us/Projects/Boids

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pro-me-the-us/Projects/Boids

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pro-me-the-us/Projects/Boids/CMakeFiles /home/pro-me-the-us/Projects/Boids//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pro-me-the-us/Projects/Boids/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Boids

# Build rule for target.
Boids: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Boids
.PHONY : Boids

# fast build rule for target.
Boids/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/build
.PHONY : Boids/fast

src/boid.o: src/boid.cpp.o
.PHONY : src/boid.o

# target to build an object file
src/boid.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/boid.cpp.o
.PHONY : src/boid.cpp.o

src/boid.i: src/boid.cpp.i
.PHONY : src/boid.i

# target to preprocess a source file
src/boid.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/boid.cpp.i
.PHONY : src/boid.cpp.i

src/boid.s: src/boid.cpp.s
.PHONY : src/boid.s

# target to generate assembly for a file
src/boid.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/boid.cpp.s
.PHONY : src/boid.cpp.s

src/flock.o: src/flock.cpp.o
.PHONY : src/flock.o

# target to build an object file
src/flock.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/flock.cpp.o
.PHONY : src/flock.cpp.o

src/flock.i: src/flock.cpp.i
.PHONY : src/flock.i

# target to preprocess a source file
src/flock.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/flock.cpp.i
.PHONY : src/flock.cpp.i

src/flock.s: src/flock.cpp.s
.PHONY : src/flock.s

# target to generate assembly for a file
src/flock.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/flock.cpp.s
.PHONY : src/flock.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Boids.dir/build.make CMakeFiles/Boids.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Boids"
	@echo "... src/boid.o"
	@echo "... src/boid.i"
	@echo "... src/boid.s"
	@echo "... src/flock.o"
	@echo "... src/flock.i"
	@echo "... src/flock.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

