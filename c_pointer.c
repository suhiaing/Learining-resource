//pointers ==>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void basic_of_pointers();
void use_pointer_in_fun();
void increment_decrement();
void pointer_of_array();
void character_array();
int main(){
    character_array();
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

    int *i = NULL;//pointer variable declaration // we should assign NULL like we assign variable 0
    i = &a;//store address of variable
    printf("The address of a:%x\n",i);//i = &a
    printf("The value of variable a:%d\n",*i);//i store the address of a; a = 10; so *i = a = 10
    // use * when declare pointer and application the value
    // ip = address
    // *ip = value


    //when we use pointer we have to check the pointer are NULL or not
    int *ptr = NULL;//we should assign pointer NULL
    ptr = &a;//if we don't assign the address of pointer
    if(ptr == NULL){//it doesn't work
        printf("pointer is NULL! You can't use\n");
    }
    if(ptr != NULL){// it will work
        printf("pointer isn't NULL! You can use\n");
    }

}

void increment_decrement(){

 int value[3] = {10,20,30};
 int *ptr = NULL;
 ptr = value;//settingthe pointer to point to the first element of the array
 //ptr = &value;//initializing the pointer to point to the entire array
 //array address is array name so, ptr = arr_Name; = &arr_Name[0]
 int len = sizeof(value)/sizeof(value[0]);
 printf("original array length:%d\n",len);
 printf("address of value%x\n",ptr);

 ptr+=2; // ptr = address of value; so it increase one more address of the size of memory(int,char)
 //so in array it will increase the index
 len = sizeof(value)/sizeof(value[0]);
 printf("array length after ptr++ is: %d\n",len);
 printf("address of value%x\n",ptr);

 *ptr = 100;
 printf("value after using *ptr = 100:%x\n",value);
  for(int i=0;i<len;i++){
     printf("the %d value of array\n",value[i]);

  }
  ptr = value;//if we don't add this line it will printing garbage values beyond the array boundaries
  //ptr is used to access the array elements,
  //but it has been incremented in the previous line (ptr+=2) to point to the third element of the array.
  //another way to print data of an array
  for(int i=0; i<len; i++){
    printf("anoth way to print the %d value of array: %d\n", i,*(ptr+i));
  }
  //explaination of upper code
  //ptr ++ mean it move to another index
  //*ptr is the value
  //so *(ptr+i) print all value
  for(int i=0;i<len;i++){
      printf("value of array[%d] is:%d",i,*ptr);
      ptr++;
  }
  //ptr ++ will move to next address(index)
}

void pointer_of_array(){


    int value[] = {100,200,300};
    int i, *ptr[3];
    for(int i = 0;i<3;i++){
        ptr[i] = &value[i];
        printf("value of value[%d] = %d:memory address is %x\n",i,value[i],&value[i]);
        printf("value in pointer_arr[%d] = %dmemory address is %x\n",i,*ptr[i],ptr[i]);
    }
}

void character_array(){
    //two D array when use pointer
    int *p = NULL;
    char *names[] = {
        "Zarni",
        "Zarni",
        "Htun",
        "Thazin",
        "Zarni"
    };
    p = names;
    printf("%x 0 value:%s\n",p,names[0]);
    printf("%x 1 value:%s\n",p+1,names[1]);
    for(int i=0;i<5;i++){
        if(*(p) == *(p+i)){
            printf("%d same  ",i);
        }else{
            printf("%d NOT same  ",i);
        }
    }

    // for(int i=0;i<5;i++){
    //     // int len_of_element = sizeof(names[i])/sizeof(names[i][0]);//returns the size of a pointer, which is typically 8 bytes on a 64-bit system
    //     int len_of_element = strlen(names[i]);
    //     printf("%d array is",i);
    //     for(int j=0;j<len_of_element;j++){
    //         printf("%c ",names[i][j]);//error raise
    //         printf("%x   ",&names[i][j]);
    //     }
    //     printf("\n");

    //     // p = &names[i][0];
    //     // for(int j = 0;j<5;j++){
    //     //     //p+=j;
    //     //     printf("%c  ",*(p));
    //     //     printf("%x  ",p);

    //     // }
    //     printf("\n");
    // }

}


void use_pointer_in_fun(){


}

