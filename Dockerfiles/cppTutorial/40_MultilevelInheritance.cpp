#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};

void Student::setRollNumber(int rollNumber)
{
    roll_number = rollNumber;
}

void Student::getRollNumber()
{
    cout << "The Roll Number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float mathsMarks, float physicsMarks)
{
    maths = mathsMarks;
    physics = physicsMarks;
}

void Exam::getMarks()
{
    cout << "Maths Marks are: " << maths << endl;
    cout << "Physics Marks are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        getRollNumber();
        getMarks();
        cout << "Your Percentage is: " << (maths + physics) / 2 << endl;
    }
};

int main()
{

    /*
    Notes:
        if we are inheriting B from A and C form B: [A--->B--->C]
        1. A is the base class for B and B is the base class for C.
        2. A--->B--->C is called Inheritance Path.
    */

    // Student s;
    // s.setRollNumber(1);
    // s.getRollNumber();

    // Exam exam1;
    // exam1.setMarks(54, 89);
    // exam1.getMarks();

    Result res;
    res.setRollNumber(866);
    res.setMarks(65, 98);
    res.display_result();

    return 0;
}