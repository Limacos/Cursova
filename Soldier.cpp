#include "Soldier.h"

Soldier::Soldier(string firstName,
                 string lastName,
                 int age,
                 int height,
                 int weight,
                 string gender,
                 string email,
                 enum mRank militaryRank,
                 enum arsenal weaponry,
                 enum typeOfMilitaryService typeOfMilitary,
                 int lifeTime,
                 int fights)
                :Person(firstName, lastName, age, height, weight, gender, email),
                 militaryRank(militaryRank),
                 weaponry(weaponry),
                 typeOfMilitary(typeOfMilitary),
                 lifeTime(lifeTime),
                 fights(fights) {}

void Soldier::battle()
{
    if(typeOfMilitary == reserve)
    {
        return;
    }
    fights++;
    if(0 <= fights && fights <= 5)
    {
        militaryRank = Rookie;
    }
    else if(6 <= fights && fights <= 15)
    {
        militaryRank = Foreman;
    }

    else if(16 <= fights && fights <= 30)
    {
        militaryRank = Corporal;
    }

    else if(31 <= fights && fights <= 49)
    {
        militaryRank = Sergeant;
    }

    else if(50 <= fights)
    {
        militaryRank = General;
    }
}
void Soldier::stock()
{
   typeOfMilitary = reserve;
}
string Soldier::Info() const
{
    string out;
    out = Person::Info() +
          "Military rank: " + getMilitaryRank()            + "\n" +
          "Weaponry: "      + getWeaponry()                + "\n" +
          "Type Of Military Service: " + getTypeOfMilitaryService()  + "\n" +
          "Life time: "     + to_string(getLifeTime()) + "\n" +
          "Fights: "        + to_string(fights)        + "\n";

    return out;
}