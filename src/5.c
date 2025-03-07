#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  // Generate a random number between 1 and 10
  int num = rand() % 10 + 1;

  // Ask the user to guess the number
  printf("Guess the number: ");
  int guess;
  scanf("%d", &guess);

  // Check if the guess is correct
  if (guess == num) {
    printf("You are correct! The number was %d.\n", num);
  } else {
    printf("Sorry, you are incorrect. The number was %d.\n", num);
  }

  return 0;
}
