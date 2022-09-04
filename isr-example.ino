//Creating a estrucure
struct Button {
  const uint8_t PIN;
  uint32_t numberKeyPresses;
  bool pressed;
};

// GPIO 18 instance
Button button1 = {18, 0, false};

//ISR routine
void IRAM_ATTR isr() {
  button1.numberKeyPresses++;
  button1.pressed = true;
}


void setup() {
  Serial.begin(115200);
  pinMode(button1.PIN, INPUT_PULLUP); //Config GPIO as pullup
  attachInterrupt(button1.PIN, isr, FALLING);
}

void loop() {
  if (button1.pressed) {
    Serial.printf("Button has been pressed %u times\n", button1.numberKeyPresses);
    button1.pressed = false;
  }
}
