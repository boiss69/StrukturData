#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node* next;
};


struct Node* front = NULL;
struct Node* rear = NULL;


void Enqueue(int x) {
struct Node* temp = 
(struct Node*)malloc(sizeof(struct Node));
temp->data =x; 
temp->next = NULL;
if(front == NULL && rear == NULL){
front = rear = temp;

return;
}

rear->next = temp;
rear = temp;
}

void Dequeue() {
struct Node* temp = front;
if(front == NULL) {
printf("Queue is Empty\n");

return;
}

if(front == rear) {
front = rear = NULL;
}

else {

front = front->next;
}

free(temp);
}


int Peek() {
if(front == NULL) {
printf("Queue is empty\n");
}

return front->data;
}

void Print() {
struct Node* temp = front;
while(temp != NULL) {
printf("%d ",temp->data);
temp = temp->next;
}

printf("\n");
}

int main(){
printf("\n");
printf("First Insertion\n");
Enqueue(2); Print(); 
printf("Second Insertion\n");
Enqueue(4); Print();
printf("Third Insertion\n");
Enqueue(6); Print();
printf("State of queue after Dequeue() operation\n");
Dequeue();  Print();
printf("Fourth Insertion\n");
Enqueue(8); Print();

}
