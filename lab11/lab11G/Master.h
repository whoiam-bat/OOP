#pragma once
#include<iostream>
#include<time.h>
using namespace std;

class Master {
private:
    string name;
    const int id = 1488;
    static int count;
    int amountDogs;
    Dog* dogs;
public:
    string strNames[10] = { "Arthur Collins",
                         "Kevin Rodriguez",
                         "Bryan Powell",
                         "Frank Willis",
                         "Raymond Casey",
                         "Derek Wolfe",
                         "Tom Herrera",
                         "Donald Dunn",
                         "Joseph Hill",
                         "Dwight Ellis" };
    Master();
    void inputCountDogs();
    int getCountDogs();
    void setNameMaster(string& name);
    string getNameMaster();
    int getID();

    void setWeightDog(int& indexDog, int& weight);
    void setAgeDog(int& indexDog, int& age);
    void setNameDog(int& indexDog, string& name);
    void printMastersList();
    void printDogs();
};


class Dog {
private:
    string name;
    int weight;
    int age;
public:
    string names[7] = { "Zhorik" , "Richard", "Ahmed", "Tolik","Barsik","Bella","Maksim" };
    Dog();
    string getName();
    void setName(string& name);
    void setWeight(int& weight);
    int getWeight();
    void setAge(int& age);
    int getAge();
};
void menu();

