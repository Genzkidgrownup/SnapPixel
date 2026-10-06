
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SW1 8
#define SW2 2
#define BZpos 10
#define BZneg 9
#define SCREEN_I2C_ADDR 0x3C // or 0x3D (depends on OLED)
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RST_PIN -1 // we dont have any reset pin on OLED (so -1 for SnapPixel)
Adafruit_SSD1306 display(128,64, &Wire,OLED_RST_PIN);


// a set of notes with frequencies i added for snappixell
#define NOTE_G4  329
#define NOTE_A4  369
#define NOTE_C5  415
#define NOTE_D5  415
#define NOTE_E5  369


#define FRAME_DELAY (30)// in which speed the animation will be played
#define FRAME_WIDTH (64)
#define FRAME_HEIGHT (64)
#define FRAME_COUNT (sizeof(frames1)/sizeof(frames1[0]))
// the animation frames
const byte PROGMEM frames1[][512] = {
//put your custom animation in bitmap-array here 
};

// 'averobitmap', 128x64px
// logo of Avero bitmap array 
const unsigned char epd_bitmap_averobitmap [] PROGMEM = {
	// put your custom bitmap imager array here
};
//function to play the notes 
void playNote(int frequency, int duration) {
  tone(BZpos, frequency, duration);
  delay(duration * 1.30); 
  noTone(BZpos);
}


// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1040)
const int epd_bitmap_allArray_LEN = 1;
const unsigned char *epd_bitmap_allArray1[1] = {
	epd_bitmap_averobitmap
};



//display.drawBitmap(0,0,epd_bitmap,128,64,SSD1306_WHITE);
// this is for setting points in Oled
void setup() {
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
  pinMode(BZpos, OUTPUT);
  pinMode(BZneg, OUTPUT);
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
 

  // Clearing display at boot so it starts from black screen
  display.clearDisplay();
  display.display();
}

void loop() {
  int Val1 = digitalRead(SW1);
  
  int Val2 = digitalRead(SW2);

  
  if (Val1 == LOW) {// when SW1 is pressed this block activates 
    
    // running the heart animation 
    for (int cycle = 0; cycle < 2; cycle++) {
      for (int i = 0; i < FRAME_COUNT; i++) {
        display.clearDisplay();
        display.drawBitmap(32, 0, frames1[i], FRAME_WIDTH, FRAME_HEIGHT, SSD1306_WHITE);
        display.display();
        delay(FRAME_DELAY);
      }
    }
    display.clearDisplay();
    // showing my custom Avero logo
    display.drawBitmap(0, 0, epd_bitmap_allArray1[0], 128, 64, SSD1306_WHITE);
    display.display();
    
    delay(2500); // for how much time my Avero logo stays 
    
    
    display.clearDisplay();
    display.display();
    
    
    delay(300); // giving a delay to micro controller to not glitvh out
  
    
  }
   if (Val2 == LOW) {// when SW2 is pressed , music notes are being played
    playNote(NOTE_E5, 300);
    playNote(NOTE_D5, 300);
    playNote(NOTE_C5, 300);
    playNote(NOTE_A4, 300);
    playNote(NOTE_G4, 400);
    delay(100);
    }
    
    delay(300); // normal delay for preventing glitching out 
  }


  
  



