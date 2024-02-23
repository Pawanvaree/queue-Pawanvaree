

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
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
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

