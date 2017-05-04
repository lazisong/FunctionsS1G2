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

int subtractAllValues(int myArray[]){
	int i;
	for ( i=0 ; i < 500; i++){
		myArray[i]-1;
	}
	for ( i=0 ; i < 500; i++){
		printf("%i ", myArray[i]);
	}
	return 0;
}

float invertAllValues(int myArray[] ){
	int i;
	int temp;
	for ( i=0; i < 500/2; i++){
	temp=myArray[i];
	myArray[i]=myArray[499-i];
	myArray[499-i]=temp;
	}
	for ( i=0; i < 500; i++){
		printf("%f ", (float)myArray[i]);
	}
	return 0;
}

//kongkea
int getSumOfSquares(int myArray[]) {
	int n = 1;
	int result = 0;
	for (int i = 0; i < 500; i++) {
		n = myArray[i] * myArray[i];
		result += n;
	}
	return result;
}
// Reaksmey Kongkea Chea
void printAsChars(int myArray[]) {
	for (int i = 0; i < 500; i++) {
		printf("%c\n ", myArray[i]);
	}
}
