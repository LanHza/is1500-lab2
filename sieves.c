/*
 print-prime.c
 By David Broman.
 Last modified: 2015-09-15
 This file is in the public domain.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define COLUMNS 6
/**
 * Returns 1 if n is prime else 0.
 * @param n - the number to be checked for prime status
 * @return - 1 or 0 (true or false) whether or not n is prime
*/
int is_prime(int n){
  if(n<2){
    return 0;
  }
  int sqrt_rounded_up_int = (int) sqrt(n) +1;
  for(int i = 2;i<sqrt_rounded_up_int;i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}
void print_number(int number_to_print){
  printf("%8d ", number_to_print);
}

void print_sieves(int n){
   int templista [n];
   for (int i = 1; i < n; i++){

       templista [i] = i; 
   
   }
   for  (int i = 1; i < n; i++){ 
       if ((templista[i] = 0)){
           continue;
       }
       
       for (int j = i+1; j < n; j++){
           if(i % j == 0 && j > pow(i,2)){
               templista[i] = 0; //tar bort ogiltiga

           } 

       }


       
   }
   printf("%p", templista);     

   }


// 'argc' contains the number of program arguments, and
// 'argv' is an array of char pointers, where each
// char pointer points to a null-terminated string.
int main(int argc, char *argv[]){
  if(argc == 1+1) //1+ num_arguments in the program
    print_sieves(atoi(argv[1]));
  else
    printf("Please state an interger number.\n");
  return 0;


}


