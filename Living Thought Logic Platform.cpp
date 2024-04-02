// Living Thought Logic Platform.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <limits>
using namespace std;


class subcomponents {
public:
    string info;
    bool detailed;
    string name;
    bool having;
};

class components {
private:
    bool detailed;
    subcomponents first;
    subcomponents second;
    subcomponents third;

public:
    string name;
    bool having;
    string info;
    string dinfo;
    void setName(string n) {
        name = n;
    }
    void setLT(string n, string a, string b, string c) {
        name = n;
        first.name = a;
        second.name = b;
        third.name = c;
        info = name + "\n" + a + "\n" + b + "\n" + c;
    }
    string getName() {
        return name;
    }
    string getInfo() {
        return info;
    }
    string getfirst() {
        return first.name;
    }
    string getsecond() {
        return second.name;
    }
    string getthird() {
        return third.name;
    }
    string getpurpose() {
        return first.name + ", " + second.name + ", " + third.name;
    }
};

class Principles {
public:
    components Principle_of_Knowledge;
    components Principle_of_Life;
    components Principle_of_Soul;
    string condition;
    int PRLT;
    int PLT_K; // Knowledge
    int PLT_K_C; // Knowledge - Complexity
    int PLT_K_I; // Knowledge - Interconnectedness
    int PLT_K_ID; // Knowledge - Interdependence
    int PLT_L; // Life
    int PLT_L_CH; // Life - Change
    int PLT_L_G; // Life - Growth
    int PLT_L_E; // Life - Evolution
    int PLT_S; // Soul
    int PLT_S_P; // Soul - Purpose
    int PLT_S_M; // Soul - Meaning
    int PLT_S_C; // Soul - Contribution
    string choice;
    string name;
    string one;
    string two;
    string thr;
    string info;
    string detail;
    void set() {
        cout << "What is the Principle of Knowledge of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a) Complexity\n";
        getline(cin,one);
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {}
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Does the Complexity of Knowledge recognize the intricate nature of entities and their interactions within the universe?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_K_C = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b) Interconnectedness \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Does the Interconnectedness of Knowledge highlight the fundamental connections among all forms of knowledge and entities?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_K_C = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c) Interdependence \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the Interdependence of Knowledge emphasize the mutual reliance between various elements of knowledge and existence?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_K_C = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Principle_of_Knowledge.setLT(name, one, two, thr);
        cout << "What is the Principle of Life of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Change \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Does the Change of Life recognize the constant evolution and transformation within life processes?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_L_CH = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Growth \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Does the Growth of Life identify the capacity for expansion and development in all living things?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_L_G = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Evolution \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the Evolution of Life point to the progressive nature of life, adapting over time for survival and advancement?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_L_E = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Principle_of_Life.setLT(name, one, two, thr);
        cout << "What is the Principle of Soul of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Purpose \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Does the Purpose of Soul suggest that every entity has an inherent goal or reason for its existence?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_S_P = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Meaning \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Does the Meaning of Soul encourage the search for deeper understanding and significance in all aspects of life?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_S_M = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Contribution \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the Contribution of Soul stress the importance of each entity's role and impact within the larger system?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_S_C = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Principle_of_Soul.setLT(name, one, two, thr); PLT_K = (PLT_K_C + PLT_K_I + PLT_K_C) / 3;
        PLT_L = (PLT_L_CH + PLT_L_E + PLT_L_G) / 3;
        PLT_S = (PLT_S_C + PLT_S_M + PLT_S_P) / 3;
        PRLT = PLT_K + PLT_L + PLT_S;
    }
    string get() {
        info = Principle_of_Knowledge.getInfo()+ "\n" + Principle_of_Life.getInfo() + "\n" +Principle_of_Soul.getInfo() + "\n";
        return info;
    }
    int getScore() {
        return PRLT;
    }
    void open(string s) {
        string fileName;
        fileName = s + ".txt";
        ifstream readFile(fileName);
    }
    
};

