#include<stdio.h>
int main(){
	int i=1,n,evencount=0,oddcount=0;
	while(i<=10){
			printf("enter number = ");
			scanf("%d",&n);
			
	
	if(n%2==0)
	{
	
	
			evencount=evencount+1;
	}
	else if(n%2!=0)
	{
		
		oddcount=oddcount+1;
	}
		i++;
}
	printf("even number is = %d",evencount);
	printf("\nodd number is = %d",oddcount);

}

