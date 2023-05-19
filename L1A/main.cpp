/* CSCI 200: Lab 1A - Math Equation Solver
 *
 * Author: Katrina Ngo
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // list here any outside assistance you used/received while following the
 *     // CS@Mines Collaboration Policy and the Mines Academic Code of Honor
 *
 * The program asks user to input values for variables in the math equations 
 * in order to calculate the final result.
 */

#include <iostream> // For cin, cout, etc.
#include <cmath>

using namespace std;

// Define any constants below this comment.
const double PI = 3.14159265359;

int main() {

//define variables to be used in volume of a sphere equation and distance equation
  double r;
  double x;
  double y;

// prompt and read user input for corresponding variables to calculate and print result
  cout << "Calculating the Volume of a Sphere" << endl << "Enter the radius: "; 
  cin >> r;
  double sphereVolume = (4.0/3.0)*PI*r*r*r;
  cout << "The volume of the sphere is: " << sphereVolume << endl;

  cout << "Calculating the Distance Between x and y" << endl << "Enter the value for x: ";
  cin >> x;
  cout << "Enter the value for y: ";
  cin >> y;
  double distance = sqrt((x*x) + (y*y));
  cout << "The distance is: " << distance << endl;

  return 0; // signals the operating system that our program ended OK.
}