#include <M5Unified.h>
#include <HTTPClient.h>
#include <WiFi.h>

// WIFI_SSID, WIFI_PASSWORD, TOGGL_TRACK_EMAIL, TOGGL_TRACK_PASSWORD
#include <secret.h>

void wait_wifi_connection();
void update_projects();


void setup() {
  M5.begin(M5.config());
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  M5.Display.setTextSize(2);
  M5.Display.print("connecting...\n");

  wait_wifi_connection();
  update_projects();

  M5.Display.print("connected!\n");
}

void loop() {
  // M5.update();
}


void wait_wifi_connection() {
  while (WiFi.status() != WL_CONNECTED) {
    M5.delay(100);
  }
}

void update_projects() {
  // wait_wifi_connection();
}
