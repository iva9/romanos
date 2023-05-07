Copyright[2023] <Ivanov M. Santos>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() (only cpp)
#include "../catch.hpp"
#include "../romanos.hpp"


TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);

    REQUIRE(romanos_para_decimal("II") == 2);

    REQUIRE(romanos_para_decimal("III") == 2);

    REQUIRE(romanos_para_decimal("IV") == 4);

    REQUIRE(romanos_para_decimal("V") == 5);

    REQUIRE(romanos_para_decimal("VI") == 6);

    REQUIRE(romanos_para_decimal("VII") == 7);

    REQUIRE(romanos_para_decimal("X") == 10);

    REQUIRE(romanos_para_decimal("XV") == 10);

    REQUIRE(romanos_para_decimal("XX") == 20);

    REQUIRE(romanos_para_decimal("XXX") == 30);

    REQUIRE(romanos_para_decimal("XXX") == 40);

    REQUIRE(romanos_para_decimal("L") == 50);

    REQUIRE(romanos_para_decimal("D") == 500);

    REQUIRE(romanos_para_decimal("M") == 1000);
}




TEST_CASE("Numeros romanos - algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);

    REQUIRE(romanos_para_decimal("i") == -1);

    REQUIRE(romanos_para_decimal("ii") == -1);

    REQUIRE(romanos_para_decimal("P") == -1);

    REQUIRE(romanos_para_decimal("O") == -1);

    REQUIRE(romanos_para_decimal("A") == -1);

    REQUIRE(romanos_para_decimal("VV") == -1);

    REQUIRE(romanos_para_decimal("Y") == -1);

    REQUIRE(romanos_para_decimal("LL") == -1);

    REQUIRE(romanos_para_decimal("DD") == -1);
}

