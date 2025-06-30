#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>
#include <unordered_map>

using namespace std;
void setTextColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


// Function to convert input to lowercase for case-insensitive matching
string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Function to check if the user input contains the symptom
bool hasSymptom(const string& input, const string& symptom) {
    return toLower(input).find(toLower(symptom)) != string::npos;
}

// Main function to run the disease detector
void runDiseaseDetector() {
    // Initialize the disease database with a Hash Table
    unordered_map<string, vector<string>> diseaseDatabase = {
        {"Flu", {"fever", "cough", "sore throat", "runny nose", "body aches"}},
        {"Cold", {"sneezing", "runny nose", "cough", "congestion"}},
        {"COVID-19", {"fever", "cough", "shortness of breath", "loss of taste", "loss of smell"}},
        {"Malaria", {"fever", "chills", "sweating", "muscle pain", "headache"}},
        {"Diabetes", {"frequent urination", "increased thirst", "fatigue", "blurry vision"}},
        {"Asthma", {"shortness of breath", "chest tightness", "wheezing", "cough"}},
        {"Bronchitis", {"persistent cough", "chest discomfort", "mucus production"}},
        {"Pneumonia", {"chest pain", "fever", "cough", "difficulty breathing"}},
        {"Tuberculosis", {"persistent cough", "weight loss", "night sweats", "fever"}},
        {"Migraine", {"severe headache", "sensitivity to light", "nausea", "vomiting"}},
        {"Hypertension", {"headache", "dizziness", "blurred vision", "shortness of breath"}},
        {"Depression", {"persistent sadness", "loss of interest", "fatigue", "insomnia"}}
        // Add more diseases as needed
    };

    // Display greeting interface
    setTextColor(10); // Light green color
    cout << "\n=============================================\n";
    cout << "         WELCOME TO THE DISEASE DETECTOR       \n";
    cout << "=============================================\n";
    setTextColor(15); // Reset to white color

    // Display menu
    cout << "\nMenu:\n";
    cout << "Press 1 to Start Disease Detection\n";
    cout << "Press any other key to Exit\n";
    
    // Get user choice
    char choice;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // To handle the newline character after entering choice

    if (choice == '1') {
        setTextColor(11); // Light cyan color
        cout << "\nHi! I can help you detect possible diseases based on your symptoms.\n";
        setTextColor(15); // Reset to white color

        do {
            // Symptom input
            string userInput;
            cout << "\nPlease enter your symptoms (separated by commas): ";
            getline(cin, userInput);
            userInput = toLower(userInput);

            bool diseaseFound = false;

            // Check each disease in the database
            for (const auto& disease : diseaseDatabase) {
                const string& diseaseName = disease.first;
                const vector<string>& symptoms = disease.second;

                // Count matching symptoms
                int matchCount = 0;
                for (const string& symptom : symptoms) {
                    if (hasSymptom(userInput, symptom)) {
                        matchCount++;
                    }
                }

                // Display result based on symptom match
                if (matchCount > 0) {
                    setTextColor(14); // Yellow color for matched disease
                    cout << "\nPossible Disease Detected: " << diseaseName << "\n";
                    cout << "Matching Symptoms: " << matchCount << "/" << symptoms.size() << "\n";
                    setTextColor(15); // Reset to white color
                    diseaseFound = true;
                }
            }

            if (!diseaseFound) {
                setTextColor(12); // Red color for no matches
                cout << "\nNo disease could be confidently identified based on the provided symptoms. Please consult a doctor.\n";
                setTextColor(15); // Reset to white color
            }

            // Ask if the user wants to search again
            string repeatChoice;
            cout << "\nWould you like to search for another disease? (yes/no): ";
            getline(cin, repeatChoice);
            if (toLower(repeatChoice) != "yes" && toLower(repeatChoice) != "y") {
                break;
            }

        } while (true);

        setTextColor(10); // Light green color for exit message
        cout << "\nThank you for using the Disease Detector! Take care and stay healthy!\n";
        setTextColor(15); // Reset to white color
    } else {
        setTextColor(12); // Red color for exit message
        cout << "\nExiting the Disease Detector. Stay healthy!\n";
        setTextColor(15); // Reset to white color
    }
}


  
   

