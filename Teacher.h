//
// Created by Макс on 12.06.2022.
//

#ifndef LIMACOS_CURSOVA_TEACHER_H
#define LIMACOS_CURSOVA_TEACHER_H


#include "Person.h"

class Teacher : public Person
{
private:
    int experience, category, salary;
public:
    Teacher();
    Teacher(string firstName,
            string lastName,
            int age,
            int height,
            int weight,
            string gender,
            string email,
            int experience,
            int category,
            int salary);

    int getExperience() const {return experience;}
    int getCategory() const   {return category;}
    int getSalary() const     {return salary;}

    double payrollCalculation() const;
    void graduationCalculation(int countDays) const;

    string Info() const override;
};


#endif //LIMACOS_CURSOVA_TEACHER_H