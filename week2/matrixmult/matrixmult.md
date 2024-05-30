riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -o ./matrixmult_64.o matrixmult.c
spike pk ./matrixmult_64.o 
riscv64-unknown-elf-objdump -d -r ./matrixmult_64.o > matrixmult_64_assembly.txt
