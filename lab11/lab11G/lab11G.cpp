#include <iostream>
#include<time.h>
using namespace std;

class Dog {
private:
    string name;
    double weight;
    int age;
public:
    string names[7] = { "Zhorik" , "Richard", "Ahmed", "Tolik","Barsik","Bella","Maksim"};
    void setName();
    void setWeight();
    void setAge();
    int getAge();
    double getWeight();
    string getName();
};

int main()
{
    srand(time(NULL));
    Dog pes;
    pes.setName();
    pes.setWeight();
    cout<<pes.getName();
    cout<<"\n"<<pes.getWeight();
    retiurn 0;
}

void Dog::setName(){
    name = names[rand() % 7];
}

void Dog::setWeight(){
    weight = (double)rand() % (20.0 - 5.0 + 1.0) - 5.0;
}

double Dog::getWeight(){
    return weight;
}

string Dog::getName(){
    return name;
}
