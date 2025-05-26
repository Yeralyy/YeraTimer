#include <YeraTimer.h>

// implementation of methods
Timer::Timer(byte period) {
    _period = period;
    _enabledFlag = 1;
    _tmr = 0;
}

void::setPeriod(uint16_t period) {_period = period;}
void::attachFunction(void (*function)) {_function = function;} 
void::enable() {_enabledFlag = 1;}
void::disable() {_enabledFlag = 0;}
void::tick() {
    if (millis() - _tmr >= _period && _enabledFlag) {
        _tmr = millis();
        (*_function)();
    }
}

