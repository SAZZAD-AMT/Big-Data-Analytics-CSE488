#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));  // initialize random seed
    
    int num1 = rand() % 10001 + 10000;  // generate random value between 10000 and 20000
    int num2 = rand() % 10001 + 10000;
    int num3 = rand() % 10001 + 10000;
    
    double average = (num1 + num2 + num3) / 3.0;  // calculate average
    
    cout << "The generated numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The average is: " << average << endl;
    
    return 0;
}
