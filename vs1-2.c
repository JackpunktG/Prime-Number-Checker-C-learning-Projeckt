#include <stdio.h>
#include <time.h>
#include <windows.h>

int prime; 
int multip1;
int multip2;
int result1;


int main () 
{
	printf("Pick your number wisely...");
    	scanf("%d", &prime);	// wo du nummer eingibst, dass du testen möchtest
	
	clock_t start, end;
	start = clock();   //  Zeitmessung start
		
		
	multip1 = 1;
	multip2 = 1;
		
		
		while(multip2 <= (prime / 2)){		// Nur bis halb einmaleins
			while(multip1 < prime){
				result1 = (multip1 * multip2);		// Einmaleins
				multip1++;
				printf("%d\n", result1);
				if (result1 == prime){ 				//endet sofort wert = prime
					printf("\nNo Dice... better luck nexttt time ;)\n");
					end = clock();  // Zeitmessung ende
					printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC); //Zeit Berechnung
					return;
				}
			}
		multip2++;			// erhöhert die Einmaleins bis alle ausgeführt sind
		multip1 = 1;		// zurücksetzen multiple
		}
		   
	printf("\nPRIME!!\n");
	
    	end = clock();  // Zeitmessung ende
	
	printf("Execution time: %.6f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);  //Zeit Berechnung
    	return 0;
 }
