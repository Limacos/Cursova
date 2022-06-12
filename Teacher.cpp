#include "Teacher.h"

Teacher::Teacher() : experience(0),
                     category(0),
                     salary(0) {}

Teacher::Teacher(string firstName,
                 string lastName,
                 int age,
                 int height,
                 int weight,
                 string gender,
                 string email,
                 int experience,
                 int category,
                 int salary)
                :Person(firstName, lastName, age, height, weight, gender, email),
                 experience(experience),
                 category(category),
                 salary(salary) {}

double Teacher::payrollCalculation() const
{
    return salary + experience * 1.5 + category * 2.5;
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
          "Category: "   + to_string(getCategory())   + "\n" +
          "Salary: "     + to_string(getSalary())     + "\n";

    return out;
}