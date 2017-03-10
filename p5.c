    #include <stdio.h>
    void main() {
    	int rw, c, no=2,len;
    	printf("Enter number of rows: ");
    	scanf("%d", &len);
    	for (rw=1; rw<=len; rw++) {
    		printf("\n");
    		for (c=1; c<=rw; c++) {
    			printf(" %d ", no);
    			no++;
    		}
    	}
    }
