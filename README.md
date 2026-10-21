# SnapPixel Keepsake box V1.0
**SnapPixel is developed by me(Ayush sen) for hack club (WEEK 1 HALF-Life program)**

**INOVATE-BUILD-ELEVATE-  
SnaPPixel where 8-bit Technology meets nostalgia🩷**

## Why I made this ???
>> Implementation OF AI and robotics has entered in every field 
>> SO why not we ?? gift something INOVATIVE to our loved ONES ??
>> Well we can now <INTRODUCING SnapPixel>


   
---


## PROJECT SHOWCASE
<img width="35%" height="890" alt="image" src="https://github.com/user-attachments/assets/54d5a3fb-7dd7-45fa-acf2-19318caf0a0e" /><img width="35%" height="888" alt="image" src="https://github.com/user-attachments/assets/43a65fe4-2698-43d5-8555-368dce0af1e8" />


## Physical or hardware specifications
**PCB OUTLINE** : Custom pixelated heart  with 55mm x 55mm outline  

**Mounting** : Has 4 M3 screws mounting holes for perfect placement  

**Microcontroller**: Arduino Nano V3 ( ATMEGA32P clone)  

**Display** : 0.96 inch OLED I2C (128 x 64 pixels)  

**AUDIO** : 5V passive Piezo Acoustic buzzer

**USER** : Dual push butttons and one SPDT slide switch 

## Wiring Diagram or schematic :
<img width="35%" height="605" alt="image" src="https://github.com/user-attachments/assets/3d73a13a-6c77-4313-bb1e-4786fa2102bd" /><img width="35%" height="503" alt="image" src="https://github.com/user-attachments/assets/da93e352-4854-454d-a779-1c6bf398b652" />



## HIGH-DENSITY LAYOUT 

**clearance** : Achieved flawless **DRC = 0** 

**ROUTING TRACES** : USED 0.6mm trace width for power lines and 0.254mm trace width for Data signals  


**SILK SCREEN**: Used my own brand "Avero" logo in the bottom silkscreen 

## COPPER TRACING & SILCK SCREEN preview:
<img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/760967e1-6d86-496a-ba99-b608541590ff" /><img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/b5f02da6-f438-48f2-8de5-0cdd3c73cae8" />





## Assembly Of 3D part
>I have given 2 types of editable file , if one does not open up , you can always open the other one( Both has the same content )
> 
**Main enclosure**:
>> FOR 3D model of Heart-shaped Pixelated one(the main theme)i will be using Standoff screws to mount 
>> The PCB into it 
>>I will attach TP4056 module in the type C port in the model(in base)
>>
>> and i will not attach the OLED in PCB , I will attach 4 wires which will be connected to OLED and
>>I will attach 2 buttons (which will also be not connected in the PCB , buts the  wires will)in the bottom lid
>> The oled will sit in top lid and the 4 wires will be connected to The PCB(OLED channel)
>>After that i will screw up the base and top lid

**OTHER ENCLOSURE\ Controller type**:
>> FOR 3D model of Controller type i will be using gluegun to mount 
>> The PCB into it 
>>THe oled will be attached with Standoff screws 
>>I will attach TP4056 module in the type C port in the model(in base)
>> The buttons will not be attached to the PCB (but the wires will be connected in PCB) , it will be in the model
>> And I will Screw up the upper lid with base .

**OTHER ENCLOSURE\ Deskbuddy**:
>> FOR 3D model of Desk buddy enclosure i will be using Standoff screws to mount 
>> The PCB into it 
>>I will attach TP4056 module in the type C port in the model(in base)
>>Attach 2 buttons (which will also be not connected in the PCB , buts its wire will)
>> The oled will be attached with standoff screws 
>>After that i will screw up the base and top lid

## 3D file designing from scratch:

**Total length**:compressed the shell into a 78mm x 30mm heart shaped pixelated body  
  
**Main attraction** : As its name is SnapPixel , i thought to cover it up with Pixels so yea i covered with many Pixels as possible over it   
  
**Colouring** : If possible by your printer or the CAD company , making the Pixels of red and the normal body with Black filament will instantly catch anyones eyes  
  

## 3D design preview :

<img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/42b274b2-0712-4472-9009-5bcbdcfdc3a8" /><img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/b85953f7-e7c8-46ab-8217-ab81e5c4d783" />



## FIRMWARE control Logic from scratch 

**Sketch Storage**: compressed huge 46 frames of heart animation + one bitmap image of "AVERO" and one full sound track consisting of 5 different sound notes into one sketch by using "PROGMEM" structures

