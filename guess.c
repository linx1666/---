#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number,guess,count=1,i;
	srand((unsigned int)time(NULL));
	number=rand();

	printf("guess it!");
	
	for(i=1; ;i=i+1){
	scanf("%d",&guess);
	if(count>=10){
		break;
	} 
	if(number==guess){
		printf("yes!you are right!"); 
		break;
	}
	else{
		printf("nonono"); 
		count=count+1;
	}
}
printf("haha,it is %d",number); 
} 