class Fundamental {
public:
    components Mathematics;
    components Natural_Science;
    components Technology;
    components Humanities;
    components Social_Science;
    components Arts;
    string condition;
    // Fundamentals of Living Thought
    int FLT;
    int FLT_M; // Mathematics
    int FLT_M_FM; // Foundational Mathematics
    int FLT_M_PM; // Pure Mathematics
    int FLT_M_AM; // Applied Mathematics
    int FLT_NS; // Natural Science
    int FLT_NS_PCS; // Physical and Chemical Science
    int FLT_NS_BLS; // Biological and Life Science
    int FLT_NS_AGS; // Astro and Geo Science
    int FLT_T; // Technology
    int FLT_T_ET; // Extension Technology
    int FLT_T_MT; // Manipulation Technology
    int FLT_T_CT; // Connection Technology
    int FLT_H; // Humanities
    int FLT_H_LLS; // Language and Linguistics Studies
    int FLT_H_HCS; // Historical and Cultural Studies
    int FLT_H_PES; // Philosophical and Ethical Studies
    int FLT_SS; // Social Science
    int FLT_SS_S; // The Societal Science (Sociology)
    int FLT_SS_M; // The Mental Science (Psychology)
    int FLT_SS_F; // The Financial Science (Economics)
    int FLT_A; // Arts
    int FLT_A_LA; // Literary Arts
    int FLT_A_VA; // Visual Arts
    int FLT_A_PA; // Performing Arts
    string choice;
    string name;
    string one;
    string two;
    string thr;
    string info;
    string detail;
    void set() {
        cout << "What is the Mathematics of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Foundational Mathematics \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Do foundational mathematics concepts form the basis of more complex theories?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_M_FM = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Pure Mathematics \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Is pure mathematics focused on the study of abstract concepts without immediate practical application?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_M_PM = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Applied Mathematics \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does applied mathematics involve the application of mathematical methods by various complex fields?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_M_AM = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Mathematics.setLT(name, one, two, thr);
        cout << "What is the Natural Science of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Physical and Chemical Science \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Does the study of physical and chemical science focus on inanimate natural objects and the laws governing them?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_NS_PCS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Biological and Life Science \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Is the exploration of biological and life science centered on living organisms and life processes?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_NS_BLS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Astro and Geo Science \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does astro and geo science examine the universe beyond Earth and Earth's own physical structure?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_NS_AGS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Natural_Science.setLT(name, one, two, thr);
        cout << "What is the Technology of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Extension Technology \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Do extension technologies extend human capabilities?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_T_ET = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Manipulation Technology \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Do manipulation technologies allow humans to alter their environment and materials?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_T_MT = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Connection Technology \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Do connection technologies facilitate communication and interaction between individuals and entities?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_T_CT = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Technology.setLT(name, one, two, thr);
        cout << "What is the Humanities of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Language and Linguistics Studies \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is the study of language and linguistics concerned with the structure of language and its social function?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_H_LLS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Historical and Cultural Studies \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Are historical and cultural studies focused on human history and cultural developments over time?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_H_HCS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Philosophical and Ethical Studies \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does philosophical and ethical studies examine fundamental questions about existence, knowledge, and ethics?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_H_PES = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Humanities.setLT(name, one, two, thr);
        cout << "What is the Soical Science of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	The Societal Science (Sociology) \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is sociology the study of society and social relationships?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_SS_S = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	The Mental Science (Psychology) \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Is psychology the science of behavior and mind?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_SS_M = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	The Financial Science (Economics) \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Is economics the study of the production, distribution, and consumption of goods and services?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_SS_F = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Social_Science.setLT(name, one, two, thr);
        cout << "What is the Arts of this entity ?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Literary Arts \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is the literary arts sector focused on written works?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_A_LA = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Visual Arts \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Is the visual arts sector involved in the creation of visual artwork?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_A_VA = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Preforming Arts \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Are the performing arts where artists use their body, voice, or objects to convey artistic expression?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        FLT_A_PA = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Arts.setLT(name, one, two, thr); 
        FLT_M = (FLT_M_PM + FLT_M_AM + FLT_M_FM) / 3;
        FLT_NS = (FLT_NS_PCS + FLT_NS_BLS + FLT_NS_AGS) / 3;
        FLT_T = (FLT_T_CT + FLT_T_ET + FLT_T_MT) / 3;
        FLT_H = (FLT_H_HCS + FLT_H_LLS + FLT_H_PES) / 3;
        FLT_SS = (FLT_SS_F + FLT_SS_M + FLT_SS_S) / 3;
        FLT_A = (FLT_A_LA + FLT_A_PA + FLT_A_VA) / 3;
        FLT = FLT_M + FLT_NS + FLT_T + FLT_H + FLT_SS + FLT_A;
    }
    string get() {
        info = Mathematics.getInfo() + "\n";
        info = info + Natural_Science.getInfo() + "\n";
        info = info + Technology.getInfo() + "\n";
        info = info + Humanities.getInfo() + "\n";
        info = info + Social_Science.getInfo() + "\n";
        info = info + Arts.getInfo() + "\n";
        return info;
    }
    void open(string s) {
        string fileName;
        fileName = s + ".txt";
        ifstream readFile(fileName);
    }
    int getScore() {
        return FLT;
    }
};

