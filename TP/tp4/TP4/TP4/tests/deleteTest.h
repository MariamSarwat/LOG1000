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

class deleteTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(deleteTest);
    CPPUNIT_TEST(test1);
    CPPUNIT_TEST(test2);
	CPPUNIT_TEST(test3);
    CPPUNIT_TEST_SUITE_END();
    
public:
    void setUp(void);
    void tearDown(void);
    
protected:
    void test1(void);
    void test2(void);
	void test3(void);
    
private:
    
    HashMap* hashMap;
};

// ------------------------ IMPLEMENTATION ------------------------

void deleteTest::test1(void)
{
    CPPUNIT_ASSERT(0 == hashMap->deleteNode(1)); // blue chemin so when arr[hasIndex] != Null -> cause tab is empty
}

void deleteTest::test2(void)
{
    CPPUNIT_ASSERT(2 == hashMap->deleteNode(6)); //orange line : need to insert in tab key=6 and value =2
}

void deleteTest::test3(void)
{
	CPPUNIT_ASSERT(0 == hashMap->deleteNode(5)); // green line : doesnt exist
}

void deleteTest::setUp(void)
{
    hashMap = new HashMap(); 
}

void deleteTest::tearDown(void)
{
    delete hashMap;
}