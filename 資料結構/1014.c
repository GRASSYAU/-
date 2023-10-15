#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _Country {
        char name[16];
        int population;
        int area;
        struct _Country *next;
} Country;
Country*head,*tail; // queue of input List
void dumpByArea(Country*q){
        
Country *p=head;
int cnt=0;
printf(" No         Area CountryName(Population)\n");
printf("---- ----------- -----------------------\n");
while(p!=q){
		printf("[%2d]%12d %s(%d)\n", ++cnt, p->area, p->name, p->population);
		p = p->next;
}
}
void dumpByPopulation(Country*q){
        
Country *p=head;
int cnt=0;
printf(" No   Population CountryName(Area)\n");
printf("---- ----------- -----------------------\n");
while(p!=q){
		printf("[%2d]%12d %s(%d)\n", ++cnt, p->population, p->name, p->area);
		p = p->next;
}
}
void dumpByName(Country*q){
        Country *p=head;
        int cnt=0;
        printf(" No   CountryName  Population        Area\n");
        printf("---- ------------ ----------- -----------\n");
        while(p!=q){
                printf("[%2d] %-12s%12d%12d\n", ++cnt, p->name, p->population, p->area);
                p = p->next;
        }
}
char *byName[]={"population", "area", "name", ""};
void (*dumpCountry[])(Country*)={dumpByPopulation, dumpByArea, dumpByName};
int indexOfBy(char*order){
        
for (int i = 0; i < 3; i++)
	if (strcmp(order, byName[i]) == 0)
		return i;
return 0;
}
void freeall(){
        Country *p=head;
        Country *n;
        while(p){
                printf("free %s(%d, %d)\n", p->name, p->population, p->area);
                n = p->next;
                free(p);
                p = n;
        }
}
Country*newCountry(char*name, int population, int area){
        
Country *p = (Country *)malloc(sizeof(Country));
strcpy(p->name, name);
p->population = population;
p->area = area;
p->next = NULL;
return p;
}
void addAtHead(Country*p){ // add to the head of linked list
        
if (!head)
{
	head = tail = p;
}
else
{
	p->next = head;
	head = p;
}
}
void addAtTail(Country*p){ // add to the tail of linked list
        
if (!head)
{
	head = tail = p;
}
else
{
	tail->next = p;
	tail = p;
}
}
int main(){
        int n, caseno=0;
        char name[64], by[64];
        int population, area;
        while(scanf("%d%s", &n, by)==2){
                head=tail=NULL;
                while(n--){
                        scanf("%s%d%d", name, &population, &area);
                        if(n%2==0)
                                addAtHead(newCountry(name, population, area));
                        else
                                addAtTail(newCountry(name, population, area));
                }
                if(caseno>0) printf("\n");
                printf("Case #%d: dump singly linked list by \"%s\".\n", ++caseno, by);
                dumpCountry[indexOfBy(by)](NULL);
                freeall();
        }
}