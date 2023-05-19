/* CSCI 200: Lab 1B - Random Classification
 *
 * Author: Katrina Ngo
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // list here any outside assistance you used/received while following the
 *     // CS@Mines Collaboration Policy and the Mines Academic Code of Honor
 *
 * The program asks user to input min and max values to generate a random 
 * value within the given bounds and will calculate the quartile the value is in.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

// define variables
    srand(time(0));
    rand();
    double min;
    double max;
    double randomNumber;
    string answer;
    bool continueGen = false;

// prompt user for min and max values
    cout << "Enter the minimum value: ";
    cin >> min;
    cout << "Enter the maximum value: ";
    cin >> max;

    do {
// output random value within given range
        randomNumber = ((double)rand() / RAND_MAX) * (max - min) + min;
        cout << "A random value in this range is: " << fixed << setprecision(2) << randomNumber << endl;

// calculate the four quartiles of the range from given min and max and determine which quartile random value is in
        string quartile;
        double firstQuartile = (max-min)/4 + min;
        double secondQuartile = (max-min)/2 + min;
        double thirdQuartile = (max-min)*3/4 + min;

        if (randomNumber <= firstQuartile) {
            quartile = "first";
        } else if (randomNumber > firstQuartile && randomNumber <= secondQuartile) {
            quartile = "second";
        } else if (randomNumber > secondQuartile && randomNumber <= thirdQuartile) {
            quartile = "third";
        } else {
            quartile = "fourth";
        }

// print which quartile the random value is in and prompt user for an answer to continue generating random values
        cout << "This value is in the " << quartile << " quartile." << endl;
        cout << "Do you want to get another random value? Type Y or N: ";
        cin >> answer;

        if (answer == "Y" || answer == "y") {
            continueGen = true;
        } else {
            continueGen = false;
        }
    }
    while (continueGen);
    cout << "Thank you for participating!" << endl;

    return 0;
}