// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include <string>
#include "student.hpp" // student implementations

using namespace std;
using Catch::Matchers::Contains;
//TESTS

string testValue = "";

TEST_CASE("Exercise One") //Named ExerciseOne
 {   //Tests regular returns
    CHECK(exerciseOne("Sphen")==true);
    CHECK(exerciseOne("Colbert")==true);
    CHECK(exerciseOne("")==false);
    CHECK(exerciseOne("Bert")==true);
    CHECK(exerciseOne(" Bruno")==true);
    CHECK(exerciseOne("Huckle Berry")==true);
    CHECK(exerciseOne("Finn ")==true);
    CHECK(exerciseOne("   ")==false);
    CHECK(exerciseOne(" ")==true);
 }
 TEST_CASE("Exercise One Exceptions") 
 {  
    //Tests exceptions
    REQUIRE_THROWS_WITH( exerciseOne("E1len"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("5teve"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("3den"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("AL4N"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("Hari6ou"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("Kei7h"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("8enjamin"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("A9ua"), Contains( "INVALID" ) || Contains( "number" ) );
    REQUIRE_THROWS_WITH( exerciseOne("Th0mas"), Contains( "INVALID" ) || Contains( "number" ) );
        
}

TEST_CASE ("Exercise Two")
{
    CHECK(exerciseTwo("111")==7);
    CHECK(exerciseTwo("11")==3);
    CHECK(exerciseTwo("101")==5);
    CHECK(exerciseTwo("00111")==7);
    CHECK(exerciseTwo("0")==0);
    CHECK(exerciseTwo("1")==1);
    CHECK(exerciseTwo("10")==2);
    CHECK(exerciseTwo("10101010")==170);
    CHECK(exerciseTwo("100000")==32);
    CHECK(exerciseTwo("1000000")==64);
}
TEST_CASE ("Exercise Two Exceptions")
{
    CHECK_THROWS_WITH( exerciseTwo("E"), Contains( "ERROR") || Contains("error") );
    //Checks all letters throw an error
    for (char i = 'A'; i<='Z'; i++)
    {
        testValue += i;
        REQUIRE_THROWS_WITH( exerciseTwo(testValue), Contains( "ERROR") || Contains("error") );
        testValue = "";
    }
    for (char i = 'a'; i<='z'; i++)
    {
        testValue += i;
        REQUIRE_THROWS_WITH( exerciseTwo(testValue), Contains( "ERROR") || Contains("error") );
        testValue = "";
    }
    CHECK_THROWS_WITH( exerciseTwo("110e0"), Contains( "ERROR") || Contains("error") );
    CHECK_THROWS_WITH( exerciseTwo("1832"), Contains( "ERROR") || Contains("error") );
    CHECK_THROWS_WITH( exerciseTwo("45906"), Contains( "ERROR") || Contains("error") );
    //Checks single digit numbers
    for (char i = '2'; i<='9'; i++)
    {
        testValue += i;
        REQUIRE_THROWS_WITH( exerciseTwo(testValue), Contains( "ERROR") || Contains("error") );
        testValue = "";
    }
}

TEST_CASE("Exercise Three")
{
    CHECK( exerciseThree(10)== "1010");
    CHECK ( exerciseThree(1)=="1");
    CHECK ( exerciseThree(7)=="111");
    CHECK ( exerciseThree(13)=="1101");
    CHECK ( exerciseThree(2)=="10");
    CHECK ( exerciseThree(1)=="1");
    CHECK ( exerciseThree(64)=="1000000");
    CHECK ( exerciseThree(205)=="11001101");
    CHECK ( exerciseThree(0)=="0");
}

TEST_CASE("Exercise Three Exceptions")
{
    CHECK_THROWS_WITH (exerciseThree(-1), Contains("POSITIVE") || Contains("positive"));
    CHECK_THROWS_WITH (exerciseThree(-110001), Contains("POSITIVE") || Contains("positive"));
    CHECK_THROWS_WITH (exerciseThree(-32), Contains("POSITIVE") || Contains("positive"));
}
// Notes for teacher: 
// can use variables and libraries
// can use logic operators and loops
// you can run a specific test by using ./tests <TEST CASE NAME HERE>


