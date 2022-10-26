#include<stdio.h>
#include<math.h>
bool kt3canh(int a, int b ,int c){
	if(a<b+c && b<a+c && c<a+b ){
		return true;
	}return false;
}
int cvtamgiac(int a, int b ,int c){
	int cv=a+b+c;
	return cv;
}
float dttamgiac(int a, int b, int c){
	int p=float(a+b+c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
