#include <stdio.h>

void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func4(int**** p);;

int main(){
	int i=100;
	int*p,**dp,***tp;

	p=&i;
	dp=&p;
	tp=&dp;

	func1(&i);  //100+100=200
	printf("i = %d\n",i);  
	func2(&p); //200+100=300
	printf("*p = %d\n",*p);
        func3(&dp);  //300+100=400
	printf("**dp = %d\n",**dp);
	func4(&tp);  //400+100=500
	printf("***tp = %d\n",***tp);

	printf("i = %d\n",i); // i=500
	return 0;
}

void func1(int* p){
	*p=*p+100;
}
void func2(int** p){
	**p=**p+100;
}
void func3(int*** p){
	***p=***p+100;
}
void func4(int**** p){
	****p=****p+100;
}
