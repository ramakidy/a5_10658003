#include <iostream>
#include <string>

using namespace std;

struct stud{
    string  name;
    int age;
    double score;
    char gender;
    int idnum;
    char grade;
};

int main()
{
    double totalScore = 0.0;
    int totalAge = 0;
    double averageScore;
    int averageAge;
    int maleCount = 0;
    int femaleCount = 0;


    struct stud students[5];
    for (int i=0; i<5; i++){
        cout << "Enter ID: ";
        cin >> students[i].idnum;
        cout << "Enter name of student: ";
        cin >> students[i].name;
        cout << "Enter age of student: ";
        cin >> students[i].age;
        totalAge = totalAge + students[i].age;
        cout << "Enter gender: ";
        cin >> students[i].gender;
        if ((students[i].gender == 'f') || (students[i].gender == 'F'))
            femaleCount++;
        else if ((students[i].gender == 'm') || (students[i].gender == 'M'))
            maleCount++;
        cout << "Enter score: ";
        cin >> students[i].score;
        totalScore = totalScore + students[i].score;
        cout << "Enter grade: ";
        cin >> students[i].grade;
    }
    cout << "ID\t\t Name\t\t Age\t\t Gender\t\t Score\t\t Grade\n";
    cout << "********************************************************************************************\n";
    for (int i=0; i<5; i++){
        cout << students[i].idnum << "\t\t" << students[i].name << "\t\t";
        cout << students[i].age << "\t\t" << students[i].gender << "\t\t";
        cout << students[i].score << "\t\t" << students[i].grade << endl;
    }
    cout << "*********************************************************************************************\n";
    averageScore = totalScore / 5;
    averageAge = totalAge / 5;
    cout << "Average Score is:   " << averageScore << endl;
    cout << "Average Age is:     " << averageAge << endl;
    cout << "Number of male students: " << maleCount << endl;
    cout << "Number of female students: " << femaleCount << endl;

    //int id, age;
    //string name, gender;
    //double score;

    /* cout << "Enter your ID No." << endl;
    ** cin >> id;
    ** cout << "Enter your name" << endl;
    ** cin >> name;
    **cout << "Enter your age" << endl;
    ** cin >> age;
    ** cout << "Enter your gender" << endl;
    ** cin >> gender;
    ** cout << "Enter student score" << endl;
    **cin >> score; */

    // Class Student_1 (id, age, name, gender, score);

    // cout << endl; << "ID No.:  " << Student_1.getId() << "Name:  " << Student_1.getName() <<
    //    "Age:  " << Student_1.getAge() << "Gender:  " << Student_1.getGender() <<
    //    "Score:  " << Student_1.getScore() << endl;

    return 0;
}
