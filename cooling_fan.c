/*
  cooling_fan.c - cooling fan
  Part of Grbl

  Copyright (c) 2014 Dominik Meyer

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "settings.h"
#include "cooling_fan.h"

void cooling_fan_init()
{
  COOLING_FAN_DDR |= (1<<COOLING_FAN_BIT);
  cooling_fan_stop();
}

void cooling_fan_stop()
{
  COOLING_FAN_PORT &= ~(1<<COOLING_FAN_BIT);
}

void cooling_fan_run()
{
  COOLING_FAN_PORT |= 1<<COOLING_FAN_BIT;
}