class Pillars {
public:
    components MNT;
    components HSA;
    int PLT;
    int PLT_AMNT, PLT_AMNT_E, PLT_AMNT_HES, PLT_AMNT_R;
    int PLT_AHSA, PLT_AHSA_B, PLT_AHSA_LPC, PLT_AHSA_E;
    string condition;
    string choice;
    string name;
    string one;
    string two;
    string thr;
    string info;
    string detail;
    void set() {
        cout << "What is the MNT Pillars of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Engineering - Create \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is engineering focused on applying scientific principles to design and build machinery, structures, and other items?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AMNT_E = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Healthcare/Environmental Science - Sustain \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Are healthcare and environmental science fields primarily concerned with improving health and understanding the natural environment?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AMNT_HES = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Research - Investigate \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does research involve the systematic investigation into and study of materials and sources to establish facts and reach new conclusions?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AMNT_R = (condition == "yes" || condition == "Yes") ? 1 : 0;
        MNT.setLT(name, one, two, thr);
        cout << "What is the HSA Pillars of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Business - Manage \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is business about making a living by engaging in commerce?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AHSA_B = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Law/Political Science - Control \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Do law and political science focus on the study of legal systems and the structure and operation of governments?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AHSA_LPC = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Education - Learn \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Is education the process of facilitating learning, or the acquisition of knowledge, skills, values, beliefs, and habits?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AHSA_E = (condition == "yes" || condition == "Yes") ? 1 : 0;

        HSA.setLT(name, one, two, thr);
        PLT_AMNT = PLT_AMNT_E + PLT_AMNT_HES + PLT_AMNT_R;
        PLT_AHSA = PLT_AHSA_B + PLT_AHSA_LPC + PLT_AHSA_E;
        PLT = (PLT_AMNT + PLT_AHSA)/2;
    }
    string get() {
        info = MNT.getInfo() + "\n";
        info = info + HSA.getInfo() + "\n";
        return info;
    }
    void open(string s) {
        string fileName;
        fileName = s + ".txt";
        ifstream readFile(fileName);
    }
    int getScore() {
        return PLT;
    }
};

