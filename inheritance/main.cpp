#include "ArrayList.h"
#include "NodeList.h"


#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include <sstream>

TEST_CASE("Working with List") {
    List *list = nullptr;
    std::stringstream out;

    SECTION("Working with ArrayList") {
        list = new ArrayList{};
        list->print(out);
        REQUIRE(out.str() == "This is ArrayList\n");
    }
    SECTION("Working with NodeList") {
        list = new NodeList{};
        list->print(out);
        REQUIRE(out.str() == "This is NodeList\n");
    }

    list->add_back(5);
    REQUIRE(list->find(5));
    REQUIRE(!list->find(2));
    REQUIRE(list->delete_back());
    REQUIRE(!list->delete_back());
}




//List
//-add_back
//-delete_back
//-print
//-find
    //ArrayList
    // -custom realization
    //NodeList
    // -custom realization