#include<stdio.h>
    struct ab {
    int roll_no,id;
        };
    int main() {
    struct ab a[10];
      int i,n;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i].roll_no);
      scanf("%d",&a[i].id);
     }
     for(i=0;i<n;i++)
     printf("%d\n",a[i].roll_no);
     printf("%d",a[i].id);
     }