class Competencies {
public:
    components Intellectual_Competencies;
    components Survival_Competencies;
    components Professional_Competencies;
    int CLT;
    int CLT_IC, CLT_IC_CCT, CLT_IC_IL;
    int CLT_SC, CLT_SC_RP, CLT_SC_AF;
    int CLT_PC, CLT_PC_CC, CLT_PC_ML;
    string condition;
    string choice;
    string name;
    string one;
    string two;
    string info;
    string detail;
    void set() {
        cout << "What is the Intellectual Competencies of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a) Critical and Creative Thinking \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {}
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Is education the process of facilitating learning, or the acquisition of knowledge, skills, values, beliefs, and habits?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_IC_CCT = (condition == "yes" || condition == "Yes") ? 1 : 0;

        cout << "b)	Investigation and Learning \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }

        cout << "Is education the process of facilitating learning, or the acquisition of knowledge, skills, values, beliefs, and habits?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_IC_IL = (condition == "yes" || condition == "Yes") ? 1 : 0;

        Intellectual_Competencies.setLT(name, one, two, "");
        cout << "What is the Survival Competencies of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Resilience and Perseverance \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }

        cout << "Is the capacity to recover quickly from difficulties and persist in the face of obstacles indicative of resilience and perseverance?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_SC_RP = (condition == "yes" || condition == "Yes") ? 1 : 0;

        cout << "b)	Adaptability and Flexibility \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }

        cout << "Is the ability to change one's approach and strategies to meet new conditions a sign of adaptability and flexibility?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_SC_AF = (condition == "yes" || condition == "Yes") ? 1 : 0;

        Survival_Competencies.setLT(name, one, two, "");
        cout << "What is the Professional Competencies of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Communication and Collaboration \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }

        cout << "Does the ability to convey information effectively and work well with others describe communication and collaboration?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_PC_CC = (condition == "yes" || condition == "Yes") ? 1 : 0;

        cout << "b)	Management and Leadership \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }

        cout << "Are skills necessary for organizing, directing, and guiding individuals and groups essential for management and leadership?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        CLT_PC_ML = (condition == "yes" || condition == "Yes") ? 1 : 0;

        Professional_Competencies.setLT(name, one, two, "");
        CLT_IC = (CLT_IC_CCT + CLT_IC_IL) / 2;
        CLT_PC = (CLT_PC_CC + CLT_PC_ML) / 2;
        CLT_SC = (CLT_SC_AF + CLT_SC_RP) / 2;
        CLT = CLT_IC + CLT_PC + CLT_SC;
    }
    string get() {
        info = Intellectual_Competencies.getInfo() + "\n";
        info = info + Survival_Competencies.getInfo() + "\n";
        info = info + Professional_Competencies.getInfo() + "\n";
        return info;
    }
    void open(string s) {
        string fileName;
        fileName = s + ".txt";
        ifstream readFile(fileName);
    }
    int getScore() {
        return CLT;
    }

};

class Processes {
public:
    components Dev;
    components App;
    string condition;
    string name;
    int PLT, PLT_FS, PLT_DS, PLT_PS, PLT_AS, PLT_IS, PLT_WLS;
    string choice;
    string one;
    string two;
    string thr;
    string info;
    string detail;
    void set() {
        cout << "What is the Development of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Foundational Stage \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Does the Foundational Stage focus on building a solid base of knowledge and understanding in the diverse disciplines that underpin the theory?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_FS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Development Stage \n";
        getline( cin, two ); 
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "In the Development Stage, do individuals begin to deepen their understanding by applying foundational knowledge to explore more complex concepts and relationships?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_DS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	Professional Stage \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the Professional Stage emphasize applying the acquired knowledge in professional settings to solve real-world problems?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_PS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Dev.setLT(name, one, two, thr);
        cout << "What is the Application of this entity?\n";
        cin >> name;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "a)	Application Stage \n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Involves the Application Stage the practical application of the theory to various domains, demonstrating its versatility and effectiveness?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_AS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "b)	Integration Stage \n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the Integration Stage involve individuals integrating their learning and experiences to form a cohesive and comprehensive worldview, bridging gaps between disciplines?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_IS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        cout << "c)	World View and Legacy Stage \n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Does the World View and Legacy Stage focus on reflecting upon and contributing to the broader understanding of the universe, society, and consciousness, leaving a lasting legacy?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        PLT_WLS = (condition == "yes" || condition == "Yes") ? 1 : 0;
        App.setLT(name, one, two, thr);
        PLT = (PLT_FS + PLT_DS + PLT_AS + PLT_PS + PLT_IS + PLT_WLS)/2;

    }
    string get() {
        info = Dev.getInfo() + "\n";
        info = info + App.getInfo() + "\n";
        return info;
    }
    void open(string s) {
        string fileName;
        fileName = s + ".txt";
        ifstream readFile(fileName);
    }
    int getScore() {
        return PLT;
    }
};

