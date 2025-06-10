/*
----------------------------------------------------------------------------
File: reciter_tests.cpp
Description: Unit tests for Quran Reciter Selector using Google Test
Author: Shahriar Rizvi
Roll: 2003104
----------------------------------------------------------------------------
*/



#include "gtest/gtest.h" 
#include "concrete_reciter_factories.h" 
#include <string>   
#include <memory>  

TEST(ReciterFactoryTest, MisharyFactoryCreatesMisharyReciter) {
    MisharyAlafasyFactory factory;
    std::unique_ptr<Reciter> reciter = factory.createReciter(); // Use the factory

    ASSERT_NE(reciter, nullptr) << "Factory should create a valid reciter object.";

    std::string recitation = reciter->recite("Al-Ikhlas", 1);
    EXPECT_NE(recitation.find("Mishary Rashid Alafasy"), std::string::npos);
    EXPECT_NE(recitation.find("Clear, Melodious Articulation"), std::string::npos);
}

TEST(ReciterFactoryTest, MisharyFactorySampleRecitation) {
    MisharyAlafasyFactory factory;
    std::string sample = factory.getSampleRecitation("An-Nas", 1);
    EXPECT_NE(sample.find("Mishary Rashid Alafasy"), std::string::npos);
    EXPECT_NE(sample.find("Surah An-Nas, Ayah 1"), std::string::npos);
}

TEST(ReciterFactoryTest, SaadAlGhamdiFactoryCreatesSaadAlGhamdiReciter) {
    SaadAlGhamdiFactory factory;
    std::unique_ptr<Reciter> reciter = factory.createReciter();
    ASSERT_NE(reciter, nullptr);
    std::string recitation = reciter->recite("Al-Falaq", 1);
    EXPECT_NE(recitation.find("Saad Al-Ghamdi"), std::string::npos);
}

TEST(ReciterFactoryTest, AbdulRahmanAlSudaisFactoryCreatesAlSudaisReciter) {
    AbdulRahmanAlSudaisFactory factory;
    std::unique_ptr<Reciter> reciter = factory.createReciter();
    ASSERT_NE(reciter, nullptr);
    std::string recitation = reciter->recite("Al-Kawthar", 1);
    EXPECT_NE(recitation.find("Abdul Rahman Al-Sudais"), std::string::npos);
}

TEST(ConcreteReciterTest, MisharyReciterDirect) {
    MisharyAlafasyReciter reciter;
    std::string recitation = reciter.recite("TestSurah", 5);
    EXPECT_NE(recitation.find("Mishary Rashid Alafasy"), std::string::npos);
    EXPECT_NE(recitation.find("TestSurah, Ayah 5"), std::string::npos);
}
