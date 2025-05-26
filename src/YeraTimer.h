#pragma once
#include <Arduino.h>

class Timer {
  public:
      Timer(byte period); // structer
      void setPeriod(uint16_t period); // set, edit period
      void attachFunction(void (*function)); // attach function
      void enable();
      void disable();
      void tick();
  private:
      uint32_t _tmr; // timer variable
      uint16_t _period; // period variable
      boolean _enabledFlag = 0;
      void (*_function);
};
