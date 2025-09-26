//1. Basic Programs (Beginner)
// Hello World
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!";
    return 0;
}

// Sum of Two Numbers
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b;
    return 0;
}

// Check Even or Odd
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n % 2 == 0) cout << "Even";
    else cout << "Odd";
    return 0;
}

2. Intermediate Programs
// Factorial using Loop
#include <iostream>
using namespace std;
int main() {
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact;
    return 0;
}

// Fibonacci Series
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, next;
    cout << "Enter terms: ";
    cin >> n;
    cout << t1 << " " << t2 << " ";
    for (int i = 3; i <= n; i++) {
        next = t1 + t2;
        cout << next << " ";
        t1 = t2;
        t2 = next;
    }
    return 0;
}

// Prime Number Check
#include <iostream>
using namespace std;
int main() {
    int n, flag = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n <= 1) cout << "Not Prime";
    else if (flag == 0) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}

3. OOP (Object-Oriented Programming)
// Class and Object
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << ", Age: " << age;
    }
};
int main() {
    Student s1;
    s1.name = "Virendra";
    s1.age = 20;
    s1.display();
    return 0;
}

// Constructor and Destructor
#include <iostream>
using namespace std;
class Car {
public:
    Car() { cout << "Car Created\n"; }
    ~Car() { cout << "Car Destroyed\n"; }
};
int main() {
    Car c1;
    return 0;
}

// Inheritance Example
#include <iostream>
using namespace std;
class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};
class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};
int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}

4. Advanced Programs
// Function Template
#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main() {
    cout << add<int>(3, 4) << endl;
    cout << add<double>(2.5, 3.7);
    return 0;
}

// Exception Handling
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) throw "Division by Zero!";
        cout << "Result = " << a / b;
    } catch (const char* msg) {
        cout << "Error: " << msg;
    }
    return 0;
}

// File Handling
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("data.txt");
    fout << "Hello File!";
    fout.close();

    ifstream fin("data.txt");
    string line;
    getline(fin, line);
    cout << "File Content: " << line;
    fin.close();
    return 0;
}
//
//5. Expert Level (STL & Algorithms)
//// Using Vectors and Sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {5, 3, 8, 1, 2};
    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for (int x : v) cout << x << " ";
    return 0;
}

// Map for Word Frequency
#include <iostream>
#include <map>
#include <sstream>
using namespace std;
int main() {
    string text = "this is a test this is code";
    map<string, int> freq;
    string word;
    stringstream ss(text);
    while (ss >> word) freq[word]++;
    for (auto &p : freq)
        cout << p.first << " -> " << p.second << endl;
    return 0;
}

