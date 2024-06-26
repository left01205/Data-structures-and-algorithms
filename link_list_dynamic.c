//
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *link;
};
int main() 
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct node *head = NULL, *temp = NULL;
    for(int i = 0; i < n; i++) 
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value for node %d: ", i+1);
        scanf("%d", &temp->info);
        temp->link = NULL;

        if(head == NULL) 
        {
            head = temp;
        } 
        else 
        {
            struct node *p = head;
            while(p->link != NULL) 
            {
                p = p->link;
            }
            p->link = temp;
        }
    }

    return 0;
}
