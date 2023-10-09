#include <stdio.h>
#define SIZE 2
int enQueue(int);
void deQueue();
void display();
int items[SIZE], front = -1, rear = -1;

int main() {
int x;
x = 1;
while(x){
printf("1.Book \n2.Exit\n");
int ch;
scanf("%d",&ch);
switch(ch){
case 1:
printf("1.Movie 1 \n2.Movie 2\n");
int mov;
scanf("%d",&mov);
printf("Enter no. of tickets\n"); int num;
scanf("%d", &num);
x = enQueue(num);
break;
case 2:
x = 0;
display();
break;
}
}
display();
return 0;
}

int enQueue(int value) {
if (rear == SIZE - 1){
printf("\nQueue is Full!!");
return 0;
}
else {
if (front == -1)
front = 0;
rear++;
items[rear] = value;
return 1;
}
}

void display() {
if (rear == -1)
printf("\nQueue is Empty!!!");
else {
int i;
printf("\nQueue elements are:\n"); for (i = front; i <= rear; i++)
printf("%d ", items[i]);
}
printf("\n");
}