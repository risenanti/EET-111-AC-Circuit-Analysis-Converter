/*Program to convert Polar Form to Rectangual Form or Rectangular Form to Polar Form
Keith Conley EET 111 
11-1-2014
*/


#include<iostream>
#include<cmath>

#define PI 3.14159265

using namespace std;


void rect_form();
void polar_form();

int main()


{
	cout << "Which form do you have?" << endl << "1: Rectangular" << endl << "2: Polar" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: rect_form(); break;
	case 2: polar_form(); break;
	}
	system("pause");
	return 0;
}


//convert rectangular form to polar
void rect_form()
{
	double real, imaginary, z, theta;
	cout << "Enter the Real Number: ";
	cin >> real;
	cout << "Enter the imaginary number: ";
	cin >> imaginary;


	cout << "You entered " << endl << real << " + " << imaginary << "j" << endl;
	z = sqrt((pow(real, 2) + pow(imaginary, 2)));	//z = sqrt ( real^2 + imaginary^2)
	theta = atan((imaginary / real)) * 180 / PI;   //arch tan function returns results in radians *180/PI converts to Degrees.


	cout << "The polar form is: " << endl << z << " < " << theta << endl;
};


//convert polar form to rectangular
void polar_form()

{	
	double z, theta, real, imaginary;
	cout << "Enter the Magnitude: ";
	cin >> z;
	cout << "Enter the angle: ";
	cin >> theta;


	cout << "You entered: " << z << " < " << theta <<endl;
	real = z*(cos(theta * PI/180)) ;					 //convert theta to radians for the function
	imaginary = z * sin(theta * PI/180) ;				 //convert theta to radians for the function


	cout << "Polar form is: " << endl;
	cout << real << " + " << imaginary << "j" << endl;

};