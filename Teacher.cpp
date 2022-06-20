#include "Teacher.h"

Teacher::Teacher() : experience(0),
                     grade(0),
                     salary(0),
                     hours(0){}

Teacher::Teacher(string firstName,
                 string lastName,
                 int age,
                 int height,
                 int weight,
                 string gender,
                 string email,
                 double experience,
                 double hours,
                 enum subjects predmet,
                 enum category ctgr,
                 int grade,
                 int salary)
                :Person(firstName, lastName, age, height, weight, gender, email),
                 experience(experience),
                 hours(hours),
                 predmet(predmet),
                 ctgr(ctgr),
                 grade(grade),
                 salary(salary)
{
    if(10 > grade || grade > 14)
    {
        throw invalid_argument("Wrong grade: 10 > grade > 14");
    }
    if(experience < 0)
    {
        throw invalid_argument("Wrong experience: experience < 0");
    }
    if(0 > hours || hours > 27)
    {
        throw invalid_argument("Wrong hours: 0 > hours > 27");
    }
}


int Teacher::Expif() // знаходе коеф за стажем вчителя
{
    if(0 <= experience && experience < 3)
    {
        this->experience = 0;
    }
    else if(3 <= experience && experience < 10)
    {
        this->experience = 0.1;
    }
    else if(10 <= experience && experience < 20)
    {
        this->experience = 0.2;
    }
    else if(20 <= experience)
    {
        this->experience = 0.3;
    }
}

int Teacher::Gradeif() // знаходе оклад і категорію за розрядом
{
    if(grade == 10)
    {
        oklad = salary * 1.82; // оклад = оклад_1_тариф_розряду * коеф_категорії;
        ctgr = AssociateDegree;
    }
    else if(grade == 11)
    {
        oklad = salary * 1.97;
        ctgr = Specialist;
    }
    else if(grade == 12)
    {
        oklad = salary * 2.12;
        ctgr = Second;
    }
    else if(grade == 13)
    {
        oklad = salary * 2.27;
        ctgr = First;
    }
    else if(grade == 14)
    {
        oklad = salary * 2.42;
        ctgr = Highest;
    }
}

double Teacher::payrollCalculation() const
{
    return (oklad/18*hours) + ((oklad/18*hours) * experience);
    //return ((оклад/18)*години) + (((оклад/18)*години) * коеф_стажу);
}

void Teacher::graduationCalculation(int countDays) const
{
    double graduationCalculation = Teacher::payrollCalculation()/30 * countDays;
    cout << graduationCalculation;
}

string Teacher::Info() const
{
    string out;
    out = Person::Info() +
          "Experience: " + to_string(getExperience()) + "\n" +
          "Grade: "      + to_string(getGrade())      + "\n" +
          "Hours: "      + to_string(getHours())      + "\n" +
          "Subject: "    + getPredmet()                   + "\n" +
          "Salary: "     + to_string(getSalary())     + "\n";

    return out;
}