#include<stdio.h>
    struct empl {
        int id,salary,hike;
        };
    int main() {
    struct empl em[100];
    int i,id,salary,hike,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter id: ");
        scanf("%d",&em[i].id);
        printf("enter salary :");
        scanf("%d",&em[i].salary);
        printf("enter hike :");
        scanf("%d",&em[i].hike);
    }

        for(i=0;i<n;i++)
        {
        if(em[i].salary>=4000)
        {
        em[i].salary=em[i].salary+em[i].hike;
        }
        printf("%d\t",em[i].id);
        printf("%d\t",em[i].salary);
        printf("%d\n",em[i].hike);
        }
    }
