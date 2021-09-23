#include "Master.h"

int Master::count = 0;

Dog::Dog() {
    name = names[rand() % 7];
    weight = rand() % (15 - 1 + 1) + 1;
    age = rand() % (12 - 1 + 1) + 1;
}
string Dog::getName()
{
    return name;
}
void Dog::setName(string& name)
{
    this->name = name;
}
void Dog::setWeight(int& weight)
{
    this->weight = weight;
}
int Dog::getWeight()
{
    return weight;
}
void Dog::setAge(int& age)
{
    this->age = age;
}
int Dog::getAge()
{
    return age;
}

Master::Master() {
    count++;
    name = strNames[rand() % 10];
    inputCountDogs();
    dogs = new Dog[amountDogs];
}
void Master::inputCountDogs() {
    cout << "Enter count of dogs " << count << " master: ";
    cin >> amountDogs;
}
int Master::getCountDogs()
{
    return amountDogs;
}
void Master::setNameMaster(string& name) {
    this->name = name;
}
string Master::getNameMaster()
{
    return name;
}
int Master::getID()
{
    return id;
}
void Master::setWeightDog(int& indexDog, int& weight)
{
    dogs[indexDog - 1].setWeight(weight);
}
void Master::setAgeDog(int& indexDog, int& age)
{
    dogs[indexDog - 1].setAge(age);
}
void Master::setNameDog(int& indexDog, string& name)
{
    dogs[indexDog - 1].setName(name);
}
void Master::printMastersList() {
    cout << "Name: " << getNameMaster() << "  ";
    cout << "ID: " << getID() << "  ";
    cout << "Dogs: " << getCountDogs() << "\n";
    printDogs();

}
void Master::printDogs()
{
    cout << "\n";
    for (int i = 0; i < getCountDogs(); i++) {
        cout << dogs[i].getName() << "  ";
        cout << "Age: " << dogs[i].getAge() << "  ";
        cout << "Weight: " << dogs[i].getWeight() << "\n";
    }
}

void menu() {
    cout << "1. to print List;\n";
    cout << "2. to change master name;\n";
    cout << "3. to change dog name;\n";
    cout << "4. to change weight dog;\n";
    cout << "5. to change age dog;\n";
    cout << "6. exit from loop;\n";
    cout << "7. to clear console;\n";
}