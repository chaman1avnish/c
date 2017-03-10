    #include <stdio.h>
    void main() {
    	int rw,c,no,spc;
    	printf("Enter number of rows : ");
    	scanf("%d", &no);
    	for (rw=1; rw<=no; rw++) {
    		for (spc=no; spc>=rw; spc--) {
    			printf(" ");
    		}
    		for (c=1; c<=rw; c++) {
    			printf("%2d",c);
    		}
    		printf("\n");
    	}
    }
