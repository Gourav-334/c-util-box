# Compiling source codes into objects.

gcc -c ../src/safe_util/mem_alloc.c -o ../obj/safe_util/mem_alloc.o
gcc -c main.c -o ../obj/safe_util/main.o


# Combining objects into single binary.

gcc -o main ../obj/safe_util/mem_util.o ../obj/safe_util/main.o