#include <iostream>
#include <vector>
#include <algorithm>



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
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }

    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    } 
};

bool comp(Student a, Student b)
{
    // When a is less than b
    return a.std_id > b.std_id;
}



int main()
{   
    vector<Student>a;
    for(int i = 0; i < 10; i++)
    {
        a.push_back(Student("A", i, 20));
    }

    for(int i = 0; i < 10; i++)
    {
        a[i].printInformation();
    }

    cout << "After Sorting\n";
    sort(a.begin(), a.end(), comp);

    for(int i = 0; i < 10; i++)
    {
        a[i].printInformation();
    }

    return 0;
}
