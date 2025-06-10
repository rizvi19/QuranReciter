/*
-------------------------------------------------------------------
File: concrete_reciters.h
Description: Concrete implementations of the Reciter class
Author: Shahriar Rizvi
Roll: 2003104
-------------------------------------------------------------------
*/


#ifndef CONCRETE_RECITERS_H
#define CONCRETE_RECITERS_H

#include "reciter.h" 
#include <string>   

// Concrete 1
class MisharyAlafasyReciter : public Reciter { 
public:
    std::string recite(const std::string& surahName, int ayahNumber) const override {
        return "Reciting Surah " + surahName + ", Ayah " + std::to_string(ayahNumber) +
               " - Style: Mishary Rashid Alafasy (Clear, Melodious Articulation).";
    }
};

// Concrete 2
class SaadAlGhamdiReciter : public Reciter {
public:
    std::string recite(const std::string& surahName, int ayahNumber) const override {
        return "Reciting Surah " + surahName + ", Ayah " + std::to_string(ayahNumber) +
               " - Style: Saad Al-Ghamdi";
    }
};

// Concrete 3
class AbdulRahmanAlSudaisReciter : public Reciter {
public:
    std::string recite(const std::string& surahName, int ayahNumber) const override {
        return "Reciting Surah " + surahName + ", Ayah " + std::to_string(ayahNumber) +
               " - Style: Abdul Rahman Al-Sudais";
    }
};

#endif 