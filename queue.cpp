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
printf("Masukkan Angka Pertama\n");
Enqueue(22); Print(); 
printf("Masukkan Angka Kedua\n");
Enqueue(44); Print();
printf("Masukkan Angka Ketiga\n");
Enqueue(66); Print();
printf("Keadaan queue setelah Operasi Dequeue()\n");
Dequeue();  Print();
printf("Masukkan Angka Keempat\n");
Enqueue(88); Print();

}
