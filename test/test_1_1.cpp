//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "p1.h"
using namespace std;

TEST_CASE("Question #1") {
#ifdef ENABLE_TEST
    execute_test("test_1_1.in", question_1);
#endif
}