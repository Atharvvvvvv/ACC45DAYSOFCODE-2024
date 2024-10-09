#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n,x; 
	    scanf("%d %d", &n, &x);
	    if(x>=n-x) {
	        printf("%d\n", n-x);
	    } else {
	        printf("%d\n", x);
	    }
	}
	return 0;
}

