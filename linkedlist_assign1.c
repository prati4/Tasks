#include <stdio.h>
#include<stdlib.h> 
//create self referential structure
 typedef struct node
{ 
    int data;
    struct node *link; //here link must be pointer to the struct node
}node;
node *first=NULL;
node *last=NULL;
void create(int ele)
{
    node *ptr=(node*)malloc(sizeof(node));  //malloc is help to create the node
                                            // malloc return void pointer which is typecast as node
    ptr->data=ele;
    ptr->link=NULL;
  //  printf("%d",first->data);
   if(first==NULL)
    {   
        first=ptr;
        last=ptr;
    }
    else{
        last->link=ptr;
        last=ptr;
    }
}

   void display()
   {
       if(first==NULL)
       {
        printf("empty list\n");
       }
       else
       {
     node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
    temp=temp->link;
    } 
       } 
       
   }
   int main()
    { 
        create(100);
        create(200);
        create(300);
        printf("displaying list\n");
        display();
        return 0;
    }
