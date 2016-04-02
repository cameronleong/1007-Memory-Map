#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int gInt = 10, gIntUn;              // global int var initialised and uninitialised
char gCharArr[] = "testing 123";    // global char array initialised
char gCharArrUn[10];                // global char array uninitialised
char *gPtr = "hello", *gPtrUn;      // global char pointer initialised and uninitialised
float gFloat = 123.4;               // global float var initialised
double gDoubleUn;                   // global double var uninitialised
char gCharArrUn2[10];               // global char array uninitialised
char gCharArrUn3[10];               // global char array uninitialised

int f2(int f2IntA)
{
    char *f2CharPtr;
    int f2IntE = 20;
    f2CharPtr = malloc(100); // dynamically allocated memory
    
    // printing address of f2 first argument f2IntA
    printf("Print out the address of f2 first argument f2IntA\n");
    printf("f2IntA is located at %p\n", &f2IntA);
    printf("\n");

    // printing addresses of f2CharPtr and f2IntE
    printf("Print out the addresses of f2CharPtr and f2IntE\n");
    printf("f2CharPtr is located at %p\n", &f2CharPtr);
    printf("f2IntE is located at %p\n", &f2IntE);
    printf("\n");

    // printing starting address of the dynamically allocated memory
    printf("Print out the starting address of the dynamically allocated memory\n");
    printf("f2CharPtr (dynamically allocated 2/2) is located at %p\n", f2CharPtr);
    
    // L: f2IntA = 10;
    return f2IntA;
}

void f1(int f1IntA, int f1IntB, float f1FloatA, char f1CharA, double f1DoubleA) 
{
    int f1IntC = 10, f1IntD;
    char *f1CharPtrA = "inside f1"; // pointer to another string literal
    char *f1CharPtrB;
    f1CharPtrB = malloc(100); // dynamically allocated memory
    printf("\n");
    
    // printing addresses of all the function arguments
    printf("Print out the addresses of all the function arguments\n");
    printf("f1IntA is located at %p\n", &f1IntA);
    printf("f1IntB is located at %p\n", &f1IntB);
    printf("f1FloatA is located at %p\n", &f1FloatA);
    printf("f1CharA is located at %p\n", &f1CharA);
    printf("f1DoubleA is located at %p\n", &f1DoubleA);
    printf("\n");

    // printing local variable addresses
    printf("Print out the addresses of f1IntC, f1IntD, f1CharPtrA, f1CharPtrB\n");
    printf("f1IntC is located at %p\n", &f1IntC);
    printf("f1IntD is located at %p\n", &f1IntD);
    printf("f1CharPtrA is located at %p\n", &f1CharPtrA);
    printf("f1CharPtrB is located at %p\n", &f1CharPtrB);
    printf("\n");
    
    // printing dynamically allocated memories (1/2)
    printf("f1CharPtrB (dyanmically allocated 1/2) is located at %p\n", f1CharPtrB);

    // printing address of the string literal "inside f1"
    printf("Print out the address of the string literal \"inside f1\"\n");
    printf("String literal \"%s\" is located at %p\n", f1CharPtrA, f1CharPtrA);
    
    f1IntD = f2(10);
    return;
}

int main(int argc, char *argv[])
{   
    // pointers to functions
    void (*fPtrf1)(int, int, float, char, double) = &f1;
    int (*fPtrf2)(int) = &f2;
    int (*fPtrMain)(int, char**) = &main;

    printf("\n\n\n");

    // output the addresses of argc, argv
    printf("Argc is located at address %p\nArgv is located at address%p\n", &argc, &argv);
    printf("\n");
    
    // output the start & end addresses of command line arguments
    
    
    // printing function addresses
    printf("Printing function addresses\n");
    printf("Function f1 is located at address %p\n", fPtrf1);
    printf("Function f2 is located at address %p\n", fPtrf2);
    printf("Function main is located at address %p\n", fPtrMain);
    printf("\n");

    // printing string literals
    printf("Printing string literals\n");
    printf("String literal \"%s\" is located at %p\n", gCharArr, gCharArr);
    printf("String literal \"%s\" is located at %p\n", gPtr, gPtr);
    printf("\n");

    // printing intialised global variables
    printf("Printing intialised global variables\n");
    printf("Initialised global variable gInt is located at %p\n", &gInt);
    printf("Initialised global variable gCharArr is located at %p\n", &gCharArr);
    printf("Initialised global variable gPtr is located at %p\n", &gPtr);
    printf("Initialised global variable gFloat is located at %p\n", &gFloat);
    printf("\n");

    
    // printing uninitialised global variables
    // printf("Printing uninitialised global variables\n");
    // printf("Uninitialised global variable gIntUn is located at %p\n", &gIntUn);
    // printf("Uninitialised global variable gCharArrUn is located at %p\n", &gCharArrUn);
    // printf("Uninitialised global variable gPtrUn is located at %p\n", &gPtrUn);
    // printf("Uninitialised global variable gDoubleUn is located at %p\n", &gDoubleUn);
    // printf("\n");
    
    f1(50, 50, 50.0, 'A', 50.0);

    printf("My OS bit size is %u\n", sizeof(void *) * 8);
    exit(0);
    
}










