#include <stdio.h>
int main(){
	int a,b,c;
	int x,y,z;
	int b1,c1,count=0;
	scanf("%d %d %d",&x,&y,&z);
	for(a=123;a<333;++a){
		b1=a*y/(double)x;
		c1=a*z/(double)x;
		b=b1;
		c=c1;
		if(b!=b1||c!=c1)
			continue;
		if(a/100+a%100/10+a%10+b/100+b%100/10+b%10+c/100+c%100/10+c%10==(1+2+3+4+5+6+7+8+9)){
			if((a/100)*(a%100/10)*(a%10)*(b/100)*(b%100/10)*(b%10)*(c/100)*(c%100/10)*(c%10)==(1*2*3*4*5*6*7*8*9)){
				printf("%d %d %d\n",a,b,c);
				++count;
			}
		}
	}if(count==0)
		printf("No!!!");
	return 0;
}
