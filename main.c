#include <stdio.h>
#include "array.h"

#define ar_size 5
int main() {
	int ar[ar_size] = {1,2,-32,4,-10};
    findSecondSmallValue(ar, ar_size);
	//printf("SecondSmallValue = %d", print_value);
	return 0;
}