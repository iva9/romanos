Copyright[2023] <Ivanov M. Santos>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() (only cpp)
#include "../catch.hpp"
#include "../romanos.hpp"


TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);

    REQUIRE(romanos_para_decimal("V") == 5);
}




TEST_CASE("Numeros romanos - algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);

    REQUIRE(romanos_para_decimal("i") == -1);
}

