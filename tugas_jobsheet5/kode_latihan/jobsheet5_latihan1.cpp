//DibuatOleh_22343021_FitriWaldi

//Latihan 1
#include<stdio.h>
#include<stdlib.h>

struct node
{
 int no_pol;
 struct node *next;
};
void display(struct node* head)
{
 struct node *temp = head;
 printf("urutan parkiran : 1 \n");
 while(temp != NULL)
 {
 printf("%d nomor plat>",temp->no_pol);
 temp = temp->next;
 }
}
void insertAtFront(struct node** headRef, int value) {
 struct node* head = *headRef;
 
 struct node *newNode;
 newNode = (node*)malloc(sizeof(struct node));
 newNode->no_pol = value;
 newNode->next = head;
 head = newNode;
 
 *headRef = head;
}
int main()
{
 printf("Program menampilkan urutan parkir\n");
 
 struct node *head;
 struct node *avanza = NULL;
 struct node *hilux = NULL;
 struct node *kijangF1 = NULL;
 
 avanza = (node*)malloc(sizeof(struct node));
 hilux = (node*)malloc(sizeof(struct node));
 kijangF1 = (node*)malloc(sizeof(struct node));
 
 avanza-> no_pol = 1234;
 hilux-> no_pol  = 2345;
 kijangF1->  no_pol  = 3456;
 /* Connect nodes */
 avanza->next = hilux;
 hilux->next = kijangF1;
 kijangF1->next = NULL;
 /* Save address of first node in head */
 head = avanza;
 insertAtFront(&head, 46543);
 display(head); 
}

