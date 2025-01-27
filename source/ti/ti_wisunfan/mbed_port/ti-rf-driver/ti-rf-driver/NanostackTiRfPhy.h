/*
 * Copyright (c) 2018 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NANOSTACK_TI_PHY_H_
#define NANOSTACK_TI_PHY_H_

#include "stdint.h"

void NanostackTiRfPhy_get_mac_address(uint8_t *mac);
void NanostackTiRfPhy_set_mac_address(uint8_t *mac);
int8_t NanostackTiRfPhy_rf_register();
void NanostackTiRfPhy_rf_runregister();
void NanostackTiRfPhy_init();

#endif /* NANOSTACK_TI_PHY_H_ */
