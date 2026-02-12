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

#include <map>
#include <list>
#include <memory>
#include <string>
#include <variant>
#include <optional>

#include "../types.h"

namespace firewall {

struct AddressGroup {
    std::string description;
    std::list<std::shared_ptr<AddressGroup>> includes;
    std::list<std::variant<Ipv4Address,Ipv4AddressRange>> ipv4_addresses;
};

struct DomainGroup {
    std::string description;
    std::list<std::string> addresses;
};

struct DynamicGroup {};

struct InterfaceGroup {
    std::string description;
    std::list<std::shared_ptr<InterfaceGroup>> includes;
    std::list<std::string> interfaces;
};

struct Ipv6AddressGroup {
    std::string description;
    std::list<std::shared_ptr<Ipv6AddressGroup>> includes;
    std::list<std::variant<Ipv6Address, Ipv6AddressRange>> ipv6_addresses;
};

struct Ipv6NetworkGroup {
    std::string description;
    std::list<std::shared_ptr<Ipv6NetworkGroup>> includes;
    std::list<Ipv6Network> networks;
};

struct MacGroup {
    std::string description;
    std::list<std::shared_ptr<MacGroup>> includes;
    std::list<MacAddress> mac_addresses;
};

struct NetworkGroup {
    std::string description;
    std::list<std::shared_ptr<NetworkGroup>> includes;
    std::list<Ipv4Network> networks;
};

struct PortGroup {
    std::string description;
    std::list<std::shared_ptr<PortGroup>> includes;
    std::list<Port> ports;
};

struct RemoteGroup {
    std::string description;
    std::string url;
};

struct Group {
    std::optional<std::map<std::string, AddressGroup>> adress_groups;
    std::optional<std::map<std::string, DomainGroup>> domain_groups;
    std::optional<std::map<std::string, DynamicGroup>> dynamic_groups;
    std::optional<std::map<std::string, InterfaceGroup>> interface_groups;
    std::optional<std::map<std::string, Ipv6AddressGroup>> ipv6_adress_groups;
    std::optional<std::map<std::string, Ipv6NetworkGroup>> ipv6_network_groups;
    std::optional<std::map<std::string, MacGroup>> mac_groups;
    std::optional<std::map<std::string, NetworkGroup>> network_groups;
    std::optional<std::map<std::string, PortGroup>> port_groups;
    std::optional<std::map<std::string, RemoteGroup>> remote_groups;
};

} // namespace firewall
