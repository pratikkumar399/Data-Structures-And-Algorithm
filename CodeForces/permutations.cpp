// Program to generate all cyclic permutations
// of number
#include <bits/stdc++.h>
using namespace std;

// Function to count the total number of digits
// in a number.
int countdigits(int N)
{
	int count = 0;
	while (N) {
		count++;
		N = N / 10;
	}
	return count;
}

// Function to generate all cyclic permutations
// of a number
void cyclic(int N)
{
	int num = N;
	int n = countdigits(N);

	while (1) {
		cout << num << endl;

		// Following three lines generates a
		// circular pirmutation of a number.
		int rem = num % 10;
		int div = num / 10;
		num = (pow(10, n - 1)) * rem + div;

		// If all the permutations are checked
		// and we obtain original number exit
		// from loop.
		if (num == N)
			break;	
	}
}

// Driver Program
int main()
{
	int N = 5674;
	cyclic(N);
	return 0;
}
