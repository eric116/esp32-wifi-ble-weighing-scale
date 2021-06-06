//
//  ble_lead.h
//  Weighing_Scale_Firmware
//
//  ESP32 firmware for Smart Weighing Scale
//
//  This module allows the use of BLE to change system settings.
//
//  Created by IoTReady Technology Solutions Pvt. Ltd., Bangalore
//  Copyright © 2019 IoTReady Technology Solutions Pvt. Ltd., Bangalore
//
// All rights reserved. Gaining access to this code without explicit 
// license or through reverse compilation constitutes violation of 
// protected intellectual property rights.
// 
// If you are interested in using this code or similar functionality
// for your product, please contact us at hello@iotready.co
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __BLE_SYSTEM_H__
#define __BLE_SYSTEM_H__ 1

#include "esp_gap_ble_api.h"
#include "esp_gatts_api.h"
#include "esp_bt_defs.h"
#include "esp_bt_main.h"
#include "esp_bt_main.h"
#include "esp_gatt_common_api.h"

// Services Array
#define NUM_SERVICES 2
#define DEVICE_STATE_SERVICE 0
#define SYSTEM_SETTINGS_SERVICE 1


esp_err_t disable_ble_lead();
esp_err_t enable_ble_lead();
esp_err_t set_adv_device_state();


#endif // __BLE_SYSTEM_H__
