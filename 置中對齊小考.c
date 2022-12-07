#include <stdio.h>
#include <string.h>
#define MAXLINE 20
#define MAXLEN 120

int intMaxLen=0;
int loadLines(char str[MAXLINE][MAXLEN]){
    int i,intLength;
    intMaxLen=0;
    for(i=0;i<MAXLINE;i++)
        {
        if(gets(str[i])==NULL) break;
        intLength=strlen(str[i]);
        if (intLength>intMaxLen) intMaxLen=intLength;
        str[i][intLength]='\0';
        }
    return i;
}

int findMaxLine(int str, int len, int lines){
    return intMaxLen;

}

void dumpMiddle(char str[MAXLINE][MAXLEN],int len,int lines,int max){
    int j;
    for(j=0;j<lines;j++)
        {
        printf("[%*s%*s]\n",(max+strlen(str[j]))/2,str[j],((max-strlen(str[j]))+1)/2,"");
        }
}

main()
{
	char str[MAXLINE][MAXLEN];
	int len[MAXLINE];
	int lines = loadLines(str);
	int max = findMaxLine(str, len, lines);
	dumpMiddle(str, len, lines, max);
}