#include <Bounce.h>

//buttons

void setup() {
  usb_init()
  if (usb_configured()) {}
  Keyboard.begin();
  
  Bounce B_DpadUp = Bounce(pin, 1);
  Bounce B_Dpaddown = Bounce(pin, 1);
  Bounce B_DpadLeft = Bounce(pin, 1);
  Bounce B_DpadRight = Bounce(pin, 1);
  
  Bounce B_Triangle = Bounce(pin, 1);
  Bounce B_X = Bounce(pin, 1);
  Bounce B_Circle = Bounce(pin, 1);
  Bounce B_Square = Bounce(pin, 1);
  
  Bounce B_R1 = Bounce(pin, 1);
  Bounce B_R2 = Bounce(pin, 1);
  Bounce B_L1 = Bounce(pin, 1);
  Bounce B_L2 = Bounce(pin, 1);
  
  Bounce B_start = Bounce(pin, 1);
  Bounce B_select = Bounce(pin, 1);
}





void loop() {

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
		Keyboard.press(KEY_UP);
    } else {
	Keyboard.release(KEY_UP);
	}
}


if(B_DpadDown.update()){
	if (B_DpadDown.fallingEdge()) {
    Keyboard.press(KEY_DOWN);
  } else {
	Keyboard.release(KEY_DOWN);
	}
}

if(B_DpadLeft.update()){
	if (B_DpadLeft.fallingEdge()) {
    Keyboard.press(KEY_LEFT);
  } else {
	Keyboard.release(KEY_LEFT);
	}
}

if(B_DpadRight.update()){
	if (B_DpadRight.fallingEdge()) {
    Keyboard.press(KEY_RIGHT);
  } else {
	Keyboard.release(KEY_RIGHT);
	}
}

if(B_Triangle.update()){
	if (B_Triangle.fallingEdge()) {
    Keyboard.press(KEY_);
  } else {
	Keyboard.release(KEY_);
	}
}

if(B_X.update()){
	if (B_X.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_Square.update()){
	if (B_Square.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_Circle.update()){
	if (B_Circle.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}

if(B_DpadUp.update()){
	if (B_DpadUp.fallingEdge()) {
    Keyboard.press(KEY_);
  }else {
	Keyboard.release(KEY_);
	}
}



}