**Button logic**: When pressed switch 1 , smooth transition happens from a full 2 cycle of heart animation and then into the bitmap array picture and , when pressed switch 2 , buzzer plays sweet notes ..

## IN VIRTUAL SIMULATION:

<img width="35%" height="617" alt="image" src="https://github.com/user-attachments/assets/83284621-b032-4884-805b-e476e7090535" /><img width="35%" height="617" alt="image" src="https://github.com/user-attachments/assets/5686d27d-b99b-41fa-bc61-84ab75093d46" />

<img width="35%" height="618" alt="image" src="https://github.com/user-attachments/assets/c8864a9e-bfa0-4ef9-82aa-26a3e74485b4" /><img width="35%" height="673" alt="image" src="https://github.com/user-attachments/assets/28de5a61-a9b5-403a-a382-20ae564c969d" />

>**SnapPixel is designed to be an intimate, interactive digital keepsake**
>
># USER GUIDE and INTERFACE FLOW:
>
>How Customers Load Their Custom Photos
>
>1.A customer picks any custom photo or logo they love and runs it through our simple web utility (like image2cpp), resizing it to a  128x64 pixel floyd-Steinberg bitmap-array and place it in the code.
>
>2.Upload Using a standard USB cable plugged directly into the onboard Arduino Nano breakout port, the customer flashes the generated byte array into the >device memory slot. The custom image is now locked into the system, ready to surprise anyone who opens the keepsake box!
>
>
> The Button : What Happens When Pressed?
>
>Once the slide power switch (PCB:SW3) is flipped ON, the device sits in a quiet, power-saving  Mode with a  black screen. The magic triggers the moment a >customer clicks any of the two Pushbuttons controls:
>
>Action 1: Pressing the Left Button (SW1) — The Animation
>
>The moment a user clicks SW1, the device instantly wakes up and executes a interactive visual animated show:
>
>• The Heartbeat Pulse: The 0.96" OLED screen glows up , playing a gorgeous double-cycle  animation of  8-bit pixel heart loop (cycling through all >46 frames twice ).
>
>• The Custom photo: The exact millisecond the heart finish pumping, the screen cuts smoothly to reveal the customer's uploaded custom photo / logo bitmap (or >their custom loaded photo). The custom image freezes brightly on screen for exactly 2.5 seconds(you can increase or decrease in the code LULL).
>
>• Fading screen: Once the timer expires, the screen automatically clears back to a  power-saving black resting state, waiting for the next interaction with my >snapPixel.
>
>Action 2: Pressing the Right Button (SW2) — The Sound system
>
>Clicking SW2 shifts the system into secondary Sound system, which lets:
>
>• A custom note: gets played once its done with a passive buzzer looping through several notes 

>Nowadays People gift very common things such as roses to their Partner or their loved ones nowadays and to that i have brought one Solution 
>that is *SnapPixel*.
>A custom heart shaped Keepsake box which provides 
>a custom animation the user wants and with a photo or memory they want to showcase in it
>
>User will have 2 buttons , When Switch 1 is pressed , a custom animation is shown with a custom photo of the users choice and when Switch 2 is pressed the buzzer >plays a beautiful note



<!-- Generated by Half Life from project cmuut9m5g0a9501smgkdbjmqi. Edits here are overwritten on the next sync. -->
<!-- Generated: 2026-10-11T15:58:26.546Z -->
## BOM

