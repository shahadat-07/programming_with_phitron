#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student ()
    {
        
    }

    Student (string s, int id, int ag, string f_name, string m_name) 
    {
        name = s;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    // constructor overload
    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    public:

    void printInformation()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name;
    }

    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};



int main()
{   
    Student s("A", 10, 20, "B", "C");

    s.printInformation();

    cout << "\n";

    Student s2("R", 10, 20);
    s2.printInformation();


    return 0;
}
