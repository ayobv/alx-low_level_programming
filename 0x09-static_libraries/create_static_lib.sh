#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name '*.c')

# Compile each .c file into a .o object file
for c_file in $c_files; do
  object_file="${c_file%.c}.o"
  gcc -c "$c_file" -o "$object_file"
done

# Create the static library from all the .o object files
ar rcs liball.a *.o

# Clean up the .o object files
rm -f *.o
