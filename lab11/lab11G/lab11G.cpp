#include<iostream>
#include<time.h>
using namespace std;

class Dog {
private:
    string name;
    int weight;
    int age;
public:
    string names[7] = { "Zhorik" , "Richard", "Ahmed", "Tolik","Barsik","Bella","Maksim" };
    Dog();
    string getName();
    void setName(string name);
    void setWeight(int weight);
    int getWeight();
    void setAge(int age);
    int getAge();
};
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
    void setNameMaster(string name);
    string getNameMaster();
    int getID();

    void setWeightDog(int indexDog, int weight);
    void setAgeDog(int indexDog, int age);
    void setNameDog(int indexDog, string name);
    void printMastersList();
    void printDogs();
};

int Master::count = 0;
void menu();


int main()
{
    srand(time(NULL));
    int amountPeoples;
    cout << "Enter amount of masters: ";
    cin >> amountPeoples;
    Master* master = new Master[amountPeoples];

    cout << "Enter:\n";
    menu();
    while (true) {
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            for (int i = 0; i < amountPeoples; i++) {
                cout << "\n\n" << i + 1 << " master:\n";
                master[i].printMastersList();
            }
            break;
        }
        case 2: {
            int index;
            cout << "There are " << amountPeoples << " in list of masters\nEnter index: ";
            cin >> index;
            cin.ignore();
            string newName;
            cout << "Enter name: ";
            cin >> newName;
            master[index - 1].setNameMaster(newName);
            break;
        }
        case 3: {
            int indexPeople;
            cout << "There are " << amountPeoples << " in list of masters\nEnter index: ";
            cin >> indexPeople;
            cout << indexPeople << " master has " << master[indexPeople - 1].getCountDogs() << " dogs.\n";
            cout << "Chose which dog you want to rename.\n";
            int indexDog;
            cin >> indexDog;

            string newNameDog;
            cout << "Enter name: ";
            cin >> newNameDog;
            master[indexPeople - 1].setNameDog(indexDog, newNameDog);
            break;

        }
        case 4: {
            int indexPeople;
            cout << "There are " << amountPeoples << " in list of masters\nEnter index: ";
            cin >> indexPeople;
            cout << indexPeople << " master has " << master[indexPeople - 1].getCountDogs() << " dogs.\n";
            cout << "Chose which dog you want to change weight.\n";
            int indexDog;
            cin >> indexDog;

            int newWeight;
            cout << "Enter weigth: ";
            cin >> newWeight;
            master[indexPeople - 1].setWeightDog(indexDog, newWeight);
            break;
        }
        case 5: {
            int indexPeople;
            cout << "There are " << amountPeoples << " in list of masters\nEnter index: ";
            cin >> indexPeople;
            cout << indexPeople << " master has " << master[indexPeople - 1].getCountDogs() << " dogs.\n";
            cout << "Chose which dog you want to change age.\n";
            int indexDog;
            cin >> indexDog;

            int newAge;
            cout << "Enter age: ";
            cin >> newAge;
            master[indexPeople - 1].setWeightDog(indexDog, newAge);
            break;
        }
        case 6: {
            system("cls");
            exit(0);
            break;
        }
        case 7: {
            system("cls");
            menu();
            break;
        }
        }
    }
    return 0;
}


Dog::Dog() {
    name = names[rand() % 7];
    weight = rand() % (15 - 1 + 1) + 1;
    age = rand() % (12 - 1 + 1) + 1;
}
string Dog::getName()
{
    return name;
}
void Dog::setName(string name)
{
    this->name = name;
}
void Dog::setWeight(int weight)
{
    this->weight = weight;
}
int Dog::getWeight()
{
    return weight;
}
void Dog::setAge(int age)
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
void Master::setNameMaster(string name) {
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
void Master::setWeightDog(int indexDog, int weight)
{
    dogs[indexDog - 1].setWeight(weight);
}
void Master::setAgeDog(int indexDog, int age)
{
    dogs[indexDog - 1].setAge(age);
}
void Master::setNameDog(int indexDog, string name)
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