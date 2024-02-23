

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


int enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node){
    new_node->order=x;
    new_node->data=y;
    if(q->size==0)q->headPtr=new_node;
    else q->tailPtr->nextPtr=new_node;
    q->tailPtr=new_node;
    q->size++;
    return x;
  }

  /*Finish enqueue */
 
}


int dequeue_struct(Queue *q){
   int cash,price;
   NodePtr t=q->headPtr;
   if(t){
   int value= t->order;
   switch (value) {
      case 1:
        printf("Ramen\n");
        price = 100*t->data;
        printf("You have to pay %d\n",price);
        while(1){
          printf("Cash : ");
          scanf("%d",&cash);
          if(cash == price){
            printf("Thank you\n");
            break;
          }
          else if(cash > price){
            printf("Thank you\n");
            printf("Change : %d\n",cash-price);
            break;
          }
        }
        break;
      case 2:
        printf("Somtum\n"); 
        price = 20*t->data;
        printf("You have to pay %d\n",price);
        while(1){
          printf("Cash : ");
          scanf("%d",&cash);
          if(cash == price){
            printf("Thank you\n");
            break;
          }
          else if(cash > price){
            printf("Thank you\n");
            printf("Change : %d\n",cash-price);
            break;
          }
        }
        break;
      case 3:
        printf("Fried Chicken\n");
        price = 50*t->data;
        printf("You have to pay %d\n",price);
        while(1){
          printf("Cash : ");
          scanf("%d",&cash);
          if(cash == price){
            printf("Thank you\n");
            break;
          }
          else if(cash > price){
            printf("Thank you\n");
            printf("Change : %d\n",cash-price);
            break;
          }
        }
        break;
      default: printf("No Food\n");
    }
   q->headPtr= t->nextPtr; // NULL
   free(t);
   if(q->size==1) q->tailPtr=NULL;
   q->size--;
   return value;
   }
   else
   //printf("Empty queue ");
   return 0;
}

