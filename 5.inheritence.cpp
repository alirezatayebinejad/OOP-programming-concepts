#include <iostream>
using namespace std;

class student {
private:
    int id;
    int age;
protected:
    string name;
    int grade;
public:

    student() {
    }
    student(string Nam, int I, int Ag) {
        name = Nam;
        id = I;
        age = Ag;
        cout << "constructor is called" << endl;
    }
    student(string Nam, int I) {
        name = Nam;
        id = I;
        cout << "constructor is called" << endl;
    }
    ~student() {
        cout << "desctructor is called" << endl;
    }
    void takeClass() {
        cout << "which lesson you take? ";
        string lesson;
        cin >> lesson;
        cout << "you took " << lesson;
    }
    //setter getter
    void setName(string Nam) {
        name = Nam;
    }
    string getName() {
        return name;
    }
    void setId(int I) {
        id = I;
    }
    int getId() {
        return id;
    }
    void setAge(int Ag) {
        age = Ag;
    }
    int getAge() {
        return age;
    }
    void setGrade(int Gr) {
        grade = Gr;
    }


    int getBirthDate() {
        return birthDate();
    }
private:
    int birthDate() {
        int b;
        b = 2022 - age;

        return b;
    }
};

class bachelor :public student {
public:
    void whoIs() {
        cout << name << " is a bachelor student.\n";
    }
    void isPassed() {
        if (grade > 12)
            cout << "is passed\n";
        else
            cout << "is not passed\n";
    }
};
class master :public student {
public:
    void whoIs() {
        cout << name << " is a master student.\n";
    }
    void isPassed() {
        if (grade > 14)
            cout << "is passed\n";
        else
            cout << "is not passed\n";
    }
};
int main()
{

    bachelor ali;
    ali.setName("ali smith");
    ali.whoIs();
    ali.setGrade(8);
    ali.isPassed();

    master reza;
    reza.setName("reza smith");
    reza.whoIs();
    reza.setGrade(8);
    reza.isPassed();
    return 0;
}
