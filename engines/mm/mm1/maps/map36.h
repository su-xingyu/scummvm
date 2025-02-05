/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MM1_MAPS_MAP36_H
#define MM1_MAPS_MAP36_H

#include "mm/mm1/maps/map.h"

namespace MM {
namespace MM1 {
namespace Maps {

class Map36 : public Map {
	typedef void (Map36:: *SpecialFn)();
private:
	void special00();
	void special01();
	void special02();
	void special03();
	void special04();
	void special05();
	void special06();
	void special07();
	void special11();
	void updateFlags();
	void brewComplete();

	const SpecialFn SPECIAL_FN[15] = {
		&Map36::special00,
		&Map36::special01,
		&Map36::special02,
		&Map36::special03,
		&Map36::special04,
		&Map36::special05,
		&Map36::special06,
		&Map36::special07,
		&Map36::special07,
		&Map36::special07,
		&Map36::special07,
		&Map36::special11,
		&Map36::special11,
		&Map36::special11,
		&Map36::special11
	};
public:
	Map36() : Map(36, "blackrs", 0x508, 3) {}

	/**
	 * Handles all special stuff that happens on the map
	 */
	void special() override;

	/**
	 * Accepts a quest from Inspectron
	 */
	void acceptQuest();

	/**
	 * Does a check for whether Inspectron's current quest
	 * is complete or not
	 */
	Common::String checkQuestComplete();
};

} // namespace Maps
} // namespace MM1
} // namespace MM

#endif
