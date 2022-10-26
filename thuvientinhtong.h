
#include<stdio.h>
int tinhtong1(int n){
    int sotachra;
    int s = 0;
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    return s;
}
int UCLN(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a; 
}
int BCNN(int a,int b){
     int lcm = a * b / UCLN(a, b);
     return lcm;
}
bool socp(int a){
	int n;
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
int tinhtong2(int n)
{
  int S = 0;
  while(S < 10000)
  {
    n++;
    S = S + n;
  }
 return S;
}
 
