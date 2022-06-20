//
// Created by Макс on 12.06.2022.
//

#ifndef LIMACOS_CURSOVA_TEACHER_H
#define LIMACOS_CURSOVA_TEACHER_H


#include "Person.h"

enum category
{
    AssociateDegree,
    Specialist,
    Second,
    First,
    Highest
};

enum subjects
{
    algebra,   geometry,
    biology,   history,
    chemistry, english,
    physics,   geography
};
class Teacher : public Person
{
private:
    int salary, grade;
    double experience, hours;
    subjects predmet;
    category ctgr;


public:
    Teacher();
    Teacher(string firstName,
            string lastName,
            int age,
            int height,
            int weight,
            string gender,
            string email,
            double experience,
            double hours,
            subjects predmet,
            category ctgr,
            int grade,
            int salary);

    int getExperience()    const {return experience;}
    double getHours()      const {return hours;}
    int    getGrade()      const {return grade;}
    int    getSalary()     const {return salary;}
    double oklad;
    int Expif();
    int Gradeif();
    double payrollCalculation() const;
    void graduationCalculation(int countDays) const;


    string getCtgr() const
    {
        string enumCategory[] = {
                                "AssociateDegree", // Молодший спеціаліст
                                "Specialist",      // Спеціаліст
                                "Second",          // Друга категорія
                                "First",           // Перша категорія
                                "Highest"          // Вища категорія
                               };
        return enumCategory[ctgr];
    }
    string getPredmet() const
    {
        string enumSubjects[] = {
                                "algebra",   "geometry",
                                "biology",   "history",
                                "chemistry", "english",
                                "physics",   "geography"
                               };
        return enumSubjects[predmet];
    }


    virtual string Info() const;
};

#endif //LIMACOS_CURSOVA_TEACHER_H