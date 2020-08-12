# Remote-Control-Room-Measuring-Robot
## This program lets you measure any room using the TI-RSLK
Link to project page: https://www.hackster.io/saaketporay/remote-control-room-measuring-robot-bffdfc

## 1. Follow this guide to make a remote controlled TI-RSLK
https://www.hackster.io/saaketporay/how-to-control-the-ti-rslk-using-a-remote-controller-f64be1

## 2. Connect pin 5 (P4.1) to ch 5 on your receiver
Follow the previous guide to see how the Launchpad is connected to the receiver

## 3. Connect the ultrasonic sensor as shown
<img src='https://hackster.imgix.net/uploads/attachments/1173013/20200811_180923_kYrTY1nk8d.jpg?auto=compress%2Cformat&w=740&h=555&fit=max' title='Header' width='' alt='Header' />
TRIG pin connects to pin 10 (P6.4)
ECHO pin connects to pin 9 (P6.5)

## 4. Your robot should now look like this
<img src='https://hackster.imgix.net/uploads/attachments/1173025/20200811_182241_s8LN15xGBg.jpg?auto=compress%2Cformat&w=740&h=555&fit=max' title='Header' width='' alt='Header' />
<img src='https://hackster.imgix.net/uploads/attachments/1173026/20200811_182220_NAFowz3lCW.jpg?auto=compress%2Cformat&w=740&h=555&fit=max' title='Header' width='' alt='Header' />

Data is sent via USB to a computer. Raspberry Pi could be used for a fully wireless robot. However in this demo- I opted for a wired connection to my laptop.

## 5. Demo
https://youtu.be/ZLPSeT_Ow_8
