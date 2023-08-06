#include<stdio.h>
#include<ctype.h>

void printAge(int *age){
    printf("Your age is %d",*age);
}

int main(){

    int age = 26;
    int *pAge = NULL;
    pAge = &age;

    printf("The value of age %d\n",age);
    printf("The address of age %p\n",&age);

    printf("The value of pAge is %p\n",pAge);
    printf("The address of pAge is %p\n",*pAge);
    printf("The dereferenced value of pAge is %d\n",*pAge);

    printf("The size of age is %d bytes\n",sizeof(age));
    printf("The size of pAge is %d bytes\n",sizeof(pAge));

    printAge(*pAge);

    return 0;
}