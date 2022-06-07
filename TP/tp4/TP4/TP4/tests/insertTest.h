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

class insertTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(insertTest);
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
    
private:
    
    HashMap* hashMap;
};

// ------------------------ IMPLEMENTATION ------------------------

void insertTest::test1(void)
{
	hashMap->insertNode(6,2)
    CPPUNIT_ASSERT(2 == hashMap->getNode(6));
}

void insertTest::test2(void)
{
    CPPUNIT_ASSERT(insertNode(6,2 ));
}

void insertTest::test3(void)
{
	CPPUNIT_ASSERT(insertNode(-1, 5)); // test last condition while loop
}


void insertTest::setUp(void)
{
    hashMap = new HashMap();
}

void insertTest::tearDown(void)
{
    delete hashMap;
}