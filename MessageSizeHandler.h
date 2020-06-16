/********************************************************************
*
*   VISTEON TECHNICAL & SERVICES CENTRE CONFIDENTIAL PROPRIETARY
*
*
*   FILENAME       - VehicleMessageIds.h
*
*
*********************************************************************
*   CHANGE HISTORY
*   -----------------------------------------------------------------
*   DATE           REVISION      AUTHOR             COMMENTS
*   -----------------------------------------------------------------
*   02/04/19           1.0        ------        Initial version
*********************************************************************
*  File Description
*  ---------------------
*  VehicleMessageIds
********************************************************************/

#ifndef _VEHICLE_MESSAGE_SIZE
#define _VEHICLE_MESSAGE_SIZE

#include <map>
#include "MessageIds.h"
#include "Constants.h"

typedef std::map<MESSAGE_IDS_V2H, int16_t> msgIdtoMsgsizeMap;
typedef std::map<SUB_FUNCTION, msgIdtoMsgsizeMap> subFunctionToMsgSizeMap;

msgIdtoMsgsizeMap writeMessageSizeMap{
	{MSG_V2H_EOL_F18C_VISTEON_SERIAL_NUMBER_WRITE, 8},
	{MSG_V2H_EOL_FD01_ETHERNET_MAC_ADDRESS_WRITE, 8},
	{MSG_V2H_EOL_FD07_VISTEON_END_ITEM_PART_NUMBER_WRITE, 16},
	{MSG_V2H_EOL_F187_OEM_PART_NUMBER_WRITE, 8},
	{MSG_V2H_EOL_F197_OEM_TRACEABILITY_NUMBER_WRITE, 8},
	{MSG_V2H_EOL_F191_VISTEON_HARDWARE_PART_NUMBER_WRITE, 16},
	{MSG_V2H_EOL_FD00_MANUFACTURE_DATE_WRITE, 4},
	{MSG_V2H_EOL_FD02_TEST_STATION_IDENTIFICATION_WRITE, 1},
	{MSG_V2H_EOL_FD04_PRODUCTION_USE_WRITE, 1},
	{MSG_V2H_EOL_FD06_OEM_SUPPLIER_CODE_WRITE,5},
};

subFunctionToMsgSizeMap IoControlMessageSizeMap{
	{IOCONTROL_SHORT_TERM_ADJ, {
			{MSG_V2H_EOL_FD22_ENABLE_DISABLE_BLUETOOTH , 2},
 			{MSG_V2H_EOL_FD26_ENABLE_DISABLE_WIRELESS , 2},
 			{MSG_V2H_EOL_FD36_PAIR_BLUETOOTH_DEVICE , 21},
 			{MSG_V2H_EOL_FD38_CONNECT_BLUETOOTH_DEVICE , 21},
			{MSG_V2H_EOL_FD3A_CONNECT_WI_FI , 41},
			{MSG_V2H_EOL_FD34_CONTROL_BLUETOOTH_PHONE , 2},
			{MSG_V2H_EOL_FD32_CONTROL_BLUETOOTH_MEDIA_PLAYER , 2},
			{MSG_V2H_EOL_FD24_ENABLE_DISABLE_ETHERNET , 2},
			{MSG_V2H_EOL_FD23_WLAN_TX_SETTINGS , 9},
			{MSG_V2H_EOL_FD3E_MIC_BT_LOOPBACK , 2},
			{MSG_V2H_EOL_FD7E_SET_BT_ECNR_OFF , 2},
			{MSG_V2H_EOL_FD30_BT_PROD_TEST_TX_BURST , 25},
			{MSG_V2H_EOL_FD42_BT_PROD_TEST_RX_BURST_CONFIG , 7},
			{MSG_V2H_EOL_FD44_BT_PROD_TEST_RX_BURST , 25},
			}
        },
    {IOCONTROL_RETURN_TO_ECU, {
        //None of the IOControl DIDs are supporting Return to ECU.
        }
    },
};

subFunctionToMsgSizeMap RoutineControlMessageSizeMap{
	{ROUTINE_START, {
			{MSG_V2H_EOL_FD40_PING_WIRELESS_NETWORK , 18},
			{MSG_V2H_EOL_FD3E_ETHERNET_PING , 18},
			{MSG_V2H_EOL_0580_ETHERNET_PHYSICAL_TESTMODE , 6},
			{MSG_V2H_EOL_FD43_WLAN_RX_MEASUREMENTS , 7},
			{MSG_V2H_EOL_FD62_BT_PROD_MODE_STATS , 5},
			}
        },
    {ROUTINE_STOP, {
			{MSG_V2H_EOL_FD40_PING_WIRELESS_NETWORK , 1},
			{MSG_V2H_EOL_FD3E_ETHERNET_PING , 1},
			{MSG_V2H_EOL_0580_ETHERNET_PHYSICAL_TESTMODE , 1},
			{MSG_V2H_EOL_FD43_WLAN_RX_MEASUREMENTS , 1},
			{MSG_V2H_EOL_FD62_BT_PROD_MODE_STATS , 1},
			}
        },
    {ROUTINE_RESULT, {
			{MSG_V2H_EOL_FD40_PING_WIRELESS_NETWORK , 1},
			{MSG_V2H_EOL_FD3E_ETHERNET_PING , 1},
			{MSG_V2H_EOL_0580_ETHERNET_PHYSICAL_TESTMODE , 1},
			{MSG_V2H_EOL_FD43_WLAN_RX_MEASUREMENTS , 1},
			{MSG_V2H_EOL_FD62_BT_PROD_MODE_STATS , 1},
			}
        },
};

#endif //_VEHICLE_MESSAGE_SIZE
