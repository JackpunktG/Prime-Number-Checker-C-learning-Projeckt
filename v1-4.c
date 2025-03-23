#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>



bool is_prime(int prime)
{
	int multip1;
	int result1;

	multip1 = 2;

		while (multip1 < prime) {	
			result1 = (prime % multip1);		// Modulo 
			multip1++;
			printf("%d\n", result1);			
			if (result1 == 0) { 				//endet sofort wert == Gannzahl, weil dann weiß man es mehrer faktoren hat 
				return false;
			}
		}		
	return true;
}

int main () 
{
	
	int prime; 

	while (1) {					
		printf("\nTo exit programm enter -1\n\nPick your number wisely...\n");
		scanf("%d", &prime);	// wo du nummer eingibst, dass du testen möchtest
		if (prime == -1)		// end programm Möglichkeit
			return 0;
		
		clock_t start, end;
		start = clock();   //  Zeitmessung start
		
		if (is_prime(prime) == true) {  	 //ruft is_prime funktion
			printf("\nPRIME!!\n");
		}
		else { 	
			printf("\nNo Dice... better luck nexttt time ;)\n");
		}
		end = clock(); 									 // Zeitmessung ende
		printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); //Zeit Berechnung
	}
    return 0;
 }
 
