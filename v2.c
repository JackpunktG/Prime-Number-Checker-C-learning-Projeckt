#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>



bool is_prime(int prime)
{
	int	result1;
	int multip1;


	multip1 = 2;

		while (multip1 < prime) {	
			result1 = (prime % multip1);		// Modulo 
			multip1++;
			
			if (result1 == 0) { 				//endet sofort wert == Gannzahl, weil dann weiß man es mehrer faktoren hat 
				return false;
			}
		}		
	return true;
}


int main () 
{
	
	int prime; 
	int upperprime;
	
	while (1) {					
		printf("\n***Weclome to Jack's Prime Nummber Seeker***\n\n1 - To enter a range mode \n2 - Seek out a single value \n3 - Exit programm\n\n");
		scanf("%d", &prime);	// wo du nummer eingibst, dass du testen möchtest
		if (prime == 3)		// end programm Möglichkeit
			return 0;
		if (prime == 1) {
			printf("Input starting value\n");
			scanf("%d", &prime);
			printf("Input upper value\n");
			scanf("%d", &upperprime);
			printf("\n");
			
			clock_t start, end;
			start = clock();   //  Zeitmessung start
			
			while (prime <= upperprime) {
				if (is_prime(prime) == true) {
					printf("%d\n", prime);
					prime++;
				}
				if (is_prime(prime) == false) {
					prime++;
				}
			}
				
			printf("... WOW!! What will you do with all these primes\nEnjoyyy ;)\n");
			end = clock(); 				// Zeitmessung ende
			printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); //Zeit Berechnung	
		}
		
		if (prime == 2){	
		printf("Choose your number wisely...");
		scanf("%d", &prime);
		
		clock_t start, end;
		start = clock();   //  Zeitmessung start
		
		if (is_prime(prime) == true) {  	 //ruft is_prime funktion
			printf("\nPRIME!!\n");
		}
		else { 	
			printf("\nNo Dice... better luck nexttt time ;)\n");
		}
		end = clock(); 																	 // Zeitmessung ende
		printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); //Zeit Berechnung
		}
	}
    return 0;	
 }
 
