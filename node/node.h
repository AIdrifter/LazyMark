#ifndef NODE_H                                                                                                                
#define NODE_H

#define NAME_LENGTH 255
#define CONTENT_LENGTH 1024
#define LINK_NUM 10


typedef enum{
    WHITE,
    RED,
    YELLOW,
    GREEN,
    BLUE
}_color;


struct node_t{
    char name[NAME_LENGTH];
    char content[CONTENT_LENGTH];
    _color color;
    bool display;
    struct node_t *child_ptr[LINK_NUM];
};



/* head init ,head node don't display any information */
int node_init(struct node_t *head);

/* need node_name amd nontent*/
int node_malloc(struct node_t **node,char *name,char *content);

int node_arrow(struct node_t *parent,struct node_t *child);

int node_save(struct node_t *head);

int one_node_display(struct node_t *node);

#endif
