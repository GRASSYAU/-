#include <stdio.h>
#define MAX 1000
char stack[MAX];
int sp; //stack pointer 0: empty stack
void push(char c){
	if(sp>=MAX){
		printf("Stack Overflow!\n");
		return;
	}
	stack[sp++] = c;
}
char pop(void){
	if(sp<=0){
		printf("Stack Underflow!\n");
		return -1;
	}
	return stack[--sp];
}
int match(char s[]){ // 0: No, 1: Yes
	int i;
	for(i=0;s[i]!='\0';++i){
		printf("scan %c\n", s[i]);
		switch(s[i]){
			case '(': // fall through
			case '[':
			case '{':
			case '<':
				push(s[i]);
				break;
			case '>':
				if(pop()!='<') return 0;
				break;
			case '}':
				if(pop()!='{') return 0;
				break;
			case ']':
				if(pop()!='[') return 0;
				break;
			case ')':
				if(pop()!='(') return 0;
				break;
		}		
	}
	if(sp!=0) return 0; //only left
	sp = 0;
	return 1;
}
int main(){
	char buf[MAX];
	while(fgets(buf, sizeof(buf), stdin)!=NULL) {
		printf("buf=#%s#\n", buf);
		if(match(buf)) 
			printf("Yes\n");
		else
			printf("No\n");
	}
}