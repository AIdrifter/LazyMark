#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../node/node.h"

typedef struct node_t node;

int main(){
    puts("test program for node working");
    node *node_tmp=NULL;
    node_malloc(&node_tmp,"first node","first conetent test");
    one_node_display(node_tmp);

}
