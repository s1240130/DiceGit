#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

char Name[1024];
int num = 0,s,i;

printf("What is your name?\n");
printf("> ");
scanf("%s",Name);
printf("Hello, %s!\n",Name);

srand(time(NULL));
printf("Rolling the dice...\n");
for(i = 1; i <= 2; i++){
s = rand() % 6 + 1;
printf("Die %d: %d\n",i,s);
num += s;
}
printf("Total value: %d\n",num);

if(num > 7) printf("%s won!\n",Name);
else printf("%s lose!\n",Name);


return 0;

}
