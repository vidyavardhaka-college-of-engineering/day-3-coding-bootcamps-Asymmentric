//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n;

  	scanf("%d", &n);

  	//Write your code here
    for(int i=0;i<=n;i++){
      for(int j=0;j<=i;j++){
        printf("*");
      }
      printf("\n");
    }
  	

  	return 0;
}
