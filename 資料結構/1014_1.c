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
	
printf(" No         Area CountryName(Population)\n");
    printf("---- ----------- -----------------------\n");

    Country *p = head;
    int cnt = 0;
    while(p!=q){
        printf("[%2d] %11d %s(%d)\n", ++cnt, p->area, p->name, p->population);
        p = p->next;
    }
}
void dumpByPopulation(Country*q){
	
printf(" No   Population CountryName(Area)\n");
    printf("---- ----------- -----------------------\n");

    Country *p = head;
    int cnt = 0;
    while(p!=q){
        printf("[%2d] %11d %s(%d)\n", ++cnt, p->population, p->name, p->area);
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
	
if( strcmp(order, "population") == 0 ) return 0;
    if( strcmp(order, "area") == 0 ) return 1;
    if( strcmp(order, "name") == 0 ) return 2;
    return -1;
}
char *cmdName[]={
	"addAtHead", "addAtTail", "addAtIndex",
	"deleteAtHead", "deleteAtTail", "deleteAtIndex", ""};
int cmdToIndex(char*cmd){
    
if( strcmp(cmd, "addAtHead") == 0 ) return 0;
    if( strcmp(cmd, "addAtTail") == 0 ) return 1;
    if( strcmp(cmd, "addAtIndex") == 0 ) return 2;
    if( strcmp(cmd, "deleteAtHead") == 0 ) return 3;
    if( strcmp(cmd, "deleteAtTail") == 0 ) return 4;
    if( strcmp(cmd, "deleteAtIndex") == 0 ) return 5;
    return -1;;
}
void freeCountry(Country*p){
	
printf("Free %s\n", p->name);
    free(p);;
}
void freeall(){
	Country *p=head;
	Country *n;
	while(p){
		n = p->next;
		freeCountry(p);
		p = n;
	}
}
Country*newCountry(char*name, int population, int area){
	
printf("New %s\n", name);
    Country *p = (Country*)malloc(sizeof(Country));
    strcpy(p->name, name);
    p->population = population;
    p->area = area;
    p->next = NULL;

    return p;
}
void addAtHead(Country*p){ // add to the head of linked list
	
if(head==NULL){
        head = tail = p;
    }else{
        p->next = head;
        head = p;
    }
}
void addAtTail(Country*p){ // add to the tail of linked list
	
if(head==NULL){
        head = tail = p;
    }else{
        tail->next = p;
        tail = p;
    }
}
void addAtIndex(int index, Country*p) {
	// add before the index-th node in the linked list.
	// index is started from 0 as the head of linked list.
	if(index==0){
		addAtHead(p);
		return;
	}
	int cnt;
	Country*q=head;
	Country*prev=NULL;
	for(cnt=0;q;++cnt) {
		if(index==cnt) { // insert at middle
			prev->next = p;
			p->next = q;
			return;
		}
		prev=q;
		q=q->next;
	}
	if(cnt==index)
		addAtTail(p);
	else {
		printf("Add index out of linked list!\n");
		freeCountry(p);
	}
}
void deleteAtHead(){
	Country*p=head;
	if(head){
		
 head = head->next;
        freeCountry(p);
	}else
		printf("No linked list deleted!\n");
}
void deleteAtTail(){
	Country*p=tail;
	if(head){
		
Country *q = head;
        while(q->next!=tail){
            q = q->next;
        }
        tail = q;
        tail->next = NULL;
        freeCountry(p);
	}else
		printf("No linked list deleted!\n");
}
void deleteAtIndex(int index){
	// delete before the index-th node in the linked list.
	// index is started from 0 as the head of linked list.
	Country*prev=NULL;
	Country*q=head;
	Country*p;
	int cnt;
	for(cnt=0;q;++cnt){
		if(cnt==index) { // normal index
			if(index==0){
				deleteAtHead();
				return;
			}
			prev->next = q->next; // delete at middle
			p = q;
			if(tail==p) tail=prev; // delete at tail
			freeCountry(p);
			return;
		}
		prev = q;
		q = q->next;
	}
	printf("Delete index out of linked list!\n");
}
int main(){
	int n, caseno=0;
	char cmd[16], name[64], by[64];
	int population, area, index;
	while(scanf("%d%s", &n, by)==2){
		if(caseno>0) printf("\n");
		printf("Case #%d: dump singly linked list by \"%s\".\n", ++caseno, by);
		head=tail=NULL;
		while(n--){
			scanf("%s", cmd);
			switch(cmdToIndex(cmd)){
			case 0: // addAtHead
				scanf("%s%d%d", name, &population, &area);
				addAtHead(newCountry(name, population, area));
				break;
			case 1: // addAtTail
				scanf("%s%d%d", name, &population, &area);
				addAtTail(newCountry(name, population, area));
				break;
			case 2: // addAtIndex
				scanf("%d%s%d%d", &index, name, &population, &area);
				addAtIndex(index, newCountry(name, population, area));
				break;
			case 3: // deleteAtHead
				deleteAtHead();
				break;
			case 4: // deleteAtTail
				deleteAtTail();
				break;
			case 5: // deleteAtIndex
				scanf("%d", &index);
				deleteAtIndex(index);
				break;
			default: // unknown command, just skip
				break;
			}
			//dump();
		}
		dumpCountry[indexOfBy(by)](NULL);
		freeall();
	}
}