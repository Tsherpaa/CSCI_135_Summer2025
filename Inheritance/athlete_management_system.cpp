#include <iostream>
#include <string>
#include <vector>
using namespace std;

// TODO 1: Define the base class Athlete
class Athlete {
protected:
    string name;
    int age;
    string sport;

public:
    // TODO 2: Define constructor to initialize name, age, and sport
    Athlete(string athleteName, int athleteAge, string athleteSport) {
        // initialize name, age, sport
        name = athleteName;
        age = athleteAge;
        sport = athleteSport;
    }

    // TODO 3: Define printInfo() to display basic athlete info
    void printInfo() {
        // Example output: Name: Alex, Age: 22, Sport: Running
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sport: " << sport << endl;
    }

    // TODO 4: Define train() with a generic message
    void train() {
        // Example: Athlete is doing general training.
        cout << "\nAthlete is doing general training." << endl;
    }
};

// TODO 5: Define class Runner : public Athlete
class Runner : public Athlete {
private:
    double topSpeed;

public:
    // TODO 6: Constructor with initializer list
    Runner(string athleteName, int athleteAge, double athleteTopSpeed) : Athlete(athleteName, athleteAge, "Runner") {
        // initialize topSpeed
        topSpeed = athleteTopSpeed;
    }

    // TODO 7: Override train() with specific message
    void train() {
        // Example: Runner Alex is sprinting at 28.5 km/h.
        cout << "\nRunner " << name << " is sprinting at " << topSpeed << " km/h. " << endl;
    }
};

// TODO 8: Define class Swimmer : public Athlete
class Swimmer : public Athlete {
private:
    string strokeType;

public:
    // TODO 9: Constructor with initializer list
    Swimmer(string athleteName, int athleteAge, string athleteStrokeType) : Athlete(athleteName, athleteAge, "Swimmer") {
        // initialize strokeType
        strokeType = athleteStrokeType;
    }

    // TODO 10: Override train() with specific message
    void train() {
        // Example: Swimmer Mia is swimming freestyle stroke.
        cout << "\nSwimmer " << name << " is swimming " << strokeType << " stroke." << endl;
    }
};

// TODO 11: Define class BasketballPlayer : public Athlete
class BasketballPlayer : public Athlete {
private:
    int verticalLeap;

public:
    // TODO 12: Constructor with initializer list
    BasketballPlayer(string athleteName, int athleteAge, int athleteVerticalLeap) : Athlete(athleteName, athleteAge, "BasketballPlayer") {
        // initialize verticalLeap
        verticalLeap = athleteVerticalLeap;
    }

    // TODO 13: Override train() with specific message
    void train() {
        // Example: Basketball player Jordan is training vertical leap of 35 inches.
        cout << "\nBasketball player " << name << " is training vertical leap of " << verticalLeap << " inches." << endl;
    }
};

int main() {
    // TODO 14: Create vectors for each athlete type
    vector<Runner> runners;
    vector<Swimmer> swimmers;
    vector<BasketballPlayer> basketballPlayers;

    // TODO 15: Add at least 2 objects to each vector
    // runners.push_back(Runner(...));
    runners.push_back(Runner("Alex", 22, 28.5));
    runners.push_back(Runner("John", 28, 29));
    // swimmers.push_back(Swimmer(...));
    swimmers.push_back(Swimmer("Mia", 20, "freestyle"));
    swimmers.push_back(Swimmer("Micheal", 20, "butterfly"));
    // basketballPlayers.push_back(BasketballPlayer(...));
    basketballPlayers.push_back(BasketballPlayer("Legoat", 42, 46));
    basketballPlayers.push_back(BasketballPlayer("Zach Lavine", 42, 50));

    // TODO 16: Loop through runners and call printInfo() and train()
    for (Runner &r : runners) {
        // call printInfo() and train()
        r.printInfo();
        r.train();
    }

    // TODO 17: Loop through swimmers and call printInfo() and train()
    for (Swimmer &s : swimmers) {
        // call printInfo() and train()
        s.printInfo();
        s.train();
    }

    // TODO 18: Loop through basketball players and call printInfo() and train()
    for (BasketballPlayer &b : basketballPlayers) {
        // call printInfo() and train()
        b.printInfo();
        b.train();
    }

    return 0;
}