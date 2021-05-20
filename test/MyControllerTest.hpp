//
// Created by Casey Williams on 20/05/2021.
//

#ifndef OATPP_PRACTICE_MYCONTROLLERTEST_HPP
#define OATPP_PRACTICE_MYCONTROLLERTEST_HPP

#include "oatpp-test/UnitTest.hpp"

class MyControllerTest : public oatpp::test::UnitTest {
public:
    MyControllerTest() : UnitTest("TEST[MyControllerTest]") {}
    void onRun() override;
};

#endif //OATPP_PRACTICE_MYCONTROLLERTEST_HPP
