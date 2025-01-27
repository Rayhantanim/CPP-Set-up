/*
Rayhan Tanim
CSE31, PCIU
23.07.2024
*/
//@@@@@@@@@@@@@@@ INCLUDE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
#include <string>
using namespace std;
//@@@@@@@@@@@@@ GLOBAL @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string version = "1.0.7";
string upDate = "24.07.2024";
//@@@@@@@@@@ Func Declaration @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int apps();
int semCal();
int cgCal();
int ask();
int exit();
double grade(double cg);
double interpretation(double cg);
int gSt();
int more();
int aboutMe();
int contactMe();
//@@@@@@@@@@@@@@@ MAIN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main()
{
    cout << "=======================================\n";
    cout << "             Binary BRAINs             \n";
    cout << "=======================================\n";
    apps();
}
//@@@@@@@@@@@@@@@@@@@ APPS @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int apps()
{
    char op;
    cout << "\nAll Apps: " << endl;
    cout << "   1. Semester Fee Calculator" << endl;
    cout << "   2. CGPA Calculator" << endl;
    cout << "   3. Grading System" << endl;
    cout << "   4. Number System" << endl;
    cout << "   #. More." << endl;
    cout << "   0. Exit." << endl;

    cout << ">> ";
    cin >> op;
    switch (op)
    {
    case '0':
        exit();
        break;
    case '1':
        semCal();
        break;
    case '2':
        cgCal();
        break;
    case '3':
        gSt();
        break;
    case '#':
        more();
        break;
    default:
        apps();
    }
}
//@@@@@@@@@@@@@@@ SEMESTER FEE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int semCal()
{
    double credit, theory, lab;
    double totalFee;
    cout << "\n====Semester Fee Calculator===\n";
    cout << "Enter number of Courses: \n";
    cout << "Theory    : ";
    cin >> theory;
    cout << "Lab       : ";
    cin >> lab;
    cout << "Per Credit: ";
    cin >> credit;
    totalFee = (theory * 3 + lab * 1.5) * credit;
    cout << "Semester Fee: " << totalFee;
    cout << "\nMid Term    : " << totalFee / 2;
    cout << "\nFinal Term  : " << totalFee / 2;
    ask();
}
//@@@@@@@@@@@@ CGPA CALCULATOR @@@@@@@@@@@@@
int cgCal()
{
    double theory, lab;
    double tc[10];
    double lc[10];
    double cgpa;
    double ttcg = 0;
    double tlcg = 0;
    int i;

    cout << "============CGPA CALCULATOR============\n";
    cout << "Enter number of Courses: \n";
    cout << "Theory: ";
    cin >> theory;
    cout << "Lab   : ";
    cin >> lab;

    cout << "Enter GPA for all Courses: \n";
    for (i = 0; i < theory; i++)
    {
        cout << "Theory-" << i + 1 << " : ";
        cin >> tc[i];
        ttcg += tc[i];
    }
    for (i = 0; i < lab; i++)
    {
        cout << "Lab-" << i + 1 << " : ";
        cin >> lc[i];
        tlcg += lc[i];
    }

    cgpa = ((ttcg * 3) + (tlcg * 1.5)) / (theory * 3 + lab * 1.5);

    cout << "\nCGPA : " << cgpa << endl;
    cout << "Grade : ";
    grade(cgpa);
    cout << "\n";
    cout << "Interpretation : ";
    interpretation(cgpa);
    cout << endl;
    ask();
}
//=======================================
double grade(double cg)
{
    if (cg >= 4.0)
    {
        cout << "A+";
    }
    else if (cg >= 3.75)
    {
        cout << "A";
    }
    else if (cg >= 3.50)
    {
        cout << "A-";
    }
    else if (cg >= 3.25)
    {
        cout << "B+";
    }
    else if (cg >= 3.00)
    {
        cout << "B";
    }
    else if (cg >= 2.75)
    {
        cout << "B-";
    }
    else if (cg >= 2.50)
    {
        cout << "C+";
    }
    else if (cg >= 2.25)
    {
        cout << "C";
    }
    else if (cg >= 2.0)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}
