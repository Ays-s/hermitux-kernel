#define CLASS 'B'
/*
   This file is generated automatically by the setparams utility.
   It sets the number of processors and the class of the NPB
   in this directory. Do not modify it by hand.
   This file provided for backward compatibility.
   It is not used in DC benchmark.   */
   
long long int input_tuples=10000000, attrnum=20;
#define COMPILETIME "17 Oct 2017"
#define NPBVERSION "3.3.1"
#define CC "../../musl/prefix/bin/musl-gcc"
#define CFLAGS "-g -Wall -O3 -mcmodel=medium"
#define CLINK "$(CC)"
#define CLINKFLAGS "-O3 -mcmodel=medium"
#define C_LIB "-static -L../../musl/prefix/lib -lm"
#define C_INC "-I../common -I../../musl/prefix/include"