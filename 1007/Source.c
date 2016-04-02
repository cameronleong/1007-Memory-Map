#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
#include <string.h> 

int gint1i = 10, gint2ui; // global int var init and un-init 
char gchararr1i[] = "testing 123"; // global char array init 
char gchararr2ui[10];  // global char array un-init 
char *gptr1i = "hello", *gptr2ui; // global char pointer init and un-init 
float gfloati = 123.4;  // global float var init 
double  gdoubleui;   // global double var un-int  

int f2(int f2inta1) {
	char *f2charptr;
	int f2int1 = 20;
	f2charptr = malloc(100);  // dynamically allocated memory  
							  // print out the address of f2 first argument f2a1
	printf("Address of f2inta1 is : %p\n", &f2inta1);
	// print out the addresses of f2charptr and f2int1  
	printf("Address of f2charptr is : %p\n", &f2charptr);
	printf("Address of f2int1 is : %p\n", &f2int1);
	// print out the starting address of the dynamically allocated memory
	printf("Starting address of dynamically allocated memory is : %p\n", f2charptr);

L: f2int1 = 10;
	return f2int1;
}

void f1(int f1inta1, int f1inta2, float f1floata3, char f1chara4, double f1doublea5) {
	int f1int1 = 10, f1int2;
	char *f1charptr1 = "inside f1"; // pointer to another string literal  
	char *f1charptr2;

	f1charptr2 = malloc(100);  // dynamically allocated memory  
							   // print out the addresses of all the function arguments
	printf("Address of f1inta1 is : %p\n", &f1inta1);
	printf("Address of f1inta2 is : %p\n", &f1inta2);
	printf("Address of f1floata3 is : %p\n", &f1floata3);
	printf("Address of f1chara4 is : %p\n", &f1chara4);
	printf("size of f1chara4 is : %p\n",sizeof(f1chara4));
	printf("Address of f1doublea5 is : %p\n", &f1doublea5);
	// print out the addresses of f1int1, f1int2, f1charptr1, f1charptr2
	printf("Address of f1int1 is : %p\n", &f1int1);
	printf("size of f1int2 is : %p\n", sizeof(f1int2));
	printf("Addeess of f1int2 is : %p\n", &f1int2);
	printf("Address of f1charptr1 is : %p\n", &f1charptr1);
	//printf("Address held by f1charptr1 is : %p\n", f1charptr1);
	printf("Address of f1charptr2 is : %p\n", &f1charptr2);
	// print out the address of the string literal "inside f1"
	printf("Address of inside f1 is : %p\n", "inside f1");
	printf("\n");
	f1int2 = f2(10);

	return;
}
int main(int argc, char *argv[]) {
	printf("My OS bit size: %lu\n", sizeof(void *) * 8);
	// output the addresses of argc, argv 
	printf("Address of argc is : %p\n", &argc);
	printf("Address of argv is : %p\n", argv);
	// output the start & end addresses of command line arguments  
	printf("Start and end address of command line arguments is : %p\n", (void*)argv);
	//printf("End address of command line arguments is : %p\n", &f2charptr);
	// output the start addresses of function main, f1, and f2
	printf("Address of main is : %p\n", &main);
	printf("Address of f1 is : %p\n", &f1);
	printf("Address of f2 is : %p\n", &f2);
	// output the addresses of all the global variables
	printf("Address of gint1i is : %p\n", &gint1i);
	printf("Address of gint2ui is : %p\n", &gint2ui);
	printf("Address of gchararr1i is : %p\n", gchararr1i);
	printf("Address of gchararr2ui is : %p\n", &gchararr2ui);
	printf("Address of gptr1i is : %p\n", &gptr1i);
	printf("Address of gptr2ui is : %p\n", &gptr2ui);
	printf("Address of gfloati is : %p\n", &gfloati);
	printf("Address of gdoubleui is : %p\n", &gdoubleui);
	// output the addresses of string literals "testing 123" and "hello"  
	printf("Address of testing 123 is : %p\n", "testing123");
	printf("Address of hello is : %p\n", "hello");
	printf("\n");
	f1(10, -20, 30.3, 'A', 45.67);

	exit(0);
}
