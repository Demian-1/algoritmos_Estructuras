#include <stdio.h>
#define SIZE 5
int rear, front;
int items[SIZE];
void enQueue(int value){
    if (rear ==  SIZE - 1){
        printf("Nuestro queue esta lleno \n");
    } else {
        if(front == -1){
            front = 0;
        }
        rear++;
        items[rear] = value;

        printf("Se inserto el valor %d, en la poscicion %d correctamente \n", value, rear);
    }


}

