// Online C compiler to run C program online
#include <stdio.h>
#define s  7
void array_print(int *arr,int size){
    for (int i =0;i<size;i++){
        printf("%d   ",arr[i]);
    }
    printf("\n");
}

char isPrime(int n)
{
    if (n == 1 || n == 0)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void array_remove_prime(int *arr,int size){
    for (int i =0;i<size;i++){
        while (isPrime(arr[i])){

            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }

    }
    array_print(arr,size);
}

int main() {

    int arr[s]={5,7,8,9,11,13,14};

    array_print(arr,s);
    array_remove_prime(arr,s);

    return 0;
}
