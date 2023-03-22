#include <stdio.h>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vectIn[], int n){
    
    int i,j;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if( vectIn[j] > vectIn[j+1] ){
                swap(&vectIn[j], &vectIn[j+1]);
            }
        }
    }

}

int print(int vectIn[], int n){
    printf("Arreglo: \n");
    int i;
    for(i=0; i<n; i++){
        printf("%d, ",vectIn[i] );
    }
}

int main(int argc, char const *argv[])
{
    int vector[] = {100, 10, 4, 6, -1, 7, 8, 30};
    int n = sizeof(vector)/sizeof(vector[0]);

    printf("antes de otrdenar: ");
    print(vector,n);
    bubbleSort(vector, n);
    printf("\nDespues de ordenar: ");
    print(vector,n);
    return 0;
}
