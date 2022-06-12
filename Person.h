//
// Created by Макс on 12.06.2022.
//

#ifndef LIMACOS_CURSOVA_PERSON_H
#define LIMACOS_CURSOVA_PERSON_H


#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Person
{
private:
    string firstName, lastName;
    int age, height, weight;
    string gender, email;
public:
    Person();
    Person(string firstName,
           string lastName,
           int age,
           int height,
           int weight,
           string gender,
           string email);

    string getFirstName() const {return firstName;}
    string getLastName()  const {return lastName;}
    int    getAge()       const {return age;}
    int    getHeight()    const {return height;}
    int    getWeight()    const {return weight;}
    string getGender()    const {return gender;}
    string getEmail()     const {return email;}

    bool isAgeMore18() const;
    bool isGenderAgeMore18()const;

    virtual string Info() const;

};


#endif //LIMACOS_CURSOVA_PERSON_H