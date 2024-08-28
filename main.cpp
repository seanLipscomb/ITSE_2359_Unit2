#include <iostream>
#include <fstream>

using namespace std;

int main(){

ifstream inFile("student_data.txt");
int loc = 0;
int classNum = 0;
int classSize = 100;
bool found = false;
/*making sure there is a file to read*/
if (!inFile){
    cerr << "File could not be opened!" << endl;
}
/*A struct for holding the information of an individual student*/
struct Student{
    string name;
    int age;
    float gpa;
    };
Student students[classSize];
while (inFile.eof()==false){
    inFile >> students[classNum].name;
    inFile >> students[classNum].age;
    inFile >> students[classNum].gpa;
    classNum++;
}
inFile.close();
for (int i=0; i< classNum; i++){
    cout << students[i].name << " " << students[i].age << " " << students[i].gpa << endl;
}
Student searchFor;
cout << "Please input the name of a student:" << endl;
cin >> searchFor.name;
for (loc =0; loc<classNum; loc++){
    if (searchFor.name == students[loc].name){
        found = true;
        break;
    }
}
    if (found)
        cout << "Student # " << loc << " is " << searchFor.name << endl;
    else
        cout << "Student not found" << endl;
return 0;
}