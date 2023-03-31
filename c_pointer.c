//pointers ==>

#include <stdio.h>
#include <stdlib.h>

void basic_of_pointers();
int main(){
    basic_of_pointers();
    
    
    return 0;
}

void basic_of_pointers(){
    int a = 10;//normal variable declaration
    printf("the value of a:%d\n",a);//print normal integer value
    printf("the address of a:%X\n",&a);//print address by using & ==> address sign 
    printf("the size of a:%d\n",sizeof(a));
    
    //pointer store address of variable
    //pointer has data type 
    //data type is important because of different in memory management
    //if we add 1 to pointer, it's not only +1, it can be the +1 or +4 and more byte
    
    int *i = NULL;//pointer variable declaration // we should use NULL
    i = &a;//store address of variable
    printf("The address of a:%x\n",i);//i = &a 
    printf("The value of variable a:%d\n",*i);//i store the address of a; a = 10; so *i = a = 10
    // use * when declare pointer and use the value
    
}

