// ComplexNumberTest.h

#ifndef COMPLEX_NUMBER_TEST_H
#define COMPLEX_NUMBER_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "Complex.h" // Include the Complex class header.

class ComplexNumberTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ComplexNumberTest);
    CPPUNIT_TEST(testEquality);
    CPPUNIT_TEST(testAddition);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

    void testEquality();
    void testAddition();

private:
    Complex* m_10_1;
    Complex* m_1_1;
    Complex* m_11_2;
};

#endif // COMPLEX_NUMBER_TEST_H
