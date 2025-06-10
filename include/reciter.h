/*
-------------------------------------------------
File: reciter.h
Description: The abstract base class Reciter
Author: Shahriar Rizvi
Roll: 2003104
-------------------------------------------------
*/


#ifndef RECITER_H
#define RECITER_H

#include <string> 

// Abstract 
class Reciter {
public:
    virtual ~Reciter() = default;
    virtual std::string recite(const std::string& surahName, int ayahNumber) const = 0;
};

#endif