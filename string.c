#include<stdio.h>
#include<string.h>
int main() {
char str[80],a[90];
int i=0;
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
printf("%d\n",str[i]);
/*
while(str[i]!='\0'){
printf("%d\n",str[i]);
i++;
}*/
return 0;
}