class Manifestation {
public:
    components Civilization;
    components Conciousness;
    components Universe;
    int MLT, MLT_SC, MLT_IC, MLT_LU;
    string choice;
    string condition;
    string info;
    string detail;
    string one;
    string two;
    string thr;
    void set() {
        cout << "What is the Society and Civilization of this entity?\n";
        getline( cin, one );
        cout << "Confirm: " + one + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, one );
        }
        cout << "Do Society and Civilization encompass the collective social structures, cultures, and institutions that define human communities, highlighting the complexity of social interactions and the evolution of communal values?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        MLT_SC = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Civilization.setName(one);
        cout << "What is the Life and the Universe of this entity?\n";
        getline( cin, two );
        cout << "Confirm: " + two + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, two );
        }
        cout << "Does Individual and Consciousness explore the inner workings of the human mind and spirit, examining the nature of personal identity, awareness, and the quest for meaning?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        MLT_IC = (condition == "yes" || condition == "Yes") ? 1 : 0;
        Universe.setName(two);
        cout << "What is the Individual and Consciousness of this entity ?\n";
        getline( cin, thr );
        cout << "Confirm: " + thr + "\n[Y] or [N]" + "\n";
        cin >> choice;
        if (choice == "Y" || choice == "y")
        {
        }
        else
        {
            cout << "Re-enter: ";
            getline( cin, thr );
        }
        cout << "Do Life and the Universe delve into the fundamental principles that govern living organisms and the cosmos, seeking to understand the origins, evolution, and interconnectedness of all forms of existence?\n";
        cin >> condition;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        MLT_LU = (condition == "yes" || condition == "Yes") ? 1 : 0;
    }
    string get() {
        info = Civilization.getName() + "\n";
        info = info + Universe.getName() + "\n";
        info = info + Conciousness.getName() + "\n";
        return info;
    }
    int getScore() {
        MLT = MLT_IC + MLT_LU + MLT_SC;
        return MLT;
    }
};

