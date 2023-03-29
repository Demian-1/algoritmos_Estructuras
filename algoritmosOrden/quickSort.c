#include <stdio.h>

int particion(int arr[], int low, int high){
    int i = low - 1;
    int pivot = arr[high];
    int aux;

    for(int j = low; j<high; j++){
        if(arr[j] <= pivot){
            i++;
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
        }
    }

    aux = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = aux;

    return i+1;
}

void quickSort(int arr[], int low,int high){
    int pi;
    
    if(low<high){
        pi = particion(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);

    }
}

void print(int vectIn[], int n){
    printf("Arreglo: \n");
    int i;
    for(i=0; i<n; i++){
        printf("%d, ",vectIn[i] );
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {1990, 1990, 10, 5, 6, 100, 0, 1, -10, 9,7,8,6,4,2,5,1,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("antes de otrdenar: ");
    print(arr,n);
    quickSort(arr, 0, n);
    printf("\nDespues de ordenar: ");
    print(arr,n);

    return 0;
}
