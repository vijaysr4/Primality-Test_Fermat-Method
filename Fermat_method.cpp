#include <iostream>
#include <cstdlib>
using namespace std;

// Function which finds the given number is prime or composite
bool prime0 (int n, int l) {

    int q = n - 1;
    for (int i = 0; i < n - 1; i++) {
        int m = q;
        int y = 1;

        //selecting a random number between 1 and n-1
        srand(time(NULL));
        int a = rand() % (n - 1); 
        int z = a;

        // Computing a^(n-1) mod n
        while (m > 0) {
            
            while (m % 2 == 0) {
                z = (z*z) % n;
                m = m/2;
            }
            m = m -1;
            y = (y*z) % n;
        }
        //If a^(n-1) mod n is not 1, then n is not prime
        if (y != 1) {
            return false;
        }
    }
    //If a^(n-1) mod n is 1, then n is a prime
    return true;
}
//main function
int main () {
    int n, l;

    //User Input
    cout << "Enter number: \n";
    cin >> n;
    cout << "Enter probability parameter: \n";
    cin >> l;

    //Invoking the prime0 function
    prime0(n, l)? cout << " true\n": cout << " false\n";

}    