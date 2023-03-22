#include <stdio.h>
#define SIZE 5

int rear=-1, front=-1, values[SIZE]; 

void enQueue(int value){
    if (rear ==  SIZE - 1){
        printf("Nuestro queue esta lleno \n");
    } else {
        if(front == -1){
            front = 0;
        }
        rear++;
        values[rear] = value;

        printf("Se inserto el valor %d, en la poscicion %d correctamente \n", value, rear);
    }
}

void deQueue(){
    if(front == -1){
        printf("No hay nada para sacar \n");
    } else{
        printf("Se elimino el valor %d", values[front]);
        front++;
        rear++;
        if(front > rear){   // 5 > 4
            front = rear = -1;
        }
    }
}

int main(int argc, char const *argv[])
{
    enQueue(10);
    enQueue(1);
    enQueue(12);
    enQueue(13);
    enQueue(14);
    enQueue(14);
    return 0;
}