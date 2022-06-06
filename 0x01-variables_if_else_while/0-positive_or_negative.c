#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n>0){

					prindf("%d is positive\n",n);
				}
				else if (n<0){

					  prindf("%d is negative\n",n);
				}
				else{

					  prindf("%d is zero\n",n);
				}
				return (0);
}
