# เฉลย IoT Challenge 2019 ส่วนปี1

## ลง Library ของ AM2320 ให้เรียบร้อยก่อนใช้งาน 
## เลือกบอร์ด Arduino Mega2560
---
## SoftwareSerial 
|Tx(ขาส่ง)|Rx(ขารับ)|
|--|--|
|10|11|

## ตำแหน่ง pinout บนบอร์ด

| เซนเซอร์/อุปกรณ์ | ขาเซนเซอร์ | Mega |
| :--: | :--: | :--: |
| AM2320 | VCC | 5V or 3.3V |
| | GND | GND |
| | SDA (pull-up) | SDA |
| | SCL (pull-up) | SCL |
| MQ-7 | VCC | 5V |
| | GND | GND |
| | Ao | A0 |
| Liquid Level Sensor ตัวที่1 | VCC(สีน้ำตาล)  | 5-24V |
| | GND(สีน้ำเงิน)  | GND |
| | SIGNAL(สีเหลือง)  | D6 |
| Liquid Level Sensor ตัวที่2 | VCC(สีน้ำตาล)  | 5-24V |
| | GND(สีน้ำเงิน)  | GND |
| | SIGNAL(สีเหลือง)  | D7 |
| LED 3 ขา | ขากลาง  | GND |
| | ขาซ้าย  | D4 |
| | ขาซ้าย  | D5 |