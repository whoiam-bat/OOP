#include <iostream>
#include<time.h>
#include<string>
using namespace std;

class Dog {
private:
    string name;
    double weight;
    int age;
public:
    string names[7] = { "Zhorik" , "Richard", "Ahmed", "Tolik","Barsik","Bella","Maksim"};
    Dog(): name(""), weight(0.0), age(0) {}
    Dog(string name,double weight,int age): name(name), weight(weight), age(age){}
    void setName();
    void setWeight();
    double getWeight();
    string getName();
};

class Master {
private:
    string name;
    const int id = 1488;
    static int count;
    int countDogs;
    Dog* dogs;
public:
    string strNames[10] = { "Щукин Сергей Созонович",
                         "Гришин Алан Николаевич",
                         "Кудряшов Остап Валерьевич",
                         "Бобылёв Архип Святославович",
                         "Архипов Петр Яковович",
                         "Цветков Виссарион Михайлович",
                         "Шаров Аввакум Денисович",
                         "Григорьев Панкратий Пантелеймонович",
                         "Фролов Алан Богуславович",
                         "Симонов Анатолий Пётрович" };
    
    Master() : name(""), dogs(NULL) {}
    Master(string name){}
    void setCountDogs();
    void setNameMaster();
};
int main()
{
    srand(time(NULL));
    Dog pes;
    pes.setName();
    pes.setWeight();
    cout<<pes.getName();
    cout<<"\n"<<pes.getWeight();
    return 0;
}

Master::Master(string name) {
    count++;
    name = strNames[rand() % 10];
    countDogs = rand() % ((5 - 1 + 1) - 1);
    dogs = new Dog[countDogs];
    for (int i = 0; i < countDogs; i++) {
        dogs[i].setName();
        dogs[i].setWeight();
    }


}




void Dog::setName(){
    name = names[rand() % 7];
}
void Dog::setWeight(){
    weight = rand() % ((30 - 5 + 1) - 5) ;
}
double Dog::getWeight(){
    return weight;
}
string Dog::getName(){
    return name;
}
