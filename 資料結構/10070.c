#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _country
{
    char name[64];
    int people;
    struct _country *next;
} Country;
Country *head;
void dump()
{
    Country *p = head;
    int cnt = 0;
    while (p)
    {
        printf("[%d]name=%s, people=%d\n", ++cnt, p->name, p->people);
        p = p->next;
    }
}
void freeall()
{
    Country *p = head;
    Country *n;
    while (p)
    {
        printf("free %s\n", p->name);
        n = p->next;
        free(p);
        p = n;
    }
}
void insertsort(Country *p)
{
    printf("Insert %s...\n", p->name);

    if (!head)
    {
        head = p;
        return;
    }

    Country *curr = head, *prev = NULL;
    for (; curr; prev = curr, curr = curr->next)
    {
        if (strcmp(curr->name, p->name) > 0 || (strcmp(curr->name, p->name) == 0 && curr->people >= p->people))
        {
            p->next = curr;
            if (prev)
                prev->next = p;
            else
                head = p;
            return;
        }
    }

    prev->next = p;
    return;
}
int main()
{
    char name[64];
    int people;
    Country *p;
    while (scanf("%s%d", name, &people) == 2)
    {
        p = (Country *)malloc(sizeof(Country));
        strcpy(p->name, name);
        p->people = people;
        p->next = NULL;
        insertsort(p);
        dump();
    }
    freeall();
}