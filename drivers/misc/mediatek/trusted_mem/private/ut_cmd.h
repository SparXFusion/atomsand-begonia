/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef TMEM_UT_CMD_H
#define TMEM_UT_CMD_H

enum TMEM_DEVICE_UT_COMMAND {
	TMEM_MANUAL_CMD_RESERVE_START = 0,

	TMEM_DEVICE_COMMON_OPERATION_START = TMEM_MANUAL_CMD_RESERVE_START,
	TMEM_DEVICE_COMMON_OPERATION_SSMR_ALLOC = 0,
	TMEM_DEVICE_COMMON_OPERATION_SSMR_RELEASE = 1,
	TMEM_DEVICE_COMMON_OPERATION_SESSION_OPEN = 2,
	TMEM_DEVICE_COMMON_OPERATION_SESSION_CLOSE = 3,
	TMEM_DEVICE_COMMON_OPERATION_REGION_ON = 4,
	TMEM_DEVICE_COMMON_OPERATION_REGION_OFF = 5,
	TMEM_DEVICE_COMMON_OPERATION_CHUNK_ALLOC = 6,
	TMEM_DEVICE_COMMON_OPERATION_CHUNK_FREE = 7,
	TMEM_DEVICE_COMMON_OPERATION_ION_ALLOC_FREE = 8,
	TMEM_DEVICE_COMMON_OPERATION_RESERVED_2 = 9,
	TMEM_SECMEM_SVP_SSMR_ALLOC = TMEM_DEVICE_COMMON_OPERATION_START,
	TMEM_SECMEM_SVP_SSMR_RELEASE = 1,
	TMEM_SECMEM_SVP_SESSION_OPEN = 2,
	TMEM_SECMEM_SVP_SESSION_CLOSE = 3,
	TMEM_SECMEM_SVP_REGION_ON = 4,
	TMEM_SECMEM_SVP_REGION_OFF = 5,
	TMEM_SECMEM_SVP_CHUNK_ALLOC = 6,
	TMEM_SECMEM_SVP_CHUNK_FREE = 7,
	TMEM_SECMEM_SVP_ION_ALLOC_FREE = 8,
	TMEM_SECMEM_SVP_RESERVED_2 = 9,
	TMEM_PMEM_SSMR_ALLOC = 10,
	TMEM_PMEM_SSMR_RELEASE = 11,
	TMEM_PMEM_SESSION_OPEN = 12,
	TMEM_PMEM_SESSION_CLOSE = 13,
	TMEM_PMEM_REGION_ON = 14,
	TMEM_PMEM_REGION_OFF = 15,
	TMEM_PMEM_CHUNK_ALLOC = 16,
	TMEM_PMEM_CHUNK_FREE = 17,
	TMEM_PMEM_ION_ALLOC_FREE = 18,
	TMEM_PMEM_RESERVED_2 = 19,
	TMEM_WFD_SMEM_SSMR_ALLOC = 20,
	TMEM_WFD_SMEM_SSMR_RELEASE = 21,
	TMEM_WFD_SMEM_SESSION_OPEN = 22,
	TMEM_WFD_SMEM_SESSION_CLOSE = 23,
	TMEM_WFD_SMEM_REGION_ON = 24,
	TMEM_WFD_SMEM_REGION_OFF = 25,
	TMEM_WFD_SMEM_CHUNK_ALLOC = 26,
	TMEM_WFD_SMEM_CHUNK_FREE = 27,
	TMEM_WFD_SMEM_ION_ALLOC_FREE = 28,
	TMEM_WFD_SMEM_RESERVED_2 = 29,
	TMEM_HAPP_SSMR_ALLOC = 30,
	TMEM_HAPP_SSMR_RELEASE = 31,
	TMEM_HAPP_SESSION_OPEN = 32,
	TMEM_HAPP_SESSION_CLOSE = 33,
	TMEM_HAPP_REGION_ON = 34,
	TMEM_HAPP_REGION_OFF = 35,
	TMEM_HAPP_CHUNK_ALLOC = 36,
	TMEM_HAPP_CHUNK_FREE = 37,
	TMEM_HAPP_ION_ALLOC_FREE = 38,
	TMEM_HAPP_RESERVED_2 = 39,
	TMEM_HAPP_EXTRA_SSMR_ALLOC = 40,
	TMEM_HAPP_EXTRA_SSMR_RELEASE = 41,
	TMEM_HAPP_EXTRA_SESSION_OPEN = 42,
	TMEM_HAPP_EXTRA_SESSION_CLOSE = 43,
	TMEM_HAPP_EXTRA_REGION_ON = 44,
	TMEM_HAPP_EXTRA_REGION_OFF = 45,
	TMEM_HAPP_EXTRA_CHUNK_ALLOC = 46,
	TMEM_HAPP_EXTRA_CHUNK_FREE = 47,
	TMEM_HAPP_EXTRA_ION_ALLOC_FREE = 48,
	TMEM_HAPP_EXTRA_RESERVED_2 = 49,
	TMEM_SDSP_SSMR_ALLOC = 50,
	TMEM_SDSP_SSMR_RELEASE = 51,
	TMEM_SDSP_SESSION_OPEN = 52,
	TMEM_SDSP_SESSION_CLOSE = 53,
	TMEM_SDSP_REGION_ON = 54,
	TMEM_SDSP_REGION_OFF = 55,
	TMEM_SDSP_CHUNK_ALLOC = 56,
	TMEM_SDSP_CHUNK_FREE = 57,
	TMEM_SDSP_ION_ALLOC_FREE = 58,
	TMEM_SDSP_RESERVED_2 = 59,
	TMEM_SDSP_SHARED_SSMR_ALLOC = 60,
	TMEM_SDSP_SHARED_SSMR_RELEASE = 61,
	TMEM_SDSP_SHARED_SESSION_OPEN = 62,
	TMEM_SDSP_SHARED_SESSION_CLOSE = 63,
	TMEM_SDSP_SHARED_REGION_ON = 64,
	TMEM_SDSP_SHARED_REGION_OFF = 65,
	TMEM_SDSP_SHARED_CHUNK_ALLOC = 66,
	TMEM_SDSP_SHARED_CHUNK_FREE = 67,
	TMEM_SDSP_SHARED_ION_ALLOC_FREE = 68,
	TMEM_SDSP_SHARED_RESERVED_2 = 69,
	TMEM_SECMEM_FR_SSMR_ALLOC = 70,
	TMEM_SECMEM_FR_SSMR_RELEASE = 71,
	TMEM_SECMEM_FR_SESSION_OPEN = 72,
	TMEM_SECMEM_FR_SESSION_CLOSE = 73,
	TMEM_SECMEM_FR_REGION_ON = 74,
	TMEM_SECMEM_FR_REGION_OFF = 75,
	TMEM_SECMEM_FR_CHUNK_ALLOC = 76,
	TMEM_SECMEM_FR_CHUNK_FREE = 77,
	TMEM_SECMEM_FR_ION_ALLOC_FREE = 78,
	TMEM_SECMEM_FR_RESERVED_2 = 79,
	TMEM_DEVICE_COMMON_OPERATION_END = 80,

