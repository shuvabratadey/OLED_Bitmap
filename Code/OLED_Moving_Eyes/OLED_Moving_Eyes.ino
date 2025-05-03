// Tutorial Link: https://ctmprojectsblog.wordpress.com/2022/02/10/arduino-oled-eyes/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "images.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define TIME_DELAY 500

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  // Clear the buffer.
  display.clearDisplay();

}


void loop() {
  // Draw 21 EYES_SLEEP bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_SLEEParray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 23 EYES_TIRED bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_TIREDarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 05 EYES_CROSSED Eyes bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_CROSSEDarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 08 EYES_RIGHT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 08 EYES_LEFT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 03 EYES_NARROW bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_NARROWarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 18 EYES_GLARE bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_GLAREarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 19 EYES_MAD bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_MADarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 17 EYES_DISTRESSED bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_DISTRESSEDarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 16 EYES_CRY bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_CRYarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 20 EYES_GLASSES bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_GLASSESarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 05 EYES_CROSSED bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_CROSSEDarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 07 EYES_UP bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_UParray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 10 EYES_RIGHT_UP bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHT_UParray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 08 EYES_RIGHT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 09 EYES_RIGHT_DOWN bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_RIGHT_DOWNarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 06 EYES_DOWN bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_DOWNarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 12 EYES_LEFT_DOWN bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFT_DOWNarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 11 EYES_LEFT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 12 EYES_LEFT_UP bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_LEFT_UParray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 07 EYES_UP bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_UParray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 14 CONFUSSED_1 bitmap on the screen
  display.drawBitmap(0, 0, image_data_CONFUSSED_1array, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 15 CONFUSSED_2 bitmap on the screen
  display.drawBitmap(0, 0, image_data_CONFUSSED_2array, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 01 EYES_FRONT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_FRONTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 03 EYES_NARROW bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_NARROWarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 22 BLINK_UPPER bitmap on the screen
  display.drawBitmap(0, 0, image_data_BLINK_UPPERarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 24 EYES_NIGHT bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_NIGHTarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 25 UPPER_LIDS bitmap on the screen
  display.drawBitmap(0, 0, image_data_UPPER_LIDSarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 23 EYES_TIRED bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_TIREDarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 26 LOWER_LIDS bitmap on the screen
  display.drawBitmap(0, 0, image_data_LOWER_LIDSarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();

  // Draw 19 EYES_MAD bitmap on the screen
  display.drawBitmap(0, 0, image_data_EYES_MADarray, 128, 64, 1);
  display.display();

  delay(TIME_DELAY);

  // Clear the buffer.
  display.clearDisplay();
}
