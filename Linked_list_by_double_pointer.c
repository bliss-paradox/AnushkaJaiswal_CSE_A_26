#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;

};
struct node * getNode(){
    struct node *P;
    P=(struct node *)malloc(sizeof(struct node));
    return P;
}

void insBeg(struct node **list,int x){
    struct node* n;
    n=getNode();
    n->info=x;
   n->next=*list;
   *list=n;
}

void insEnd(struct node **list,int x){
    struct node *P,*n;
    P=*list;
   
    while(P->next!=NULL){
        P=P->next;
    }
     n=getNode();
     n->info=x;
     P->next=n;
     n->next=NULL;
     printf("\n");
}

void insPos(struct node **list,int pos,int x){
    struct node *P,*n;
    P=*list;
    n=getNode();

    int curr_pos=0;
    while(curr_pos!=pos-1){
        P=P->next;
        curr_pos++;
    }
    n->info=x;
    n->next=P->next;
    P->next=n;
    printf("\n");

}

void delBeg(struct node **list){
    struct node *P,*Q;
    P=*list;
    Q=P->next;
    *list=Q;
    free(P);
    printf("\n");

}

void delEnd(struct node **list){
    struct node *P,*Q;
    P=*list;
    while(P->next->next!=NULL){
        P=P->next;
    }
    Q=P->next;
    P->next=NULL;
    free(Q);
    printf("\n");
}


void delPos(struct node **list,int pos){
    struct node *P,*Q;
    P=*list;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        P=P->next;
        curr_pos++;
    }
    Q=P->next;
    P->next=P->next->next;
    free(Q);
    printf("\n");


}
void display(struct node *list){
    struct node *P;
    P=list;
    while(P!=NULL){
        printf("%d ->",P->info);
        P=P->next;
    }
    printf("NULL");
}
int main(){
    struct node *start;
    start=NULL;
    insBeg(&start,5);
    insBeg(&start,4);
    insBeg(&start,3);
    insBeg(&start,2);
    insBeg(&start,1);
    display(start); 

    insEnd(&start,7);
    insEnd(&start,8);
    display(start);

    insPos(&start,3,100);
    insPos(&start,4,200);
    display(start);



    return 0;
}