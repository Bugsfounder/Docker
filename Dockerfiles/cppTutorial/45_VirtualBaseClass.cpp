#include <iostream>
using namespace std;

/*
    Student --> Test [Done]
    Student --> Sports [Done]
    Test --> Result [Done]
    Sports --> Result [Done]
*/

class Student
{
protected:
    int roll_number;

public:
    void setRollNumber(int rollN)
    {
        roll_number = rollN;
    }
    void printNumber(void)
    {
        cout << "Your Roll Number is: " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float mathsMarks, float physicsMarks)
    {
        maths = mathsMarks;
        physics = physicsMarks;
    }
    void printMarks()
    {
        cout << "Maths Marks are: " << maths << endl
             << "Physics Marks are: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "Score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your Total Score is: " << total << endl;
    }
};

int main()
{
    Result manisha;
    manisha.setRollNumber(1);
    manisha.setMarks(99, 99.99);
    manisha.setScore(80);
    manisha.display();

    return 0;
}