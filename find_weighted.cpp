//Michael
//Figueroa
//900389292
//CS1410 CRN 11297 FALL 2018
//Programming Assignment #2

#include <iostream>
using namespace std;

int main()
{
    //initialize variables for grades
    double grade1, grade2, grade3, grade4, grade5, grade6;

    //initialize variables for weighted averages & total weighted average
    double avg1, avg2, avg3, avg4, avg5, avg6, wavg;

    //prompt for user input and stores to according variable
    cout << "Please enter grade #1: " << endl;
    cin >> grade1;
    cout << "Please enter grade #2: " << endl;
    cin >> grade2;
    cout << "Please enter grade #3: " << endl;
    cin >> grade3;
    cout << "Please enter grade #4: " << endl;
    cin >> grade4;
    cout << "Please enter grade #5: " << endl;
    cin >> grade5;
    cout << "Please enter grade #6: " << endl;
    cin >> grade6;

    //Finding averages
    //scores 1, 2, and 3 count 15% each, score 4 counts 5%, score 5
    //counts 20%, and score 6 counts 30%.
    avg1 = grade1 * .15;
    avg2 = grade2 * .15;
    avg3 = grade3 * .15;
    avg4 = grade4 * .04;
    avg5 = grade5 * .20;
    avg6 = grade6 * .30;

    //Finds total weighted average
    wavg = (avg1 + avg2 + avg3 + avg4 + avg5 + avg6);

    //output name on first line
    cout << "Michael Figueroa" << endl;
    cout << endl;

    //output grades and weighted averages
    cout << "Grade 1: " << grade1 << " has a weighted average of " << avg1 << endl;
    cout << "Grade 2: " << grade2 << " has a weighted average of " << avg2 << endl;
    cout << "Grade 3: " << grade3 << " has a weighted average of " << avg3 << endl;
    cout << "Grade 4: " << grade4 << " has a weighted average of " << avg4 << endl;
    cout << "Grade 5: " << grade5 << " has a weighted average of " << avg5 << endl;
    cout << "Grade 6: " << grade6 << " has a weighted average of " << avg6 << endl;
    cout << endl;

    cout << "The total weighted average is " << wavg << endl;

    return 0;
}
