/**
* bridge API generated from bridge.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* BridgeApi.h
*
*/

#pragma once

#define POLYCUBE_SERVICE_NAME "bridge"


#include "polycube/services/response.h"
#include "polycube/services/shared_lib_elements.h"

#include "BridgeJsonObject.h"
#include "FdbJsonObject.h"
#include "FdbEntryJsonObject.h"
#include "PortsJsonObject.h"
#include "PortsAccessJsonObject.h"
#include "PortsStpJsonObject.h"
#include "PortsTrunkJsonObject.h"
#include "PortsTrunkAllowedJsonObject.h"
#include "StpJsonObject.h"
#include <vector>


#ifdef __cplusplus
extern "C" {
#endif

Response create_bridge_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_fdb_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_fdb_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_fdb_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_fdb_flush_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response create_bridge_ports_access_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_trunk_allowed_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_trunk_allowed_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_ports_trunk_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_bridge_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response delete_bridge_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_fdb_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_fdb_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_fdb_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_access_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_trunk_allowed_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_trunk_allowed_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_ports_trunk_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_bridge_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_aging_time_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_entry_age_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_entry_port_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_fdb_entry_type_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_access_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_access_vlanid_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_mode_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_stp_path_cost_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_stp_port_priority_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_stp_state_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_trunk_allowed_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_trunk_allowed_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_trunk_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_trunk_native_vlan_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_ports_trunk_native_vlan_enabled_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_enabled_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_forward_delay_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_hello_time_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_max_message_age_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_bridge_stp_priority_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response replace_bridge_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_fdb_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_fdb_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_fdb_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_access_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_trunk_allowed_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_trunk_allowed_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_ports_trunk_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_bridge_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_fdb_aging_time_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_fdb_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_fdb_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_fdb_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_fdb_entry_port_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_access_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_access_vlanid_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_mode_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_stp_path_cost_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_stp_port_priority_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_trunk_allowed_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_trunk_allowed_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_trunk_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_trunk_native_vlan_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_ports_trunk_native_vlan_enabled_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_enabled_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_forward_delay_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_hello_time_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_max_message_age_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_bridge_stp_priority_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

Response bridge_fdb_entry_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response bridge_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response bridge_ports_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response bridge_ports_stp_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response bridge_ports_trunk_allowed_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response bridge_stp_list_by_id_help(const char *name, const Key *keys, size_t num_keys);


#ifdef __cplusplus
}
#endif

