#include<stdio.h>

typedef struct{
        int    id;
        char   name[25];
        char   phoneNumber[12];
    } CIS;


void printInfo(CIS);
    
int main(){
    CIS customer1 = {1,"Mahruf","01551120134"};
    CIS customer2 = {2,"Prottoy","01713391323"};
    CIS customer3 = {3,"Abir","01552320134"};
    CIS customer4 = {4,"kabir","01718491323"};
    
    printInfo(customer1);
    printInfo(customer2);
    printInfo(customer3);
    printInfo(customer4);

    return 0;

};

void printInfo(CIS cus){
    printf("Serial No: %d\n",cus.id);
    printf("Name: %s\n", cus.name);
    printf("Phone Number: %s\n", cus.phoneNumber);
    printf("\n");
}