#include <stdio.h>
void sum(int a, int b, int *result) {
    *result = a + b;  
}
int main() {
    int a = 1, b = 2;
    int result;
    sum(a, b, &result);
    printf("Tong cua %d va %d la: %d\n", a, b, result);
    return 0;
}
