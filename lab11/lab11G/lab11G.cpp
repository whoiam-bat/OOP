#include "Master.h"
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

