# include <stdio.h>
int main(){
	int number=50;
	int *Ptr=&number;
	printf("Gia tri = %d\n",*Ptr);
	printf("Dia chi = %d\n",&number);
	return 0;
}	