	TMEM_REGION_STATUS_DUMP = 81,
	TMEM_SECMEM_SVP_DUMP_INFO = 82,
	TMEM_SECMEM_FR_DUMP_INFO = 83,
	TMEM_SECMEM_WFD_DUMP_INFO = 84,
	TMEM_SECMEM_DYNAMIC_DEBUG_ENABLE = 85,
	TMEM_SECMEM_DYNAMIC_DEBUG_DISABLE = 86,
	TMEM_SECMEM_FORCE_HW_PROTECTION = 87,

	TMEM_MANUAL_CMD_RESERVE_END = 99,

	PMEM_UT_PROC_BASIC = 100,
	PMEM_UT_PROC_SIMPLE_ALLOC = 101,
	PMEM_UT_PROC_UNORDERED_SIZE = 102,
	PMEM_UT_PROC_ALIGNMENT = 103,
	PMEM_UT_PROC_SATURATION = 104,
	PMEM_UT_PROC_SATURATION_STRESS = 105,
	PMEM_UT_PROC_REGION_DEFER = 106,
	PMEM_UT_PROC_REGION_ONLINE_CNT = 107,
	PMEM_UT_PROC_REGION_STRESS = 108,
	PMEM_UT_PROC_ALLOC_MULTITHREAD = 109,
	PMEM_UT_PROC_ALL = 199,

	SECMEM_UT_PROC_BASIC = 300,
	SECMEM_UT_PROC_SIMPLE_ALLOC = 301,
	SECMEM_UT_PROC_UNORDERED_SIZE = 302,
	SECMEM_UT_PROC_ALIGNMENT = 303,
	SECMEM_UT_PROC_SATURATION = 304,
	SECMEM_UT_PROC_SATURATION_STRESS = 305,
	SECMEM_UT_PROC_REGION_DEFER = 306,
	SECMEM_UT_PROC_REGION_ONLINE_CNT = 307,
	SECMEM_UT_PROC_REGION_STRESS = 308,
	SECMEM_UT_PROC_ALLOC_MULTITHREAD = 309,
	SECMEM_UT_PROC_ALL = 399,

	FR_UT_PROC_CONFIG_PROT_REGION = 400,
	FR_UT_PROC_ALL = 499,

