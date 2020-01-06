#include <iostream>
#include <string>
using namespace std;

int findMeSumSquare(int number) {
    int sqdNumber_result = 0;

    // === insert code here ===
    while (number > 0) {
        int d = number % 10;
        sqdNumber_result = sqdNumber_result + d * d;
        number = number / 10;
    }

    return sqdNumber_result;
}

/*Question      : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number      : The number to be determined whether it is happy or not
int finalNumber : Store the resultant value in this variable
int cycle_no    : Store the number of iterations done to determine whether the 'number' is happy or not */
void detectHappy(int number, int &finalNumber, int &cycle_no) {
    for (cycle_no = 0; cycle_no < 10; cycle_no++) {

        int result = findMeSumSquare(number);
        if (result == 1) {
            finalNumber = 1;
            return;
        } else { 
            number = result;
            // printf("%d \n", number);
        }

    }
    finalNumber = number;
    return;
}


int main() {
    int finalNum, cycleNum;
    detectHappy(333, finalNum, cycleNum);
    cout << "answer is: " << finalNum;
    // printf("hello");
    // printf("%d", finalNum);
    detectHappy(6, finalNum, cycleNum);
    cout << "answer is: " << finalNum;
}