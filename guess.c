#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number,guess,count=0,i,yorn;
	srand((unsigned int)time(NULL));
	number=rand();

	printf("guess it!\n");
	
	for(i=1; ;i=i+1)
	{
	scanf("%d",&guess);

	if(number<guess){
		printf("Try a smaller number\n"); 
		}
	else if(number>guess){
		printf("Try a bigger number\n"); 
		}
	else{
		printf("Yes you are right! Good job!");
		}

		count=count+1;

		if(count>15){
			printf("Do you want try again?\n");
			scanf("%d",&yorn);
			if(yorn==0){
				break;
			}
		}
	}

	printf("The number is %d\n",number);
	printf("You counted %d times",count);
} 