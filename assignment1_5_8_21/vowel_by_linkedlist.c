
#include <stdio.h>
#include<stdlib.h>
typedef struct cll
{
    char data;
    struct cll *link;;
}node;
node *first=NULL;
node *last=NULL;
void create(char ele)
{
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=ele;
    ptr->link=ptr;
    if(first==NULL)
    {
        first=ptr;
        last=ptr;
    }else
    {
        last->link=ptr;
        last=ptr;
        last->link=first;
    }
} void display()
 {
     if(first==NULL)
     {
         printf("empty list");
         }
         else{
             node *temp=first;
             do{
                 printf("%c\n",temp->data);
                 temp=temp->link;
             }while(temp!=first);
         }
             }
int main()
    { 
        create('a');
        create('e');
        create('i');
        create('0');
        create('u');
        printf("displaying list\n");
        display();
        return 0;
    }








