#include <stdio.h>
#include <stdlib.h>

int size = 9;

int bubbleSort(int array[], int size){
    int i;
    int temp;
    int count = 0;
    
    int swapCounter[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (i = 0; i < size-1; i++){
        if (array[i] > array[i+1]){
            count++;
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
            swapCounter[i]++;
            swapCounter[i+1]++;
            temp=swapCounter[i];
            swapCounter[i]=swapCounter[i+1];
            swapCounter[i+1]=temp;
            i = -1;
        }
    }

    for(int k = 0; k < size; k++){
        printf("%d swapped %d time(s).\n", array[k], swapCounter[k]);
    }
    printf("%d\n", count);
}

int selectionSort(int array[], int size){

    int i, j, min, temp;
    int count = 0;
    int swapCounter[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int k = 0; k < size; k++){
        printf("%d ", array[k]);
    }
    printf("\n");
    for(i = 0; i < size-1; i++){
        min = i;
        for(j = i; j < size; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        if(i != min){
            temp=array[min];
            array[min]=array[i];
            array[i]=temp;
            count++;
            swapCounter[i]++;
            swapCounter[min]++;
            temp=swapCounter[min];
            swapCounter[min]=swapCounter[i];
            swapCounter[i]=temp;
        }
        
        
    }
    for(int k = 0; k < size; k++){
        printf("%d swapped %d time(s).\n", array[k], swapCounter[k]);
    }
    printf("%d\n", count);

}

int main(){

    int array1[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int array2[] = {90,  80,  70,  60,  50,  40,  30,  20,  10};

    bubbleSort(array1, size);
    bubbleSort(array2, size);
    selectionSort(array1, size);
    selectionSort(array2, size);

    
    return 0;
}