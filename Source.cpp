#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]); // Liza Song
int getSumOfSquares(int myArray[]); // Reaksmey Kongkea Chea
void printAsChars(int myArray[]); // Reaksmey Kongkea Chea
double getAverage(int myArray[]); // Phyrum Rithchea
int subtractAllValues(int myArray[]); // Borey Cheng
float invertAllValues(int myArray[] ); // Borey Cheng
void printGroupMemberNames(); // Phyrum Rithchea

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}




void printGroupMemberNames() {
	printf("James Bond\n Brad Pitt/n");

}

