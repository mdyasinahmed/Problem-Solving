#include <stdio.h>

int main(void) {
	
    int t, a, b, c, d, e;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        if((a + b <= d && c <= e) || (b + c <= d && a <= e) || (c + a <= d && b <= e)) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}

