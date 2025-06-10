/*
----------------------------------------------------------------
File: concrete_reciter_factories.h
Description: Concrete factories for creating specific reciters
Author: Shahriar Rizvi
Roll: 2003104
----------------------------------------------------------------
*/



#ifndef CONCRETE_RECITER_FACTORIES_H
#define CONCRETE_RECITER_FACTORIES_H

#include "reciter_factory.h"   
#include "concrete_reciters.h" 

class MisharyAlafasyFactory : public ReciterFactory { // Inherits from ReciterFactory
public:
    std::unique_ptr<Reciter> createReciter() const override {
        return std::make_unique<MisharyAlafasyReciter>();
    }
};

class SaadAlGhamdiFactory : public ReciterFactory {
public:
    std::unique_ptr<Reciter> createReciter() const override {
        return std::make_unique<SaadAlGhamdiReciter>();
    }
};

class AbdulRahmanAlSudaisFactory : public ReciterFactory {
public:
    std::unique_ptr<Reciter> createReciter() const override {
        return std::make_unique<AbdulRahmanAlSudaisReciter>();
    }
};

#endif 