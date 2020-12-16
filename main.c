// Author: Aleks Gondek alg6177@psu.edu
// Collaborator: Kaitlyn Luchs kql5630@psu.edu
// Collaborator: Benjamin McGaw bcm5441@psu.edu
// Collaborator: Jerry Diaz jqd5879@psu.edu
// Section: 12
// Breakout: 9

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n >= 1){
    return n+sum_n(n-1);
  } else {
    return n;
  }
}
void print_n(const char *s, int n){
  if (n>=1){
    printf("%s\n", s);
    print_n(s, n-1);
    return;
  } else {
    return;
  }
}

int main(void) {
  char *intInput = readline("Enter an int: ");
  int newInt = atoi(intInput);
  printf("sum is %d.\n", sum_n(newInt));

  const char *strInput = readline("Enter a string: ");
  print_n(strInput, newInt);
  return 0;
}