//=======================================
double interpretation(double cg)
{
    if (cg >= 4.0)
    {
        cout << "Outstanding";
    }
    else if (cg >= 3.75)
    {
        cout << "Excellent";
    }
    else if (cg >= 3.50)
    {
        cout << "Very Good";
    }
    else if (cg >= 3.25)
    {
        cout << "Good";
    }
    else if (cg >= 3.00)
    {
        cout << "Satisfactory";
    }
    else if (cg >= 2.75)
    {
        cout << "Above Average";
    }
    else if (cg >= 2.50)
    {
        cout << "Average";
    }
    else if (cg >= 2.25)
    {
        cout << "Below Average";
    }
    else if (cg >= 2.0)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}
//@@@@@@@@@@@@@@@@@@@@ ASK @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int ask()
{
    char op;
    cout << "\n1. Back" << endl
         << "2. Exit" << endl
         << ">> ";
    cin >> op;
    switch (op)
    {
    case '1':
        apps();
        break;
    case '2':
        exit();
        break;
    default:
        ask();
    }
}
//@@@@@@@@@@@@@@@@@@@@ EXIT @@@@@@@@@@@@@@@@
int exit()
{
    return 0;
}
//@@@@@@@@@@@@ GRADING SYSTEM @@@@@@@@@@@@@@@@@@@@@@@@@@@
int gSt()
{
    cout << "  --------------------------" << endl;
    cout << "  |     Grading System     |" << endl;
    cout << "  --------------------------" << endl
         << "  |  Mark  |  GPA  | Grade |" << endl;
    cout << "  | 80-100 |  4.00 |   A+  |" << endl
         << "  | 75-79  |  3.75 |   A   |" << endl
         << "  | 70-74  |  3.50 |   A-  |" << endl
         << "  | 65-69  |  3.25 |   B+  |" << endl
         << "  | 60-64  |  3.00 |   B   |" << endl
         << "  | 55-59  |  2.75 |   B-  |" << endl
         << "  | 50-54  |  2.50 |   C+  |" << endl
         << "  | 45-49  |  2.25 |   C   |" << endl
         << "  | 40-44  |  2.00 |   D   |" << endl
         << "  | 00-39  |  0.00 |   F   |" << endl
         << "  --------------------------" << endl;
    ask();
}
//@@@@@@@@@@@@@@@@@ MORE @@@@@@@@@@@@@@@@
int more()
{
    char op;
    cout << "0. About me." << endl
         << "1. Contact me. " << endl
         << "2. Back." << endl
         << "3. Exit." << endl
         << ">> ";
    cin >> op;
    switch (op)
    {
    case '0':
        aboutMe();
        break;
    case '1':
        contactMe();
        break;
    case '2':
        apps();
        break;
    case '3':
        exit();
        break;
    default:
        ask();
    }
}
//@@@@@@@@@@@@@@@@@@@ ABOUT ME @@@@@@@@@@@@@@@@@
int aboutMe()
{
    cout << "Name : Binary BRAINs\n";
    cout << "Author: Rayhan Tanim.\n";
    cout << "Version: " << version << endl;
    cout << "Last Update: " << upDate << endl;
    cout << "This is a console application "
            "made by Rayhan Tanim. \nIt is "
            "user friendly and easy to use. "
            "At that time there are two "
            "applications are available. "
            "Further the author will add more "
            "useful application. In future, "
            "There will be graphical interfaces.\n";
    ask();
}
//@@@@@@@@@@@@@@@@@@ CONTACT ME @@@@@@@@@@@@@@@@
int contactMe()
{
    cout << "...Binary Brains Team..." << endl
         << "Admin : Rayhan Tanim." << endl
         << "Email : rayhan.mostafa321@gmail.com\n"
         << "Team Members:" << endl
         << "1. Rayhan Tanim." << endl
         << "2. Iftekar Tahsin." << endl
         << "3. Ramish Jahra." << endl
         << "4. Farjana Simika." << endl
         << "5. Towsia Masnun." << endl
         << "6. Sabina Mariyam." << endl
         << "7. Israt Anjuman Mumu." << endl;
         ask();
}
//================= END OF THE CODE ========================