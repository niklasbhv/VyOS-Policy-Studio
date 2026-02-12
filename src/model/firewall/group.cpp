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

AddressGroup ParseAddressGroup(json& address_group_json) {
    AddressGroup address_group;

    if (address_group_json.contains("description")) {
        address_group.description = address_group_json.at("description");
    }

    if (address_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (address_group_json.contains("address")) {
        // List of addresses and address ranges
    }

    return address_group;
};

DomainGroup ParseDomainGroup(json& domain_group_json) {
    DomainGroup domain_group;

    if (domain_group_json.contains("description")) {
        domain_group.description = domain_group_json.at("description");
    }

    if (domain_group_json.contains("address")) {
        // List of domain names
    }

    return domain_group;
};

DynamicGroup ParseDynamicGroup(json& dynamic_group_json) {
    DynamicGroup dynamic_group;

    return dynamic_group;
};

InterfaceGroup ParseInterfaceGroup(json& interface_group_json) {
    InterfaceGroup interface_group;

    if (interface_group_json.contains("description")) {
        interface_group.description = interface_group_json.at("description");
    }

    if (interface_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (interface_group_json.contains("interface")) {
        // List of interface names
    }

    return interface_group;
};

Ipv6AddressGroup ParseIpv6AddressGroup(json& ipv6_address_group_json) {
    Ipv6AddressGroup ipv6_address_group;

    if (ipv6_address_group_json.contains("description")) {
        ipv6_address_group.description = ipv6_address_group_json.at("description");
    }

    if (ipv6_address_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (ipv6_address_group_json.contains("address")) {
        // List of addresses and address ranges
    }

    return ipv6_address_group;
};

Ipv6NetworkGroup ParseIpv6NetworkGroup(json& ipv6_network_group_json) {
    Ipv6NetworkGroup ipv6_network_group;

    if (ipv6_network_group_json.contains("description")) {
        ipv6_network_group.description = ipv6_network_group_json.at("description");
    }

    if (ipv6_network_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (ipv6_network_group_json.contains("network")) {
        // List of networks
    }

    return ipv6_network_group;
};

MacGroup ParseMacGroup(json& mac_group_json) {
    MacGroup mac_group;

    if (mac_group_json.contains("description")) {
        mac_group.description = mac_group_json.at("description");
    }

    if (mac_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (mac_group_json.contains("mac-address")) {
        // List of MAC addresses
    }

    return mac_group;
};

NetworkGroup ParseNetworkGroup(json& network_group_json) {
    NetworkGroup network_group;

    if (network_group_json.contains("description")) {
        network_group.description = network_group_json.at("description");
    }

    if (network_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (network_group_json.contains("network")) {
        // List of networks
    }

    return network_group;
};

PortGroup ParsePortGroup(json& port_group_json) {
    PortGroup port_group;

    if (port_group_json.contains("description")) {
        port_group.description = port_group_json.at("description");
    }

    if (port_group_json.contains("include")) {
        // JSON reference
        // We have to look out for circular dependencies
    }

    if (port_group_json.contains("port")) {
        // List of ports
    }

    return port_group;
};

RemoteGroup ParseRemoteGroup(json& remote_group_json) {
    RemoteGroup remote_group;

    if (remote_group_json.contains("description")) {
        remote_group.description = remote_group_json.at("description");
    }

    if (remote_group_json.contains("url")) {
        // List if URLs
    }

    return remote_group;
};

Group ParseGroup(json& group_json) {
    Group group;

    if (group_json.contains("address-group")) {

    }

    if (group_json.contains("domain-group")) {

    }

    if (group_json.contains("dynamic-group")) {

    }

    if (group_json.contains("interface-group")) {

    }

    if (group_json.contains("ipv6-address-group")) {

    }

    if (group_json.contains("ipv6-network-group")) {

    }

    if (group_json.contains("mac-group")) {

    }

    if (group_json.contains("network-group")) {

    }

    if (group_json.contains("port-group")) {

    }

    if (group_json.contains("remote-group")) {

    }

    return group;
};

json SerializeAddressGroup(AddressGroup& address_group) {
    json address_group_json;



    return address_group_json;
};

json SerializeDomainGroup(DomainGroup& domain_group) {
    json domain_group_json;



    return domain_group_json;
};

json SerializeDynamicGroup(DynamicGroup& dynamic_group) {
    json dynamic_group_json;



    return dynamic_group_json;
};

json SerializeInterfaceGroup(InterfaceGroup& interface_group) {
    json interface_group_json;



    return interface_group_json;
};

json SerializeIpv6AddressGroup(Ipv6AddressGroup& ipv6_address_group) {
    json ipv6_address_group_json;



    return ipv6_address_group_json;
};

json SerializeIpv6NetworkGroup(Ipv6NetworkGroup& ipv6_network_group) {
    json ipv6_network_group_json;



    return ipv6_network_group_json;
};

json SerializeMacGroup(MacGroup& mac_group) {
    json mac_group_json;

    

    return mac_group_json;
};

json SerializeNetworkGroup(NetworkGroup& network_group) {
    json network_group_json;



    return network_group_json;
};

json SerializePortGroup(PortGroup& port_group) {
    json port_group_json;



    return port_group_json;
};

json SerializeRemoteGroup(RemoteGroup& remote_group) {
    json remote_group_json;



    return remote_group_json;
};

json SerializeGroup(Group& group) {
    json group_json;



    return group_json;
};

} // namespace firewall
