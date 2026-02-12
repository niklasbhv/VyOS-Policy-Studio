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

#include <nlohmann/json.hpp>
#include "group.h"

using json = nlohmann::ordered_json;

namespace firewall {

AddressGroup ParseAddressGroup(json& address_group_json) {};

DomainGroup ParseDomainGroup(json& domain_group_json) {};

DynamicGroup ParseDynamicGroup(json& dynamic_group_json) {};

InterfaceGroup ParseInterfaceGroup(json& interface_group_json) {};

Ipv6AddressGroup ParseIpv6AddressGroup(json& ipv6_address_group_json) {};

Ipv6NetworkGroup ParseIpv6NetworkGroup(json& ipv6_network_group_json) {};

MacGroup ParseMacGroup(json& mac_group_json) {};

NetworkGroup ParseNetworkGroup(json& network_group_json) {};

PortGroup ParsePortGroup(json& port_group_json) {};

RemoteGroup ParseRemoteGroup(json& remote_group_json) {};

Group ParseGroup(json& group_json) {};

json SerializeAddressGroup(AddressGroup& address_group) {};

json SerializeDomainGroup(DomainGroup& domain_group) {};

json SerializeDynamicGroup(DynamicGroup& dynamic_group) {};

json SerializeInterfaceGroup(InterfaceGroup& interface_group) {};

json SerializeIpv6AddressGroup(Ipv6AddressGroup& ipv6_address_group) {};

json SerializeIpv6NetworkGroup(Ipv6NetworkGroup& ipv6_network_group) {};

json SerializeMacGroup(MacGroup& mac_group) {};

json SerializeNetworkGroup(NetworkGroup& network_group) {};

json SerializePortGroup(PortGroup& port_group) {};

json SerializeRemoteGroup(RemoteGroup& remote_group) {};

json SerializeGroup(Group& group) {};

} // namespace firewall
