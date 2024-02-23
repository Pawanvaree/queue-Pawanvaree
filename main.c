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


   int i,x;
   

for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            if(x!=0)printf("dequeing %d\n",x);
            else printf("Empty queue\n");
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
