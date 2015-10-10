#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "node.h"

typedef struct node_t node;


/* head init ,head node don't display any information */
int node_init(struct node_t *head);

/* need node_name amd nontent*/
int node_malloc(struct node_t **node_tmp,char *name,char *content){

    if(*node_tmp==NULL){
        *node_tmp=malloc(sizeof(node));
    }else{
            printf("malloc duplicate!");
            return -1;
    }
    strncpy((*node_tmp)->name,name,strlen(name)+1);    
    strncpy((*node_tmp)->content,content,strlen(content)+1);    
    (*node_tmp)->color=WHITE;
    (*node_tmp)->display=false;
    
    int i;
    for(i=0;i<9;i++)
        (*node_tmp)->child_ptr[i]=NULL;
    return 0;

}
int node_arrow(struct node_t *parent,struct node_t *child);

int node_save(struct node_t *head);

int one_node_display(struct node_t *node){
    if(node==NULL)
        return -1;
    
    printf("node->name    %s\n",node->name   ); 
    printf("node->content %s\n",node->content ); 
    printf("node->color   %d\n",node->color   );
    printf("node->display %d\n",node->display ); 
}
