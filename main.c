// Online C compiler to run C program online
#include <stdio.h>
#define s  10
/*
void array_remove_prime(int *arr,int size);
void array_print(int *arr,int size);
*/
int array_mostrepeated(int* arr,int size,int* pnum){




}
int main() {

    int arr[]={1,5,2,4,1,5,2,78,-2,2,1,4,5,3,8,4,8,3,2,1,1,5,3};
    int size = sizeof(arr)/sizeof(arr[0]) ; //

    int rep,num;

    array_print(arr,size);
    rep = array_mostrepeated(arr,size,&num);

    printf("number %d is repeated  %d\n",num,);


    return 0;
}
