#include <iostream>
#include <vector>
#include <string>
using namespace std;

int vectorBaseStart()
{
    int sure;
    vector<string> name = {};
    while (true) {
        int choice = 0;
        cout << "Menu:\n1.initialise database\n2.insert\n3.search\n4.delete\n5.print\n6.quit\nMake your choice:";
        cin >> choice;
        if (choice == 0 || choice > 6 || choice < 0) {
            cout << "not a valid choice\n";
        }
        else if (choice == 1) {
            cout << "are you sure? yes/no (1/0)\n";
            cin >> sure;
            if (sure == 1) {
                vectorBaseStart();
            }
            else if (sure == 0) {

            }

        }

        else if (choice == 2) {
            while (true) {
                cout << "give q or Q to stop the loop, insert name:";
                string x;
                cin >> x;
                if (x == "q" || x == "Q") {
                    break;
                }
                else {
                    name.insert(name.begin(), x);
                }
            }
        }

        else if (choice == 3) {
            bool check = true;
            string search;
            cin >> search;
            int len = search.length();
            for (int b = 0; b < name.size(); b++) {
                for (int k = 0; k < len; k++) {
                    check = true;
                    if (search[k] == (name[b])[k]) {

                    }
                    else {
                        check = false;
                    }
                }
                if (check == true) {
                    cout << name[b] << "\n";
                }
                else {

                }
            }
        }

        else if (choice == 4) {
            string del;
            cin >> del;
            for (int z = 0; z < name.size(); z++) {
                if (name[z] == del) {
                    name.erase(name.begin() + z);
                }
                else {

                }
            }
            cout << "Done" << "\n";
        }

        else if (choice == 5) {
            for (int t = 0; t < name.size(); t++) {
                cout << name[t];
            }
        }

        else if (choice == 6) {
            break;
        }
    }
    return 0;
}

int main()
{

    vectorBaseStart();

    system("pause");
    return 0;
}