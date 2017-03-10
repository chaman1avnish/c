#include<stdio.h>
#include<string.h>
 void search(char *pat, char *txt) {
 int n=strlen(pat);
 int m=strlen(txt);
 int i,j;
 for(i=0;i<=n-m+1;i++){
 for(j=0;j<m;j++)
 {
  if(pat[i+j]!=txt[j])
   break;
  }
  if(j==m)
  {
  printf("pattern found at index %d\n",i+1);
  }
  }
  }
  void main() {
  char *pat,*txt;
  gets(pat);
  gets(txt);
  search(pat,txt);
  }
