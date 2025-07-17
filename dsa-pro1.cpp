#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score out of 100: ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid score. Please enter a value between 0 and 100." << endl;
        return 1;
    }

    // / develop a program that takes a score of 100  as input from the user and calculates the corresponding grade using ternary oprator. allocate grade from A to F various ranges.

    string grade = (score >= 90) ? "A" : (score >= 80) ? "B"
                                     : (score >= 70)   ? "C"
                                     : (score >= 60)   ? "D"
                                     : (score >= 50)   ? "E"
                                                       : "F";

    cout << "Your grade is: " << grade << endl;

    // extend the program to provide additional comments based on the grade using switch-case statement. for exmaple , if grade is 'A' then print ' Excellent Work ! '.if grade is 'B' then print 'Well done' , if grade is 'C' then print 'Good job ' ,  if grade is 'D' then print 'You passed , but you could do better' , and  if grade is 'F' then print ' Sorry , you failed'.

    switch (grade[0])
    {
    case 'A':
        cout << "Excellent Work ! " << endl;
        break;
    case 'B':
        cout << "Well done " << endl;
        break;
    case 'C':
        cout << "Good job " << endl;
        break;
    case 'D':
        cout << "You passed , but you could do better " << endl;
        break;
    case 'E':
        cout << "You have passed, but you need to work harder" << endl;
        break;
    case 'F':
        cout << "Sorry , you failed " << endl;
        break;
    default:
        cout << "Invalid grade " << endl;
        break;
    }

    // further extend the program to check eligibility for the next level based on the grade using an if-elase statement. print ' congratulations ! you are eligible for the next level ' if the grade is form 'A' to 'E'. print 'Please try again next time' if grade is 'F'.

    if (grade != "F")
        cout << "Congratulations! You are eligible for the next level" << endl;
    else
        cout << "Please try again next time" << endl;

    return 0;
}
