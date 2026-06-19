
#include <iostream>
#include <vector>
using namespace std;

class Train
{
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int trainCount;

public:

    Train()
    {
        trainNumber = 0;
        trainName = "Not Set";
        source = "Not Set";
        destination = "Not Set";
        trainTime = "Not Set";

        trainCount++;
        cout << "Default Constructor Called" << endl;
    }

    Train(int number, string name, string src, string dest, string time)
    {
        trainNumber = number;
        trainName = name;
        source = src;
        destination = dest;
        trainTime = time;

        trainCount++;
        cout << "Parameterized Constructor Called" << endl;
    }

    
    Train(const Train &t)
    {
        trainNumber = t.trainNumber;
        trainName = t.trainName;
        source = t.source;
        destination = t.destination;
        trainTime = t.trainTime;

        trainCount++;
        cout << "Copy Constructor Called" << endl;
    }


    void inputTrainDetails()
    {
        cout << "Enter Train Number : ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name : ";
        getline(cin, trainName);

        cout << "Enter Source : ";
        getline(cin, source);

        cout << "Enter Destination : ";
        getline(cin, destination);

        cout << "Enter Train Time : ";
        getline(cin, trainTime);
    }

    void displayTrainDetails() const
    {
        cout << "\nTrain Details" << endl;
        cout << "Train Number : " << trainNumber << endl;
        cout << "Train Name   : " << trainName << endl;
        cout << "Source       : " << source << endl;
        cout << "Destinati1on  : " << destination << endl;
        cout << "Train Time   : " << trainTime << endl;
    }


    int getTrainNumber() const
    {
        return trainNumber;
    }

    
    static int getTrainCount()
    {
        return trainCount;
    }

    
    ~Train()
    {
        cout << "Destructor Called" << endl;
    }
};

int Train::trainCount = 0;

class RailwaySystem
{
private:
    vector<Train> trains;

public:

    void addTrain(const Train &t)
    {
        trains.push_back(t);
        cout << "Train Record Added Successfully." << endl;
    }


    void displayAllTrains()
    {
        if (trains.empty())
        {
            cout << "No Train Records Found." << endl;
            return;
        }

        cout << "\n===== All Train Records =====" << endl;

        for (int i = 0; i < trains.size(); i++)
        {
            trains[i].displayTrainDetails();
        }
    }


    void searchTrainByNumber(int number)
    {
        for (int i = 0; i < trains.size(); i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << "\nTrain Found!" << endl;
                trains[i].displayTrainDetails();
                return;
            }
        }

        cout << "Train Not Found." << endl;
    }
};

int main()
{
    RailwaySystem railway;
    int choice;

    do
    {
        cout << "\n===== Railway Reservation System =====" << endl;
        cout << "1. Add Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train By Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Train t;
            t.inputTrainDetails();

        
            Train copyTrain = t;

            railway.addTrain(copyTrain);
            break;
        }

        case 2:
            railway.displayAllTrains();
            break;

        case 3:
        {
            int number;
            cout << "Enter Train Number to Search : ";
            cin >> number;
            railway.searchTrainByNumber(number);
            break;
        }

        case 4:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}