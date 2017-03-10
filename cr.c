#include<stdio.h>
    int main() {
        int a[60],n,i,j,su,cr;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&su);
        for(i=0;i<n;i++)
        {
        cr=a[i];
            for(j=i+1;j<=n;j++)
            {
                if(cr==su)
                {
                printf("%dand%d\n",i,j-1);
                }
                    if(cr>su||j==n)
                    break;
                    cr=cr+a[j];
                    }
                    }
                    return 0;
                    }
