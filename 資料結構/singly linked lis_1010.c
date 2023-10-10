#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _country {
        char *name;
        int population;
        int area;
        struct _country *next;
} Country;
Country*head,*tail; // queue of input List
int orderByPopulation(Country*p, Country*q, int desc){
	int flag=desc?-1:1;
	printf("Compare CountryPopulation %d:%d\n", p->population, q->population);
	return flag*(p->population<q->population?-1:p->population>q->population?1:0);
}
int orderByArea(Country*p, Country*q, int desc){
    
int flag=desc?-1:1;
printf("Compare CountryArea %d:%d\n", p->area, q->area);
return flag*(p->area<q->area?-1:p->area>q->area?1:0);
}
int orderByName(Country*p, Country*q, int desc){
    
int flag=desc?-1:1;
printf("Compare CounrtyName %s:%s\n", p->name, q->name);
return flag*strcmp(p->name, q->name);
}
void dumpByPopulation(Country*q){
	Country *p=head;
	int cnt=0;
	while(p!=q){
		printf("[%2d]%12d %s(%d)\n", ++cnt, p->population, p->name, p->area);
		p = p->next;
	}
}
void dumpByArea(Country*q){
	
Country *p=head;
int cnt=0;
while(p!=q){
	printf("[%2d]%12d %s(%d)\n", ++cnt, p->area, p->name, p->population);
	p = p->next;
}
}
void dumpByName(Country*q){
	
Country *p=head;
int cnt=0;
while(p!=q){
	printf("[%2d] %-12s%12d%12d\n", ++cnt, p->name, p->population, p->area);
	p = p->next;
}
}
char *orderName[]={"population", "area", "name", ""};
int (*orderFunc[])(Country*,Country*,int)={orderByPopulation, orderByArea, orderByName};
void (*dumpCountry[])(Country*)={dumpByPopulation, dumpByArea, dumpByName};
int indexOfOrder(char*order){
	int i;
	for(i=0;orderName[i];++i)
		if(strcmp(orderName[i],order)==0) return i;
	return -1;
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
Country*insertionSort(int(*func)(Country*,Country*,int), void(*dump)(Country*), int desc){
	
for (Country *country = head->next, *country_prev = head, *next; country; country_prev = country, country = next)
{
	next = country->next;

	Country *curr = head, *prev = NULL;
	for (; curr != country; prev = curr, curr = curr->next)
	{
		if (func(country, curr, desc) <= 0)
		{
			country->next = curr;
			country_prev->next = next;
			if (prev)
				prev->next = country;
			else
				head = country;
			break;
		}
	}

	dump(next);
}

return head;
	return head;
}
Country*newCountry(char*name, int population, int area){
    
Country *country = (Country *)malloc(sizeof(Country));
strcpy(country->name, name);
country->population = population;
country->area = area;
country->next = NULL;
return country;
}
void addList(Country*p){
	if(head==NULL) head = tail = p;
	else tail->next = p, tail=p;
}
int main(){
	int n, caseno=0;
	char name[64], order[64], desc[16];
	int population, area;
	while(scanf("%d%s%s", &n, order, desc)==3){
		head=tail=NULL;
		while(n--){
			scanf("%s%d%d", name, &population, &area);
			addList(newCountry(name, population, area));
		}
		if(caseno>0) printf("\n");
		printf("Case #%d: sorted in %s order by \"%s\".\n", ++caseno, desc, order);
		int idx=indexOfOrder(order);
		insertionSort(orderFunc[idx], dumpCountry[idx], desc[0]=='a'?0:1);
		freeall();
	}
}