| Part | What it's for | Qty | Unit | Total | Vendor |
| --- | --- | --- | --- | --- | --- |
| [Arduino nano V3 clone](https://robu.in/product/arduino-nano-board-r3-with-ch340-chip-wo-usb-cable-solderedarduino-nano-r3-wo-usb-cable-soldered/) | main loop | 1 | $2.38 | $2.38 | [robu.in](https://robu.in/product/arduino-nano-board-r3-with-ch340-chip-wo-usb-cable-solderedarduino-nano-r3-wo-usb-cable-soldered/) |
| [0.96 inch OLED](https://robu.in/product/0-96-inch-i2c-iic-4pin-oled-display-module-blue-with-green-mark-module/?gad_source=1&gad_campaignid=17416544847&gbraid=0AAAAADvLFWfz8ZSpmQHY0itS-jF42i4s7&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUzqKCcatGDMwKniJaMTM7AmbIebSZ4JuS-2_nmmlcmsg-KHrGhmD2oaAl5NEALw_wcB) | for display | 1 | $2.06 | $2.06 | [robu.in](https://robu.in/product/0-96-inch-i2c-iic-4pin-oled-display-module-blue-with-green-mark-module/?gad_source=1&gad_campaignid=17416544847&gbraid=0AAAAADvLFWfz8ZSpmQHY0itS-jF42i4s7&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUzqKCcatGDMwKniJaMTM7AmbIebSZ4JuS-2_nmmlcmsg-KHrGhmD2oaAl5NEALw_wcB) |
| [12mm passive buzzer](https://robu.in/product/1-month-warranty-1248/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxGCAS71oB2BlUxwYYTC48iDfHeYkQsuDmmuFkoe_KtBrDu62iPU64aAiYgEALw_wcB) | for sound | 1 | $0.51 | $0.51 | [robu.in](https://robu.in/product/1-month-warranty-1248/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxGCAS71oB2BlUxwYYTC48iDfHeYkQsuDmmuFkoe_KtBrDu62iPU64aAiYgEALw_wcB) |
| [6x6x5mm through hole pushbuttons](https://robu.in/product/6x6x5-tactile-push-button-switch/) | For interaction | 2 | $0.10 | $0.20 | [robu.in](https://robu.in/product/6x6x5-tactile-push-button-switch/) |
| [SPDT slide switch](https://robu.in/product/4mm-spdt-1p2t-slide-switch-pack-of-10/) | for turning on the gadget | 10 | $0.03 | $0.30 | [robu.in](https://robu.in/product/4mm-spdt-1p2t-slide-switch-pack-of-10/) |
| [2 male header socket](https://robu.in/product/a2541wv-2p-9t-cjt-1x2-pin-2-54mm-180-single-row-pin-header-rohs/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxukViEsSy1VARl1gAnsSY3m9S66ySKI-ZFmbLOLr7Q33ru5GvVmQcaAi3KEALw_wcB) | for plugging in battery | 10 | $0.02 | $0.20 | [robu.in](https://robu.in/product/a2541wv-2p-9t-cjt-1x2-pin-2-54mm-180-single-row-pin-header-rohs/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxukViEsSy1VARl1gAnsSY3m9S66ySKI-ZFmbLOLr7Q33ru5GvVmQcaAi3KEALw_wcB) |
| [3.7V 500mah 1S battery](https://www.amazon.in/Electron-500Mah-HCY-602030-R-41202096-Rechargeable/dp/B0DNY3TXRW/ref=asc_df_B0DNY3TXRW?mcid=52ad75a106813f429a5a324bcc0c4329&tag=googleshopdes-21&linkCode=df0&hvadid=710055740841&hvpos=&hvnetw=g&hvrand=7721853369571497671&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9061840&hvtargid=pla-2484691285137&psc=1&hvocijid=7721853369571497671-B0DNY3TXRW-&hvexpln=0&gad_source=1) | its a battery | 2 | $3.20 | $6.40 | [amazon](https://www.amazon.in/Electron-500Mah-HCY-602030-R-41202096-Rechargeable/dp/B0DNY3TXRW/ref=asc_df_B0DNY3TXRW?mcid=52ad75a106813f429a5a324bcc0c4329&tag=googleshopdes-21&linkCode=df0&hvadid=710055740841&hvpos=&hvnetw=g&hvrand=7721853369571497671&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9061840&hvtargid=pla-2484691285137&psc=1&hvocijid=7721853369571497671-B0DNY3TXRW-&hvexpln=0&gad_source=1) |
| [TP4056 module](https://robu.in/product/tp4056-1a-li-ion-lithium-battery-charging-module-with-current-protection-type-c/) | for charging battery | 1 | $0.20 | $0.20 | [robu.in](https://robu.in/product/tp4056-1a-li-ion-lithium-battery-charging-module-with-current-protection-type-c/) |
| [2mm female holders](https://robu.in/product/2mm-pitch-female-berg-strip-40x1-2pcs/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxoKQc4Z83b6AfJsmGhTEEvEALxjl7FB4CuvGB2jcErwxyRumMOagkaAn4fEALw_wcB) | for PCB socket rails | 2 | $0.39 | $0.78 | [robu.in](https://robu.in/product/2mm-pitch-female-berg-strip-40x1-2pcs/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWcrMiEwynUW87yeH17Xv32ce&gclid=Cj0KCQjwuJLWBhD_ARIsAIBcRUxoKQc4Z83b6AfJsmGhTEEvEALxjl7FB4CuvGB2jcErwxyRumMOagkaAn4fEALw_wcB) |
| [PCB](https://www.lioncircuits.com/quote) | FOR my PCB | 1 | $11.53 | $11.53 | [lioncircuits.com](https://www.lioncircuits.com/quote) |
| **Parts subtotal** | — | — | — | **$24.56** | — |
| **Tax & shipping** | — | — | — | **$3.00** | — |
| **Total** | — | — | — | **$27.56** | — |









