//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "p2.h"
using namespace std;

TEST_CASE("Question #2") {
#ifdef ENABLE_TEST
    execute_test("test_2_1.in", question_2);
#endif
}