class Living_Thought{
public:
    // Number of Theory of Living Thought: A Theory of Life, Soul, and Unity
    int TLT;
    string nameLT;
    string info;
    string detail;
    Principles principle;
    int principles;
    Fundamental fundamentals;
    int fundamental;
    Pillars pillars;
    int pillar;
    Competencies competencies;
    int competency;
    Processes process;
    int processess;
    Manifestation manifestation;
    int manifest;
    void setLivingThought() {
        cout << "What is the entity called:";
        cin >> nameLT;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        principle.set();
        fundamentals.set();
        pillars.set();
        competencies.set();
        process.set();
        manifestation.set();
        principles = principle.getScore();
        fundamental = fundamentals.getScore();
        pillar = pillars.getScore();
        competency = competencies.getScore();
        processess = process.getScore();
        manifest = manifestation.getScore();
        TLT = principles + fundamental + pillar + competency + processess + manifest;
    }
    string getLivingThought() {
        info = nameLT + "\n";
        info = info + principle.get();
        info = info + fundamentals.get();
        info = info + pillars.get();
        info = info + competencies.get();
        info = info + process.get();
        info = info + manifestation.get();
        info = info + to_string(principles) + "\n";
        info = info + to_string(fundamental) + "\n";
        info = info + to_string(pillar) + "\n";
        info = info + to_string(competency) + "\n";
        info = info + to_string(processess) + "\n";
        info = info + to_string(manifest) + "\n";
        info = info + to_string(TLT);
        return info;
    }
    void getLivingThoughtScore() {
        TLT = principle.getScore();
        TLT = TLT + fundamentals.getScore();
        TLT = TLT + pillars.getScore();
        TLT = TLT + competencies.getScore();
        TLT = TLT + process.getScore();
        TLT = TLT + manifestation.getScore();
        TLT = TLT / 6;

    }
    void Build(string fileName) {
        fileName = fileName + ".txt";
        ifstream file(fileName);
        string line;
        string name;
        string one;
        string two;
        string thr;
        int lineNumber = 0;
        if (file.is_open()) {
            while (getline(file, line)) {
                lineNumber++;
                if (lineNumber == 1) {
                    name = line;
                }
                else if (lineNumber == 2) {
                    name = line;
                }
                else if (lineNumber == 3) {
                    one = line;
                }
                else if (lineNumber == 4) {
                    two = line;
                }
                else if (lineNumber == 5) {
                    thr = line;
                    principle.Principle_of_Knowledge.setLT(name, one, two, thr);
                }
                else if (lineNumber == 6) {
                    name = line;
                }
                else if (lineNumber == 7) {
                    one = line;
                }
                else if (lineNumber == 8) {
                    two = line;
                }
                else if (lineNumber == 9) {
                    thr = line;
                     principle.Principle_of_Life.setLT(name, one, two, thr);
                }
                else if (lineNumber == 10) {
                    name = line;
                }
                else if (lineNumber == 11) {
                    one = line;
                }
                else if (lineNumber == 12) {
                    two = line;
                }
                else if (lineNumber == 13) {
                    thr = line;
                     principle.Principle_of_Soul.setLT(name, one, two, thr);
                }
                else if (lineNumber == 14) {
                    name = line;
                }
                else if (lineNumber == 15) {
                    one = line;
                }
                else if (lineNumber == 16) {
                    two = line;
                }
                else if (lineNumber == 17) {
                    thr = line;
                     fundamentals.Mathematics.setLT(name, one, two, thr);
                }
                else if (lineNumber == 18) {
                    name = line;
                }
                else if (lineNumber == 19) {
                    one = line;
                }
                else if (lineNumber == 20) {
                    two = line;
                }
                else if (lineNumber == 21) {
                    thr = line;
                     fundamentals.Natural_Science.setLT(name, one, two, thr);
                }
                else if (lineNumber == 22) {
                    name = line;
                }
                else if (lineNumber == 23) {
                    one = line;
                }
                else if (lineNumber == 24) {
                    two = line;
                }
                else if (lineNumber == 25) {
                    thr = line;
                     fundamentals.Technology.setLT(name, one, two, thr);
                }
                else if (lineNumber == 26) {
                    name = line;
                }
                else if (lineNumber == 27) {
                    one = line;
                }
                else if (lineNumber == 28) {
                    two = line;
                }
                else if (lineNumber == 29) {
                    thr = line;
                     fundamentals.Humanities.setLT(name, one, two, thr);
                }
                else if (lineNumber == 30) {
                    name = line;
                }
                else if (lineNumber == 31) {
                    one = line;
                }
                else if (lineNumber == 32) {
                    two = line;
                }
                else if (lineNumber == 33) {
                    thr = line;
                     fundamentals.Social_Science.setLT(name, one, two, thr);
                }
                else if (lineNumber == 34) {
                    name = line;
                }
                else if (lineNumber == 35) {
                    one = line;
                }
                else if (lineNumber == 36) {
                    two = line;
                }
                else if (lineNumber == 37) {
                    thr = line;
                     fundamentals.Arts.setLT(name, one, two, thr);
                }
                else if (lineNumber == 34) {
                    name = line;
                }
                else if (lineNumber == 35) {
                    one = line;
                }
                else if (lineNumber == 36) {
                    two = line;
                }
                else if (lineNumber == 37) {
                    thr = line;
                     pillars.MNT.setLT(name, one, two, thr);
                }
                else if (lineNumber == 34) {
                    name = line;
                }
                else if (lineNumber == 35) {
                    one = line;
                }
                else if (lineNumber == 36) {
                    two = line;
                }
                else if (lineNumber == 37) {
                    thr = line;
                     pillars.HSA.setLT(name, one, two, thr);
                }
                else if (lineNumber == 34) {
                    name = line;
                }
                else if (lineNumber == 35) {
                    one = line;
                }
                else if (lineNumber == 36) {
                    two = line;
                     competencies.Intellectual_Competencies.setLT(name, one, two, "");
                }
                else if (lineNumber == 37) {
                    name = line;
                }
                else if (lineNumber == 38) {
                    one = line;
                }
                else if (lineNumber == 39) {
                    two = line;
                     competencies.Survival_Competencies.setLT(name, one, two, "");
                }
                else if (lineNumber == 40) {
                    name = line;
                }
                else if (lineNumber == 41) {
                    one = line;
                }
                else if (lineNumber == 42) {
                    two = line;
                     competencies.Professional_Competencies.setLT(name, one, two, "");
                }
                else if (lineNumber == 43) {
                    name = line;
                }
                else if (lineNumber == 44) {
                    one = line;
                }
                else if (lineNumber == 45) {
                    two = line;
                }
                else if (lineNumber == 46) {
                    thr = line;
                     process.Dev.setLT(name, one, two, thr);
                }
                else if (lineNumber == 47) {
                    name = line;
                }
                else if (lineNumber == 48) {
                    one = line;
                }
                else if (lineNumber == 49) {
                    two = line;
                }
                else if (lineNumber == 50) {
                    thr = line;
                     process.App.setLT(name, one, two, thr);
                }
                else if (lineNumber == 51) {
                    name = line;
                }
                else if (lineNumber == 52) {
                    one = line;
                }
                else if (lineNumber == 53) {
                    two = line;
                }
                else if (lineNumber == 54) {
                    thr = line;
                    process.Dev.setLT(name, one, two, thr);
                }
                else if (lineNumber == 51) {
                    one = line;
                    manifestation.Civilization.name = one;
                }
                else if (lineNumber == 52) {
                    two = line;
                    manifestation.Universe.name = two;
                }
                else if (lineNumber == 53) {
                    thr = line;
                    manifestation.Conciousness.name = thr;

                }
                else if (lineNumber == 54) {
                    principles = stoi(line);
                }
                else if (lineNumber == 55) {
                    fundamental = stoi(line);

                }
                else if (lineNumber == 56) {
                    pillar = stoi(line);

                }
                else if (lineNumber == 57) {
                    competency = stoi(line);
                }
                else if (lineNumber == 58) {
                    processess = stoi(line);
                }
                else if (lineNumber == 59) {
                    manifest = stoi(line);
                }
                else if (lineNumber == 60) {
                    TLT = stoi(line);
                }
            }
            file.close();
        }
        else {
            cout << "Unable to open file\n";
        }
// Return an empty string if the line was not found
    }
};

