#include <stdio.h>

void sortArray (int arr[], int size){
    int temp;
    for (int i=0; i < size-1;i++ ){

        for(int j = 0; j < size-1 ; j ++){

            if(arr[j]> arr[j+1]){
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }

        }

    }

}
void display(int arr[], int size){

    for (int i = 0; i < size; i ++){
        printf("%d.)%d\n",i+1,arr[i]);
    }
}

int main(){
    int arrS[] = {86,5432,565,43,323,675,23,445,343};
    int size = sizeof(arrS)/ sizeof(arrS[0]);
    printf("size is %d\n",size);

    sortArray(arrS,size);
    display(arrS,size);
    return 0;
}