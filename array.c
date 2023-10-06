
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
// returns the first place
int array_search(int *arr,int size,int num){

    int i;
    for( i =0; i<size;i++){
            if(arr[i]== num){
            return i;
            }
    }
    return -1;
}
// returns the last place
int array_search2(int *arr,int size,int num){

    int i;
    for( i =size-1; i>=0;i--){
            if(arr[i]== num){
            return i;
            }
    }
    return -1;
}
int array_search3(int *arr,int size,int num){

    int index =-1;
    for( int i =0; i<size;i++){
            if(arr[i]== num){
            index=i;
            }
    }
    return index;
}

int array_search4(int *arr,int size,int *c ,int num){

    int index =-1;
    *c=0;
    for( int i =0; i<size;i++){
            if(arr[i]== num){
            index=i;
            (*c)++;
            }
    }
    return index;
}

void array_swap(int* arr1,int s1,int* arr2,int s2){
 int i , temp;
 for (i=0;i<size;i++){
    temp = arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
 }

 void array_swap2(int* arr1,int s1,int* arr2,int s2){
 int i , temp ,size =s1;
 if (s1>s2)
    size=s2;

 for (i=0;i<size;i++){
    temp = arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
 }
}

int  array_swap3(int ar1[],int s1,int*ar2,int s2)
{

    int i,temp,size=s1;
    if(s1==s2)
    {
        for(i=0; i<size; i++)
        {
            temp=ar1[i];
            ar1[i]=ar2[i];
            ar2[i]=temp;
        }
        return 1;
    }
    else
    {
        return 0;
    }


}