string xor_cipher(const  string& input, const  string& key) {
    string output;
    output.resize(input.size());
    for (size_t i = 0; i < input.size(); ++i) {
        output[i] = input[i] ^ key[i % key.size()];
    }
    return output;
}

string caesar_cipher(const  string& input, int shift) {
    string output = input;
    for (char& c : output) {
        if (isalpha(c)) {
            char a = isupper(c) ? 'A' : 'a';
            c = (c - a + shift) % 26 + a;
        }
    }
    return output;
}

string reverse_string(const  string& input) {
    string output = input;
    reverse(output.begin(), output.end());
    return output;
}

string to_ascii_decimal(const  string& input) {
    string output;
    for (char c : input) {
        output += to_string(static_cast<int>(c)) + " ";
    }
    return output;
}

string from_ascii_decimal(const  string& input) {
    string output;
    istringstream iss(input);
    int value;
    while (iss >> value) {
        output += static_cast<char>(value);
    }
    return output;
}

// Function to create a new file and write to it
void create() {
    string encryptedText;
    string s;
    string choice;
    Living_Thought entity;
    // Prompt the user to enter a filename
    cout << "Create an Entity.\n";
    cout << "Enter a File Name:";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    s = s + ".txt";
    cout << "\nYour file is " + s;
    // Ask the user what they want to write in the file
    cout << "\nCreating Living Thought Entity\n";
    string line;
    string info;
    entity.setLivingThought();
    info = entity.getLivingThought();
    // Create a new file and write the user's input to it
    ofstream newfile(s);
    newfile << info;
    // Ask the user if they want to view the file
    cout << "Do you want to view the file ?\n" << endl;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // If the user wants to view the file, read the file and print the contents
    if (choice.compare("Yes") == 0 || choice.compare("yes") == 0)
    {
        newfile.close();
        string myText;

        ifstream readFile(s);

        while (getline(readFile, myText)) {

            cout << myText << endl;

        }

        readFile.close();

    }

    // If the user doesn't want to view the file, simply close it
    else {
        newfile.close();
        cout << "close";
    }
}

