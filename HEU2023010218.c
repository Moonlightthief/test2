#include <stdio.h>
#include <stdlib.h>
float sl(int b){
	int c;
    int a[100];
    a[1]=1,a[2]=2;
    for(c=3;c<=100;c++){
    	a[c]=a[c-1]+a[c-2];
	}
	return a[b];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int main(){
	int n=0;
	int j;
	float sl(int b);
	scanf("%d",&n);
	float sum=0;
	for(j=1;j<=n;j++){
		sum=(sl(j+1)/sl(j))+sum;
		printf("%.2f\n",sum); 
	}
	printf("%.2f",sum);
	return 0;}
