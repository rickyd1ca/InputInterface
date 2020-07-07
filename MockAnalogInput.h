/*
Copyright 2020 Eric Dyke

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef MockAnalogInput_h
#define MockAnalogInput_h
#include "inputinterface.h"

class MockAnalogInput : public InputInterface
{
public:
  virtual MockAnalogInput(){};
  virtual ~MockAnalogInput() {}
  virtual uint16_t read() {return lastValue;}
  virtual uint16_t getLastValue() {return lastValue;}
  void setValue(uint16_t value) {lastValue = value;}

private:
  uint16_t lastValue;
};

#endif


