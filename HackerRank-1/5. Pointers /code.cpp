#include <stdio.h>

/* ANOTHER APPROACH USING ABS FUNCTION

#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function
    int tempA = *a;
    int tempB = *b;
    
    *a = tempA + tempB;
    *b = abs(tempA - tempB);
    
}

*/


void update(int *a,int *b) {
    // Complete this function
    int temp = *a;
    *a = *a + *b;
    *b = *b - temp;
    if(*b < 0) {
        *b =- *b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
