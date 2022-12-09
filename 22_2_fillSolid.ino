int buttonPin=2;
int buttonState=0;

const int TrigPin = 11;
const int EchoPin = 10;
float cm;

#include <Servo.h>//引用舵机的库
Servo myservo1;  // 声明舵机名称
Servo myservo2;
int pos = 0;

#include "FastLED.h"            // 此示例程序需要使用FastLED库

#define NUM_LEDS 60             // LED灯珠数量
#define LED_DT 9                // Arduino输出控制信号引脚
#define LED_TYPE WS2812         // LED灯带型号
#define COLOR_ORDER GRB         // RGB灯珠中红色、绿色、蓝色LED的排列顺序

uint8_t max_bright = 30;       // LED亮度控制变量，可使用数值为 0 ～ 255， 数值越大则光带亮度越高

CRGB leds[NUM_LEDS];     // 建立光带leds

void setup() { 
  Serial.begin(9600);           // 启动串行通讯
  delay(100);                  // 稳定性等待

  pinMode(buttonPin,INPUT);
  pinMode(LED_DT,OUTPUT);
  
  LEDS.addLeds<LED_TYPE, LED_DT, COLOR_ORDER>(leds, NUM_LEDS);  // 初始化光带
  
  FastLED.setBrightness(max_bright);                            // 设置光带亮度

  Serial.begin(9600);
  myservo1.attach(4);
  myservo2.attach(5);
  
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop () {  

  buttonState=digitalRead(buttonPin);

if(buttonState!=HIGH){

// fill_solid section 全部点亮/熄灭
 fill_solid(leds, 60, CRGB::Gold); 
 FastLED.show();   
 delay(500);

 fill_solid(leds, 60, CRGB::Blue);   
 FastLED.show(); 
 delay(500);
 
 fill_solid(leds, 60, CRGB::OrangeRed);   
 FastLED.show(); 
 delay(500);
 
 fill_solid(leds, 60, CRGB::YellowGreen);   
 FastLED.show(); 
 delay(500);

 fill_solid(leds, 60, CRGB::SeaGreen);   
 FastLED.show(); 
 delay(500);

 
               
} else {
 
 fill_solid(leds, 60, CRGB::Black);   
 FastLED.show(); 
 //delay(50);
}
digitalWrite(TrigPin, LOW); //低高低电平发一个短时间脉冲去TrigPin
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  cm = pulseIn(EchoPin, HIGH) / 58; //将回波时间换算成cm
  cm = (int(cm * 100)) / 100; //保留两位小数



  if (cm < 10) {

    if (pos < 90) {
      for (pos = 0; pos < 90; pos += 1) // 从0度到180度运动
      { // 每次步进一度
        myservo1.write(pos); // 指定舵机转向的角度
        myservo2.write(pos);
        delay(15);                       // 等待15ms让舵机到达指定位置
      }
    } else if (pos == 90) {
      pos = 90;
    }

    delay(100);//延迟1000毫秒
  }
  else {

    if (pos > 0) {
      for (pos = 90; pos > 0; pos -= 1) // 从0度到180度运动 
      { // 每次步进一度
        myservo1.write(pos);        // 指定舵机转向的角度
        myservo2.write(pos);
        delay(15);                       // 等待15ms让舵机到达指定位置
      }
    } else if (pos == 0) {
      pos = 0;
    }
    delay(1000);
  }
}
/*
# FastLED库颜色名称 # 
如需获得更多FastLED库的使用方法和视频教程
请参见太极创客网站：WWW.TAICHI-MAKER.COM

CRGB::AliceBlue  
CRGB::Amethyst  
CRGB::AntiqueWhite  
CRGB::Aqua  
CRGB::Aquamarine  
CRGB::Azure 
CRGB::Beige 
CRGB::Bisque  
CRGB::Black 
CRGB::BlanchedAlmond  
CRGB::Blue  
CRGB::BlueViolet  
CRGB::Brown 
CRGB::BurlyWood 
CRGB::CadetBlue 
CRGB::Chartreuse  
CRGB::Chocolate 
CRGB::Coral 
CRGB::CornflowerBlue  
CRGB::Cornsilk  
CRGB::Crimson 
CRGB::Cyan  
CRGB::DarkBlue  
CRGB::DarkCyan  
CRGB::DarkGoldenrod 
CRGB::DarkGray  
CRGB::DarkGreen 
CRGB::DarkKhaki 
CRGB::DarkMagenta 
CRGB::DarkOliveGreen  
CRGB::DarkOrange  
CRGB::DarkOrchid  
CRGB::DarkRed 
CRGB::DarkSalmon  
CRGB::DarkSeaGreen  
CRGB::DarkSlateBlue 
CRGB::DarkSlateGray 
CRGB::DarkTurquoise 
CRGB::DarkViolet  
CRGB::DeepPink  
CRGB::DeepSkyBlue 
CRGB::DimGray 
CRGB::DodgerBlue  
CRGB::FireBrick 
CRGB::FloralWhite 
CRGB::ForestGreen 
CRGB::Fuchsia 
CRGB::Gainsboro 
CRGB::GhostWhite  
CRGB::Gold  
CRGB::Goldenrod 
CRGB::Gray  
CRGB::Green 
CRGB::GreenYellow 
CRGB::Honeydew  
CRGB::HotPink 
CRGB::IndianRed 
CRGB::Indigo  
CRGB::Ivory 
CRGB::Khaki 
CRGB::Lavender  
CRGB::LavenderBlush 
CRGB::LawnGreen 
CRGB::LemonChiffon  
CRGB::LightBlue 
CRGB::LightCoral  
CRGB::LightCyan 
CRGB::LightGoldenrodYellow  
CRGB::LightGreen  
CRGB::LightGrey 
CRGB::LightPink 
CRGB::LightSalmon 
CRGB::LightSeaGreen 
CRGB::LightSkyBlue  
CRGB::LightSlateGray  
CRGB::LightSteelBlue  
CRGB::LightYellow 
CRGB::Lime  
CRGB::LimeGreen 
CRGB::Linen 
CRGB::Magenta 
CRGB::Maroon  
CRGB::MediumAquamarine  
CRGB::MediumBlue  
CRGB::MediumOrchid  
CRGB::MediumPurple  
CRGB::MediumSeaGreen  
CRGB::MediumSlateBlue 
CRGB::MediumSpringGreen 
CRGB::MediumTurquoise 
CRGB::MediumVioletRed 
CRGB::MidnightBlue  
CRGB::MintCream 
CRGB::MistyRose 
CRGB::Moccasin  
CRGB::NavajoWhite 
CRGB::Navy  
CRGB::OldLace 
CRGB::Olive 
CRGB::OliveDrab 
CRGB::Orange  
CRGB::OrangeRed 
CRGB::Orchid  
CRGB::PaleGoldenrod 
CRGB::PaleGreen 
CRGB::PaleTurquoise 
CRGB::PaleVioletRed 
CRGB::PapayaWhip  
CRGB::PeachPuff 
CRGB::Peru  
CRGB::Pink  
CRGB::Plaid 
CRGB::Plum  
CRGB::PowderBlue  
CRGB::Purple  
CRGB::Red 
CRGB::RosyBrown 
CRGB::RoyalBlue 
CRGB::SaddleBrown 
CRGB::Salmon  
CRGB::SandyBrown  
CRGB::SeaGreen  
CRGB::Seashell  
CRGB::Sienna  
CRGB::Silver  
CRGB::SkyBlue 
CRGB::SlateBlue 
CRGB::SlateGray 
CRGB::Snow  
CRGB::SpringGreen 
CRGB::SteelBlue 
CRGB::Tan 
CRGB::Teal  
CRGB::Thistle 
CRGB::Tomato  
CRGB::Turquoise 
CRGB::Violet  
CRGB::Wheat 
CRGB::White 
CRGB::WhiteSmoke  
CRGB::Yellow  
CRGB::YellowGreen 

*/
