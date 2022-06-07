#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include "../HashMap.h"

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class getTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(getTest);
    CPPUNIT_TEST(test1);
    CPPUNIT_TEST(test2);
	CPPUNIT_TEST(test3);
	CPPUNIT_TEST(test4);
    CPPUNIT_TEST_SUITE_END();
    
public:
    void setUp(void);
    void tearDown(void);
    
protected:
    void test1(void);
    void test2(void);
    
private:
    
    HashMap* hashMap;
};

// ------------------------ IMPLEMENTATION ------------------------

void getTest::test1(void)
{
    CPPUNIT_ASSERT(2==hashMap->get(6)); // return value of key (orange)
}

void getTest::test2(void)
{
    CPPUNIT_ASSERT(0== hashMap->get(5)); // blue line : key doenst exist
}

void getTest::test3(void)
{
	CPPUNIT_ASSERT(== hashMap->get());
}

void getTest::test4(void)
{
	CPPUNIT_ASSERT(== hashMap->get());
}

void getTest::setUp(void)
{
    hashMap = new HashMap();
}

void getTest::tearDown(void)
{
    delete hashMap;
}