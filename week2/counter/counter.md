Steps:

#Compile using riscv
riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -o ./counter_64.o counter.c 

#Generate spike output
spike pk ./counter_64.o

#Generate assembly
riscv64-unknown-elf-objdump -d -r  ./counter_64.o > counter_assembly.txt
