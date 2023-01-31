# Embedded operating systems
## day1
- General purpose system
- Embedded systems
    - specific or dedicated functionality
- system
    - hardware
        - cpu
            - program counter / instructin pointer
            - flags
            - stack pointer
            - general purpose registers(GPRS)
            - memory
            - I/O
    - algorothm
        - instructions
        - data
- Risc / cisc processor
- processors
    - microprossessors
    - microcontroller( all in one silicon)
        - cpu
        - memory
        - I/O
- git instructions
    - git commit - m " documented basic concepts"
    - git init
    - git add
    - git status
    - git commit -m
    - git log
- instructions commands
```bash
    - CC=gcc
    - main : main.o mul.o div.o
	    - $(CC)-o main main.o mul.o div.o
    - main.o : main.c
	    - $(CC) -c -o main.o main.c
    - mul.o : mul.c
	    - $(CC) -c -o mul.o mul.c
    - div.o : div.c
	    - $(CC) -c -o div.o div.c
    - clean :
	    - rm -rf main.o mul.o div.o
 ```        
- impoted file should be used at
```bash
    - main : main.o mul.o div.o
	    - $(CC) -o main main.o mul.o div.o -larith11 -L.
 ```
 ## Day2
 - conditional compilation does not work in in make file because '#' is treated as comment
 ```bash
 #ifdef(x85)
 CC=gcc
#elif(arm)
CC=arm-linux-gneuabi-gcc
#endif
```
- to create a library file in makefile
```bash
lib: mul.o div.o
	ar crv libarith.a mul.o div.o
 ```    
 - # lecture
 - stack,stack pointer,stack frame
 - stack frame
    - return address
    - arguments
    - local variables
- how are arguments passed to function ?
    - registers
    - ARM
        - =>Args => R0-R3
        - => Morethan 4 args => stack
- frame pointer
    - it is used access loacal variables and args
    - every stack frame has different pointer
- sections
    - .text => Instructions
    - .data => global Initialized
    - .bss => glabal uninitialized
    - .heap => Dynamic memory allocation
    - .stack => Args,local variables, return address
- program
    - dormant entities
    - hard disk /secondary storage
    - ./main => loaded into RAM
- Process
    - Active entity
    - progarm under execution
- process
    - ID(process ID)
- process Tree
    - PID(get pid)
    - paren_PID(get parent PID)
    ## Day3
    - fork
    - dynamic library / shared objects
    - process control block(pcb)
    - parallelism
        - true parellelism
            - multi process systems
        - pseudo parallelism
            - uni process systems
- differentiated between static and dynamic libraries
## day 4
- user space(tasks)
- kernel space
- system call
    - open,read,write,close
- differentiate between library and system call
- errno ,perror
- std in ,stdout,stderr(0,1,2)
- strace
- inter process communication
- pipes

