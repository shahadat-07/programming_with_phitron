#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

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

class Rectangle {
public:
    int width, height;
    // area
    int calculate_area()
    {
        return height * width;
    }
    // perimeter
    int calculate_permimeter()
    {
        return 2* (height + width);
    }
};

class Person {
public:    
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout << "Name = " << name << "\n";
        cout << "Fathers name = " << father->name << "\n";
        cout << "Mothers name = " << mother->name << "\n";
    }
};


class User {
    protected:
    string name;
    int age;
};

class Admin: User{
    private:
    string designation;
    public:

    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }

    void print()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";

    }
};




int main()
{   
    // Student s;
    // s.name = "Shahadat";
    // s.std_id = 12343;
    // s.age = 24;
    // s.fathers_name = "Babu";
    // s.mothers_name = "shahnaj";

    // s.printInformation();

    // Rectangle r1;
    // r1.height = 4;
    // r1.width = 8;

    // cout << r1.calculate_area() << "\n";
    // cout << r1.calculate_permimeter() << "\n";

    // Person p;
    // p.father = new Person;
    // p.mother = new Person;

    // p.name = "A";
    // p.father->name = "B";
    // p.mother->name = "C";

    // p.print_info();

    // Student s;
    // s.setInformation("A", 12, 22);
    // s.printInformation();

    Admin ad;
    ad.Set("A", 32, "abcs");
    ad.print();

    return 0;
}

// There are 3 types of access modifiers
// Public Private Protected

/*
পাবলিকের আন্ডারে লেখা ভ্যারিএবল গুলা আমরা যেকোন স্থান থেকে এক্সেস করতে পারবো এবং বাহির থেকে তাদের ভ্যালু সেট করতে পারবো।
প্রাইভেট এর বিষয় টা একদম পাবলিকের উল্টা। মানে যেকোন স্থান থেকে এক্সেস করতে পারবো না এবং বাহির থেকে তাদের ভ্যালু ও সেট করতে পারবো না। প্রাইভেট ভ্যারিএবল গুলা কিন্তু প্রাইভেট শুধু ক্লাসের বাহিরের জন্য ভেতরের জন্য না মানে ক্লাসের ভেতর কিন্তু ঠিক ই এক্সেস করতে পারবো। 
*/