/*
---------------------------------------------------------------------
File: reciter_factory.h
Description: The abstract factory class ReciterFactory
Author: Shahriar Rizvi
Roll: 2003104
---------------------------------------------------------------------
*/


#ifndef RECITER_FACTORY_H
#define RECITER_FACTORY_H

#include "reciter.h" 
#include <memory>    
#include <string>

// Abstract Creator
class ReciterFactory {
public:
    virtual ~ReciterFactory() = default; 
    virtual std::unique_ptr<Reciter> createReciter() const = 0;

    std::string getSampleRecitation(const std::string& surahName, int ayahNumber) const {
        std::unique_ptr<Reciter> qari = createReciter(); 
        return qari->recite(surahName, ayahNumber);
    }
};

#endif