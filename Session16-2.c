#include <stdio.h>
void doigiatri(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	void doigiatri();
	int x = 1;
	int y = 2;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	doigiatri(&x, &y);
	printf("Sau khi doi gia tri:\n");
	printf("x = %d\n", x);
	printf("y = %d", y);
	return 0;
}
