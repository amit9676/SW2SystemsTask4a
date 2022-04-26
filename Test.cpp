#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace coup;

Game gameMaker{};
Duke duke(gameMaker,"amit");
Assassin assassin{gameMaker, "asi"};
Ambassador ambassador{gameMaker, "amber"};
Captain captain{gameMaker, "america"};
Contessa contessa{gameMaker, "pnina"};

TEST_CASE("game on") {
    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(contessa.income());
    CHECK(duke.coins() == "1");
    CHECK(assassin.coins() == "1");
    CHECK(ambassador.coins() == "1");
    CHECK(captain.coins() == "1");
    CHECK(contessa.coins() == "1");
    CHECK_THROWS(assassin.income());
	CHECK_THROWS(ambassador.income());
	CHECK_THROWS(captain.income());
	CHECK_THROWS(contessa.income());
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK_THROWS(assassin.coup(contessa)); // not enough money
    assassin.foreign_aid();
    CHECK_NOTHROW(ambassador.transfer(duke,captain));
    CHECK(duke.coins() == "2");
    CHECK(captain.coins() == "2");
    CHECK_NOTHROW(captain.income());





}