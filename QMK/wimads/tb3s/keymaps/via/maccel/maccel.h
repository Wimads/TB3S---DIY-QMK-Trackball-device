// Copyright 2024 burkfers (@burkfers)
// Copyright 2024 Wimads (@wimads)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "action.h"
#include "report.h"

report_mouse_t pointing_device_task_maccel(report_mouse_t mouse_report);
bool           process_record_maccel(uint16_t keycode, keyrecord_t *record, uint16_t toggle, uint16_t takeoff, uint16_t growth_rate, uint16_t offset, uint16_t limit);

typedef struct _maccel_config_t {
    float growth_rate;
    float offset;
    float limit;
    float takeoff;
    bool  enabled;
} maccel_config_t;

extern maccel_config_t g_maccel_config;

void maccel_enabled(bool enable);
bool maccel_get_enabled(void);
void maccel_toggle_enabled(void);

float maccel_get_takeoff(void);
float maccel_get_growth_rate(void);
float maccel_get_offset(void);
float maccel_get_limit(void);
void  maccel_set_growth_rate(float val);
void  maccel_set_growth_rate(float val);
void  maccel_set_offset(float val);
void  maccel_set_limit(float val);

void keyboard_post_init_maccel(void);
