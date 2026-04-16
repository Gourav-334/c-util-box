# Compiling source codes into objects.

gcc -c ../src/safe_util/mem_rel.c -o ../obj/safe_util/mem_rel.o
gcc -c ../src/safe_util/mem_realloc.c -o ../obj/safe_util/mem_realloc.o
gcc -c ../src/safe_util/mem_alloc.c -o ../obj/safe_util/mem_alloc.o
gcc -c main.c -o ../obj/safe_util/main.o


# Combining objects into single binary.

gcc -o main ../obj/safe_util/main.o ../obj/safe_util/mem_realloc.o ../obj/safe_util/mem_alloc.o ../obj/safe_util/mem_rel.o