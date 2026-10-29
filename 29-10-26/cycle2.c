#include<stdio.h>
int main()
{
    int secret=25;
    int guess;
    int attempt=0;
    printf("guess the number");
    scanf("%d",&guess);
    while(guess!=secret);
    {
         attempt++;
    if(guess>secret)
    {
          printf("too high! Try again\n");
    }
  else
  {
    printf("too low! Try again.\n");
  }
  printf("\nGuess a number between 1to 50:");
  printf("%d",guess);

 
}
attempt++;
printf("\nCongratulation! You guessed the correct number.\n");
printf("Total attempt: %d\n",attempt);
printf("game over");
return 0;
}