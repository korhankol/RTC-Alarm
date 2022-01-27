#include <virtuabotixRTC.h>
int CLK=6;
int DAT=7;
int RST=8;
int buzzer=3;
virtuabotixRTC saat(CLK,DAT, RST);// nesne oluşturuldu

void setup() {

Serial.begin(9600);
pinMode(buzzer,OUTPUT);

// saat.setDS1302Time(00, 40, 22, 2, 25, 1, 2022);            // saniye dakika saat haftanın günü ayın günü ay yıl
// üst satırı sadece saati ayarlarken kullan. eğer ayarlıysa sadece alltaki gibi değer çek
}

void loop() {

saat.updateTime();
/*
Tüm istenecek değerlerin formülü
saat.dayofmonth
saat.month
saat.year
saat.hours
saat.minutes
saat.seconds
*/
if(saat.hours==22){

  if(saat.minutes==49){

digitalWrite(3,HIGH);
delay(100);

digitalWrite(3,LOW);
delay(100);
    
  }
}
}
