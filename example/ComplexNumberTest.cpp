// complexnumbertest.cpp
#include "ComplexNumberTest.h"
#include "Complex.h" // Include the Complex class header.

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( ComplexNumberTest ); // Note 4 

void ComplexNumberTest::setUp() {
    m_10_1 = new Complex(10, 1);
    m_1_1 = new Complex(1, 1);
    m_11_2 = new Complex(11, 2);
}

void ComplexNumberTest::tearDown() {
    delete m_10_1;
    delete m_1_1;
    delete m_11_2;
}

void ComplexNumberTest::testEquality() {
    CPPUNIT_ASSERT(*m_10_1 == *m_10_1);
    CPPUNIT_ASSERT(!(*m_10_1 == *m_11_2));
}

void ComplexNumberTest::testAddition() {
    CPPUNIT_ASSERT(*m_10_1 + *m_1_1 == *m_11_2);
}
