#include <stdio.h>

int main(){
	int sw1, ngan1, rai1, sw2, ngan2, rai2, sw3, ngan3, rai3, count = 1;
	do{
		printf("Enter Area1 : ");
		scanf("%d-%d-%d", &rai1, &ngan1, &sw1);
		printf("Enter Area2 : ");
		scanf("%d-%d-%d", &rai2, &ngan2, &sw2);
		rai3 = rai1 + rai2;
		ngan3 = ngan1 + ngan2;
		sw3 = sw1 + sw2;
		if(sw3 >= 100){
			sw3 -= 100;
			ngan3 += 1;
		}
		if(ngan3 >= 4){
	    	ngan3 -= 4;
			rai3 += 1;
		}
		printf("Total Area : %d-%d-%d\n", rai3, ngan3, sw3);
		count++;
	}while(count <= 2);
	return 0;
}