	WFD_SMEM_UT_PROC_BASIC = 500,
	WFD_SMEM_UT_PROC_SIMPLE_ALLOC = 501,
	WFD_SMEM_UT_PROC_UNORDERED_SIZE = 502,
	WFD_SMEM_UT_PROC_ALIGNMENT = 503,
	WFD_SMEM_UT_PROC_SATURATION = 504,
	WFD_SMEM_UT_PROC_SATURATION_STRESS = 505,
	WFD_SMEM_UT_PROC_REGION_DEFER = 506,
	WFD_SMEM_UT_PROC_REGION_ONLINE_CNT = 507,
	WFD_SMEM_UT_PROC_REGION_STRESS = 508,
	WFD_SMEM_UT_PROC_ALLOC_MULTITHREAD = 509,
	WFD_SMEM_UT_PROC_ALL = 599,

	TMEM_UT_CORE_MULTIPLE_SSMR_REGION_REQUEST = 800,
	TMEM_UT_CORE_DEVICE_VIRT_REGION_BASIC = 801,
	TMEM_UT_CORE_DEVICE_VIRT_REGION_SWITCH = 802,
	TMEM_UT_CORE_DEVICE_VIRT_REGION_ALLOC = 803,
	TMEM_UT_CORE_MULTIPLE_REGION_MULTIPLE_THREAD_ALLOC = 804,
	TMEM_UT_CORE_MTEE_MCHUNKS_MULTIPLE_THREAD_ALLOC = 805,

#ifdef TCORE_MEMORY_LEAK_DETECTION_SUPPORT
	TMEM_MEMORY_LEAK_DETECTION_CHECK = 900,
#endif
	TMEM_PROFILE_DUMP = 901,

	HAPP_UT_PROC_BASIC = 1000,
	HAPP_UT_PROC_SIMPLE_ALLOC = 1001,
	HAPP_UT_PROC_UNORDERED_SIZE = 1002,
	HAPP_UT_PROC_ALIGNMENT = 1003,
	HAPP_UT_PROC_SATURATION = 1004,
	HAPP_UT_PROC_SATURATION_STRESS = 1005,
	HAPP_UT_PROC_REGION_DEFER = 1006,
	HAPP_UT_PROC_REGION_ONLINE_CNT = 1007,
	HAPP_UT_PROC_REGION_STRESS = 1008,
	HAPP_UT_PROC_ALLOC_MULTITHREAD = 1009,
	HAPP_UT_PROC_ALL = 1099,

	HAPP_EXTRA_UT_PROC_BASIC = 1100,
	HAPP_EXTRA_UT_PROC_SIMPLE_ALLOC = 1101,
	HAPP_EXTRA_UT_PROC_UNORDERED_SIZE = 1102,
	HAPP_EXTRA_UT_PROC_ALIGNMENT = 1103,
	HAPP_EXTRA_UT_PROC_SATURATION = 1104,
	HAPP_EXTRA_UT_PROC_SATURATION_STRESS = 1105,
	HAPP_EXTRA_UT_PROC_REGION_DEFER = 1106,
	HAPP_EXTRA_UT_PROC_REGION_ONLINE_CNT = 1107,
	HAPP_EXTRA_UT_PROC_REGION_STRESS = 1108,
	HAPP_EXTRA_UT_PROC_ALLOC_MULTITHREAD = 1109,
	HAPP_EXTRA_UT_PROC_ALL = 1199,

	SDSP_UT_PROC_BASIC = 1200,
	SDSP_UT_PROC_SIMPLE_ALLOC = 1201,
	SDSP_UT_PROC_UNORDERED_SIZE = 1202,
	SDSP_UT_PROC_ALIGNMENT = 1203,
	SDSP_UT_PROC_SATURATION = 1204,
	SDSP_UT_PROC_SATURATION_STRESS = 1205,
	SDSP_UT_PROC_REGION_DEFER = 1206,
	SDSP_UT_PROC_REGION_ONLINE_CNT = 1207,
	SDSP_UT_PROC_REGION_STRESS = 1208,
	SDSP_UT_PROC_ALLOC_MULTITHREAD = 1209,
	SDSP_UT_PROC_ALL = 1299,

	SDSP_SHARED_UT_PROC_BASIC = 1300,
	SDSP_SHARED_UT_PROC_SIMPLE_ALLOC = 1301,
	SDSP_SHARED_UT_PROC_UNORDERED_SIZE = 1302,
	SDSP_SHARED_UT_PROC_ALIGNMENT = 1303,
	SDSP_SHARED_UT_PROC_SATURATION = 1304,
	SDSP_SHARED_UT_PROC_SATURATION_STRESS = 1305,
	SDSP_SHARED_UT_PROC_REGION_DEFER = 1306,
	SDSP_SHARED_UT_PROC_REGION_ONLINE_CNT = 1307,
	SDSP_SHARED_UT_PROC_REGION_STRESS = 1308,
	SDSP_SHARED_UT_PROC_ALLOC_MULTITHREAD = 1309,
	SDSP_SHARED_UT_PROC_ALL = 1399,

	TMEM_RUN_ALL_SUITES = 16888,
};

#endif /* end of TMEM_UT_CMD_H */
