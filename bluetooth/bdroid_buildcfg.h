/*
 *
 *  Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *  Not a Contribution, Apache license notifications and license are retained
 *  for attribution purposes only.
 *
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H
#define BTA_DISABLE_DELAY 1000 /* in milliseconds */

#include <cutils/properties.h>

static inline const char* BtmGetDefaultName()
{
    int32_t rf_version = property_get_int32("ro.boot.rf_version", 0);

    switch (rf_version) {
    case 11:
    case 21:
    case 31:
        return "OnePlus 3";
    case 12:
    case 22:
    case 32:
        return "OnePlus 3T";
    }

    return "";
}

#define BTM_DEF_LOCAL_NAME BtmGetDefaultName()

// Wide-band speech support
#define BTM_WBS_INCLUDED TRUE
#define BTIF_HF_WBS_PREFERRED TRUE

// Google VSC spec support
#define BLE_VND_INCLUDED TRUE

// QCOM power management workaround
#define BT_CLEAN_TURN_ON_DISABLED TRUE

#endif
