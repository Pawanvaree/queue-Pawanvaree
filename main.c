#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;

  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   /*enqueue_struct(&q,5);
   enqueue_struct(&q,6);
   enqueue_struct(&q,7);
   printf("%d\n",dequeue_struct(&q));
   printf("%d\n",dequeue_struct(&q));
   printf("%d\n",dequeue_struct(&q));
   printf("%d\n",dequeue_struct(&q));*/
// 5 x 6 x 7 x


//For struct Queue


   int i,x,y,n = 0;
   

for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            n++;
            if(q.size != 0){
              printf("Custumer no: %d\n",n);
              x = dequeue_struct(&q);
              //printf("dequeing %d\n",x);
            }
            else printf("the queue is empty\n");
        }
        else {
        y = enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
        printf("My order is %d\n",y);
        i++;
           
        }
 }
  return 0;
}
