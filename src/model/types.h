/**
 *  Copyright (C) 2026 Niklas Meyer
 * 
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <variant>

typedef uint8_t Ipv6Address[16];

struct Ipv6Network {
    Ipv6Address subnet;
    uint8_t subnet_mask;
};

struct Ipv6AddressRange {
    Ipv6Address first_address;
    Ipv6Address last_address;
};

typedef uint8_t Ipv4Address[4];

struct Ipv4Network {
    Ipv4Address subnet;
    uint8_t subnet_mask;
};

struct Ipv4AddressRange {
    Ipv4Address first_address;
    Ipv4Address last_address;
};

typedef uint8_t MacAddress[6];

struct PortRange {
    uint16_t first_port;
    uint16_t last_port;
};

typedef std::variant<std::string, uint16_t, PortRange> Port;
