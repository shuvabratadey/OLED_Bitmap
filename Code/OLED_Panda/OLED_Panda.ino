#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "images.h"

#define TIME_DELAY_MS 250

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup()
{
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }
}

void loop()
{
  for (int i = 0; i < BITMAP_ARRAY_LEN; i++)
  {
    display.clearDisplay();
    display.drawBitmap(0, 0, bitmap_panda[i], 128, 64, 1);
    display.display();

    delay(TIME_DELAY_MS);
  }
  for (int i = 0; i < BITMAP_ARRAY_LEN; i++)
  {
    display.clearDisplay();
    display.drawBitmap(0, 0, bitmap_panda[BITMAP_ARRAY_LEN - i - 1], 128, 64, 1);
    display.display();

    delay(TIME_DELAY_MS);
  }
}
