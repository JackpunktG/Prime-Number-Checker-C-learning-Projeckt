#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>



bool is_prime(unsigned long long int prime)
{
	unsigned long long int result1;
	unsigned long long int multip1;
	unsigned long long int half_prime;			//konstant für halb die prime - schneller als pro schleife rechnen

	multip1 = 2;
	half_prime = prime / 2;

		while (multip1 <= half_prime) {			//prüft nur bis halb die Prime wert - weil bis dann findet es die lösung
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
	
	unsigned long long int prime; 
	unsigned long long int upperprime;
	
	while (1) {					
		printf("\n***Weclome to Jack's Prime Nummber Seeker***\n\n1 - To enter a range mode \n2 - Seek out a single value \n3 - Exit programm\n\n");
		scanf("%llu", &prime);					// porgramm entscheidung
		if (prime == 3)							// endet programm Möglichkeit
			return 0;
		if (prime == 1) {							//scanner funktion
			printf("Input starting value\n");
			scanf("%llu", &prime);
			printf("Input upper value\n");
			scanf("%llu", &upperprime);
			printf("\n");
			
			clock_t start, end;
			start = clock();  					 //  Zeitmessung start
			
			while (prime <= upperprime) {
				if (is_prime(prime) == true) {
					printf("%llu\n", prime);
					prime++;
				}
				if (is_prime(prime) == false) {
					prime++;
				}
			}
				
			printf("... WOW!! What will you do with all these primes\nEnjoyyy ;)\n");
			end = clock(); 							// Zeitmessung ende
			printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); //Zeit Berechnung	
		}
		
		if (prime == 2){						//ein wert prüfen funktion
		printf("Choose your number wisely...\n");
		scanf("%llu", &prime);
		
		clock_t start, end;
		start = clock();  						 //  Zeitmessung start
		
		if (is_prime(prime) == true) {  		 //ruft is_prime funktion
			printf("\nPRIME!!\n");
		}
		else { 	
			printf("\nNo Dice... better luck nexttt time ;)\n");
		}
		end = clock(); 																	 // Zeitmessung ende
		printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); 	//Zeit Berechnung
		}
	}
    return 0;	
 }
 
