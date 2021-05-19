#include<stdio.h>
#include<cs50.h>
int main(void)
{
	float a = get_float ("Side 1 ");
	float b = get_float ("Side 2 ");
	float c = get_float ("Side 3 ");
	int max=0,sum=0;
	if (a>b){
		if (a>c){
			max=a;
			max=max*max;
			sum=b*b+c*c;
			if(max==sum)
				printf("Yes\n");
			else
				printf("No\n");}			
		else{
			max=c;
			max=max*max;
			sum=b*b+a*a;
			if(max==sum)
				printf("Yes\n");
			else
				printf("No\n");}
			}
	else {
		if(b>c){
			max=b;
			max=max*max;
			sum=a*a+c*c;
			if(max==sum)
				printf("Yes\n");
			else
				printf("No\n");}
		else{
			max=c;
			max=c;
			max=max*max;
			sum=b*b+a*a;
			if(max==sum)
				printf("Yes\n");
			else
				printf("No\n");}} 


}
