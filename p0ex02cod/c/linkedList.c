#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod*next
}
node;

int main(void)
{
    node *list = NULL;
    printf("size of a node = %d", sizeof(node));
    printf("list = %d\n", list);
    printf("*list = %d\n", *list);
    printf("&list = %d\n", &list);
    printf("list->number = %d\n", list->number);
    printf("list->next = %d\n", list->next);
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;
    printf("list = %d\n", list);
    printf("*list = %d\n", *list);
    printf("&list = %d\n", &list);
    printf("list->number = %d\n", list->number);
    printf("list->next = %d\n", list->next);
    return 0;
}
