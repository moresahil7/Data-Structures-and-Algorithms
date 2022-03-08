#include<stdio.h> int main()
int main()

{

int coins[10]=(1,3,4), lookup[100];

int i,j, tmp,num_coins = 3,sum=10,

lookup[0]=0;
 for(i=1;i<=sum; i++){

int min_coins = 1;
 for(j=0 j<num_coins, j++){


tmp=i-coins[i].

if(tmp<0)

continue

if(lookup[tmp] <min_coins)

min_coins=lookup[tmp];
 }
lookup[i] min_coins + 1;
 }
printf("%d" lookup[sum]);
 
return 0;

}