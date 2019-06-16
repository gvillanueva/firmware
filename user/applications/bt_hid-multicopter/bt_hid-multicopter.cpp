#include "application.h"

PRODUCT_ID(PLATFORM_ID);
PRODUCT_VERSION(3);

void deviceConnectedCallback(BLEStatus_t status, uint16_t handle) {
    switch (status) {
    case BLE_STATUS_OK:
        Serial.println("Device connected!");
        break;
    default: break;
    }
}

void deviceDisconnectedCallback(uint16_t handle) {
    Serial.println("Disconnected.");
}

void hidReportReceived() {

}

void setup()
{
    // Initialize Bluetooth Stack
    ble.init();

    ble.onConnectedCallback(deviceConnectedCallback);
    ble.onDisconnectedCallback(deviceDisconnectedCallback);

//    bt_hid.onHidReportReceived(hidReportReceived);
}

void loop()
{
    // Read inputs from Bluetooth HID Device

    // Send inputs to motors
}
