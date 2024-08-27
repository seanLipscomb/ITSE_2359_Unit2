#include <iostream>
#include <fstream>

using namespace std;

int main(){
ifstream inFile("student_data.txt");
int classSize;
/*A struct for holding the information of an individual student*/
struct Student{
    string name;
    int age;
    float gpa;
}

Student students[classSize];


return 0;
}