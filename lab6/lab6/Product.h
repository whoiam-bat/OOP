#pragma once
#include <iostream>
#include<iomanip>
#include<ctime>
#include<string>
using namespace std;

class Product {
private:
    string name;
    int id;
    string markSteel;
    int weight;
    static int size;
public:
    string products[15] = { "Roofing", "Beam", "Reinforcement", "Bracket",
    "Roller", "Pipe", "Machine", "Crane", "Drill", "Clip", "Scissors", "Radiator", "Cutlery", "Saucepans", "Stairways" };
    string stuff[15] = { "Carbon", "Alloy", "Tungsten", "Nickel", "Manganese", "Vanadium", "Chromium",
        "Silicon","Molybdenum","Cobalt","Aluminum","Tool","Stainless","Tungsten","Sulfur" };
    Product();
    void setName(string name);
    void setID(int id);
    void setMark(string markSteel);
    void setWeight(int weight);

    string getName();
    int getID();
    string getMark();
    int getWeight();
    friend ostream& operator <<(ostream& out, const Product& detail);
    static void addElement(Product*& detail, int& size);
    static void changeElement(Product& detail, const int& size);
};



void print(Product*& detail, const int& size);
void sort(Product*& detail, int& size);

void getHeader();
void menu();
