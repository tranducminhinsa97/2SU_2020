
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int *a;
    int *b;
    int *c;
    int *d;
    int *e;
    int *f;



    a = (int*)malloc(8);  *a = 10;    
    b = (int*)malloc(8);  *b = 15; 
    c = (int*)malloc(8);  *c = 20;

    printf("\nAddress of a is: %p\n",(void*)&a);
    printf("\nAddress of c is: %p\n",(void*)&c);

    free(a);
    free(b); 
    free(a); 

    d = (int*)malloc(8);    
    e = (int*)malloc(8);    
    f = (int*)malloc(8);     

    printf("\nAddress of d is: %p\n",(void*)&d);
    printf("\nAddress of f is: %p\n",(void*)&f);
    return 0;
}
