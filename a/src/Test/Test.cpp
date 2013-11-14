#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include <iostream>
#include <cstdlib>
#include "../Calculadora/OperacionesArimeticas.h"
using namespace std;
using namespace cute;
OperacionesArimeticas opAri;

void sumarTest() {
    int first, second, expected;
    first = 1;
    second = 1;
    expected = 4;
    ASSERT_EQUAL(expected, opAri.Sumar(first,second));
}

void sumarTest2() {
    int first, second, expected;
    first = 1;
    second = 3;
    expected = 4;
    ASSERT_EQUAL(expected, opAri.Sumar(first,second));
}

void runAllTests(int argc, char const *argv[]) {
    suite s;
    // Tests
    s.push_back(CUTE(sumarTest));
    s.push_back(CUTE(sumarTest2));
    xml_file_opener xmlfile(argc, argv);
    xml_listener<cute::ide_listener<> > lis(xmlfile.out);
    makeRunner(lis, argc, argv)(s, "AllTests");
}

int main(int argc, char const *argv[]) {
    runAllTests(argc, argv);
    return 0;
}