// Function to read a file and print its contents
void read() {
    string s;
    // Prompt the user to enter a filename
    cout << "Read the Entity.\n";
    cout << "Please enter File Name:";
    cin >> s;
    s = s + ".txt";
    cout << "\nYour file is " + s + "\n";
    string myText;

    // Read from the text file
    ifstream readFile(s);
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(readFile, myText)) {
        // Output the text from the file
        cout << myText << endl;
    }
    readFile.close();
}

// Function to edit a specific line in a file
void access() {
    string s;
    string choice;
    string info;
    string decrypted;
    // Prompt the user to enter a filename
    cout << "Access a file";
    cout << "FileName:";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    s = s + ".txt";
    cout << "Accessing file..." + s + "\n";
    // Open the file "s"
    ifstream inputFile(s);

    // Read the file line by line into a vector
    vector<string> lines;
    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    // Close the file
    inputFile.close();

    // Display the file to the user
    for (size_t i = 0; i < lines.size(); i++) {
        cout << i + 1 << ": " << lines[i] << '\n';
    }

    // Ask the user for a line number to edit
    cout << "Enter line number to edit: ";
    int lineNumber;
    cin >> lineNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer after reading a number

    // Check if the line number is valid
    if (lineNumber < 1 || lineNumber > static_cast<int>(lines.size())) {
        cout << "Invalid line number!\n";
        return; // Exit the function
    }

    // Ask the user for the new text
    cout << "Enter new text: ";
    getline(cin, line);

        // Update the line
        lines[lineNumber - 1] = line;

    // Open the file in output mode and write the lines back to the file
    ofstream outputFile(s);
    for (const auto& line : lines) {
        outputFile << line << '\n';
    }

    // Close the file
    outputFile.close();
}

int main()
{
    
    string cont;
    bool c = true;
    string what;
    do
    {
        // Ask the user what operation they want to perform
        cout << "Welcome to the Theory of Living Thought. \n What do you want to: a) create a file, b) read a file, or c) edit a file ?\n" << endl;
        cin >> what;
        // Perform the appropriate operation based on the user's input
        if (what == "a")
        {
            create();
            cout << "Is there anything that you need ?\n" << endl;
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue..." << endl;
            }
            else {
                c = false;
            }
        }
        else if (what == "b")
        {
            read();
            cout << "Is there anything that you need ?\n";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }
        else if (what == "c")
        {
            access();
            cout << "Is there anything that you need ?\n";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }
        // If the user's input is invalid, ask them if they want to continue
        else {
            cout << "You gave an invalid answer, do you want to continue ?\n";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }

    }
    // Continue the loop as long as the user wants to perform more operations
    while (c == true);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
