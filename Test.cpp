/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Amichai Hadad,Yana Shayev
 * 
 * Date: 2020-04
 */
#include "doctest.h"
#include "FamilyTree.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
TEST_CASE("simple Tree"){
    family::Tree t("Amichai");
    t.addFather("Amichai","Sason").
    addMother("Amichai","Naama").
    addMother("Naama","Hanna").
    addFather("Naama","Moshe").
    addFather("Sason","Yona").
    addMother("Sason","Aliza");
    CHECK(t.relation("Sason").compare("father")==0);
    CHECK(t.relation("sason").compare("father")==1);
    CHECK(t.relation("saason").compare("father")==1);
    CHECK(t.relation("Naama").compare("mother")==0);
    CHECK(t.relation("naama").compare("mother")==1);
    CHECK(t.relation("naama").compare("mother")==1);
    CHECK(t.relation("Hanna").compare("grandmother")==0);
    CHECK(t.relation("Aliza").compare("grandmother")==0);
    CHECK(t.relation("Yona").compare("grandfather")==0);
    CHECK(t.relation("Moshe").compare("grandfather")==0);
    CHECK(t.relation("moshe").compare("grandfather")==1);
    CHECK(t.relation("moss").compare("grandfather")==1);
    CHECK(t.relation("vba").compare("grandfather")==1);
    CHECK(t.relation("abd").compare("grandfather")==1);
    CHECK(t.relation("ffa").compare("grandfather")==1);
    CHECK(t.relation("rere").compare("grandfather")==1);
    CHECK(t.relation("a").compare("grandfather")==1);
    CHECK(t.relation("b").compare("grandfather")==1);
    CHECK(t.relation("c").compare("grandfather")==1);
    CHECK(t.relation("d").compare("grandfather")==1);
    CHECK(t.relation("e").compare("grandfather")==1);
    CHECK(t.relation("f").compare("grandfather")==1);
    CHECK(t.relation("g").compare("grandfather")==1);
    CHECK(t.relation("h").compare("grandfather")==1);
    CHECK(t.relation("j").compare("grandfather")==1);
    CHECK(t.relation("k").compare("grandfather")==1);
    CHECK(t.relation("l").compare("grandfather")==1);
    CHECK(t.relation("m").compare("grandfather")==1);
    CHECK(t.relation("n").compare("grandfather")==1);
    CHECK(t.relation("o").compare("grandfather")==1);
    CHECK(t.relation("p").compare("grandfather")==1);
    CHECK(t.relation("x").compare("grandfather")==1);
    CHECK(t.relation("z").compare("grandfather")==1);
    CHECK(t.relation("s").compare("grandfather")==1);
    t.remove("sason");
    CHECK(1==1);
    CHECK(t.relation("Sason").compare("father")==1);
    CHECK(t.relation("Yona").compare("grandfather")==1);
    CHECK(t.relation("Aliza").compare("grandmother")==1);
    CHECK(t.relation("Naama").compare("mother")==0);
    CHECK(t.relation("Hanna").compare("grandmother")==0);
    CHECK(t.relation("Moshe").compare("grandfather")==0);
    t.remove("naama");
    CHECK(1==1);
    CHECK(t.relation("Sason").compare("father")==1);
    CHECK(t.relation("Yona").compare("grandfather")==1);
    CHECK(t.relation("Aliza").compare("grandmother")==1);
    CHECK(t.relation("Naama").compare("mother")==1);
    CHECK(t.relation("Hanna").compare("grandmother")==1);
    CHECK(t.relation("Moshe").compare("grandfather")==1);
}

TEST_CASE("complex tree"){
    family::Tree t("Amichai");
    t.addFather("Amichai","Sason").
    addMother("Amichai","Naama").
    addMother("Naama","Hanna").
    addFather("Naama","Moshe").
    addFather("Sason","Yona").
    addMother("Sason","Aliza");
    CHECK(t.relation("Sason").compare("father")==0);
    CHECK(t.relation("sason").compare("father")==1);
    CHECK(t.relation("saason").compare("father")==1);
    CHECK(t.relation("Naama").compare("mother")==0);
    CHECK(t.relation("naama").compare("mother")==1);
    CHECK(t.relation("naama").compare("mother")==1);
    CHECK(t.relation("Hanna").compare("grandmother")==0);
    CHECK(t.relation("Aliza").compare("grandmother")==0);
    CHECK(t.relation("Yona").compare("grandfather")==0);
    CHECK(t.relation("Moshe").compare("grandfather")==0);
    CHECK(t.relation("moshe").compare("grandfather")==1);
    CHECK(t.relation("moss").compare("grandfather")==1);
    CHECK(t.relation("vba").compare("grandfather")==1);
    CHECK(t.relation("abd").compare("grandfather")==1);
    CHECK(t.relation("ffa").compare("grandfather")==1);
    CHECK(t.relation("rere").compare("grandfather")==1);
    CHECK(t.relation("a").compare("grandfather")==1);
    CHECK(t.relation("b").compare("grandfather")==1);
    CHECK(t.relation("c").compare("grandfather")==1);
    CHECK(t.relation("d").compare("grandfather")==1);
    CHECK(t.relation("e").compare("grandfather")==1);
    CHECK(t.relation("f").compare("grandfather")==1);
    CHECK(t.relation("g").compare("grandfather")==1);
    CHECK(t.relation("h").compare("grandfather")==1);
    CHECK(t.relation("j").compare("grandfather")==1);
    CHECK(t.relation("k").compare("grandfather")==1);
    CHECK(t.relation("l").compare("grandfather")==1);
    CHECK(t.relation("m").compare("grandfather")==1);
    CHECK(t.relation("n").compare("grandfather")==1);
    CHECK(t.relation("o").compare("grandfather")==1);
    CHECK(t.relation("p").compare("grandfather")==1);
    CHECK(t.relation("x").compare("grandfather")==1);
    CHECK(t.relation("z").compare("grandfather")==1);
    CHECK(t.relation("s").compare("grandfather")==1);
    t.remove("sason");
    CHECK(1==1);
    CHECK(t.relation("Sason").compare("father")==1);
    CHECK(t.relation("Yona").compare("grandfather")==1);
    CHECK(t.relation("Aliza").compare("grandmother")==1);
    CHECK(t.relation("Naama").compare("mother")==0);
    CHECK(t.relation("Hanna").compare("grandmother")==0);
    CHECK(t.relation("Moshe").compare("grandfather")==0);
    t.remove("naama");
    CHECK(1==1);
    CHECK(t.relation("Sason").compare("father")==1);
    CHECK(t.relation("Yona").compare("grandfather")==1);
    CHECK(t.relation("Aliza").compare("grandmother")==1);
    CHECK(t.relation("Naama").compare("mother")==1);
    CHECK(t.relation("Hanna").compare("grandmother")==1);
    CHECK(t.relation("Moshe").compare("grandfather")==1);
}