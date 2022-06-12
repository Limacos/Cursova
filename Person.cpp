#include "Person.h"

Person::Person() : firstName("Maxim"),
                   lastName("Sotsenko"),
                   age(18),
                   height(185),
                   weight(65),
                   gender("male"),
                   email("sotsenko.maxim@gmail.com") {}

Person::Person(string firstName,
               string lastName,
               int age,
               int height,
               int weight,
               string gender,
               string email)
              :firstName(firstName),
               lastName(lastName),
               age(age),
               height(height),
               weight(weight),
               gender(gender),
               email(email)
{
    if(height <= 0)
    {
        throw invalid_argument("Wrong height");
    }
    if(weight <= 0)
    {
        throw invalid_argument("Wrong weight");
    }
    if(age < 0)
    {
        throw invalid_argument("Wrong age");
    }
}

bool Person::isAgeMore18() const
{
    return age >= 18;
}

bool Person::isGenderAgeMore18() const
{
    return gender == "male" && age >= 18 && age <= 60;
}

string Person::Info() const
{
    string out;
    out = "Firstname: " + getFirstName()             + "\n" +
          "LastName: "  + getLastName()              + "\n" +
          "Age: "       + to_string(getAge())    + "\n" +
          "Height: "    + to_string(getHeight()) + "\n" +
          "Weight: "    + to_string(getWeight()) + "\n" +
          "Gender: "    + getGender()                + "\n" +
          "e-mail: "    + getEmail()                 + "\n";

    return out;

}