/*
------------------------------------------------------------------------
File: main.cpp
Description: Main application file for the Quran Reciter Selector
Author: Shahriar Rizvi
Roll: 2003104
------------------------------------------------------------------------
*/



#include <iostream> 
#include "concrete_reciter_factories.h" 

void listenToReciter(const ReciterFactory& factory, const std::string& reciterName) {
    std::cout << "Client: Requesting recitation from " << reciterName << "." << std::endl;

    std::string recitation = factory.getSampleRecitation("Al-Fatiha", 1);
    std::cout << recitation << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
}

int main() {
    std::cout << "🕋 Quran Reciter Selector App (Simplified Factory Method Demo) 🕌\n" << std::endl;

    MisharyAlafasyFactory misharyFactory;
    listenToReciter(misharyFactory, "Sheikh Mishary Rashid Alafasy");

    SaadAlGhamdiFactory ghamdiFactory;
    listenToReciter(ghamdiFactory, "Sheikh Saad Al-Ghamdi");

    AbdulRahmanAlSudaisFactory sudaisFactory;
    listenToReciter(sudaisFactory, "Sheikh Abdul Rahman Al-Sudais");

    return 0; 
}