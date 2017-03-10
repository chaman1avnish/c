#include<stdio.h>
#include<string.h>
int main(){
char str[1000];
int n,i,b=0;
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++) {
    if(str[i]>='a'&& str[i]<='z') {
    b++;
    }
    }
    printf("%d",b);

}
