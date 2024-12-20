# TB3S
This is a small DIY trackball device, based around an elite-pi micro controller and a PMW3360 sensor, running on QMK firmware. 

TB3S = TrackBall 3 Switches (yeah, I ran out of creativity when I got to deciding the name :P )

![](https://github.com/Wimads/TB3S/blob/main/images/IMG_20231214_222658_6.jpg)

![](https://github.com/Wimads/TB3S/blob/main/images/IMG_20231214_222613_698.jpg)

![](https://github.com/Wimads/TB3S/blob/main/images/IMG_20231214_222504_925.jpg)

The design was intended to use in conjunction with my split QMK keyboard (keycapsss 3W6). I operate the ball with right hand, and use my left hand on keyboard for clicking. The design was kept as compact as possible, so it can be placed neatly next to my keyboard (I place it above the right hand side, to use with my fingers).
I did add 3 buttons to the device, so it is usable as a stand-alone trackball as well. However, the original choc version is not very ergonomical for that purpose, the switches sit too low relative to the ball to be comfortable. Hence I now also made an MX version, which puts the keycaps in a more comfortable position, higher relative to the ball. 

![](https://github.com/Wimads/TB3S/blob/main/images/PXL_20240108_225531608.jpg)

## BOM - Bill of Materials
You need the following parts for the build:
* 1x Elite-pi micro controller
* 1x Tindie PMW3360 pcb
* 34mm trackball (perixx sells them; you could also repurpose one from a logitech M575 or MX ergo).
* 3x 3mm ceramic balls (Zirconium Oxide or Silicon Nitride are the best options); aliexpress is your best bet.
* 3x switch (both an MX and a choc-v1 version available)
* 3x keycap - note that choc version is choc spaced (ie. 17x18mm keycaps); MX version is MX spaced (19x19mm keycaps).
* 2x heat set insert, M3x5x5mm
* 2x countersunk screws, M3x10mm
* Some wiring and solder
* Some cellrubber tape (epdm or neoprene) for anti slip.
* 3D printed housing - designed for MJF printing; FDM printing is possible, but top housing will require being smart about support settings.
  * For MX version use:
    * TB3S-MX_v1.0 - Housing Top.stl
    * TB3S-MX_v1.0 - Housing Bottom.stl
  * For choc-v1 version use:
    * TB3S_Housing Top_231214.stl
    * TB3S_Housing Bottom_231214.stl

![](https://github.com/Wimads/TB3S/blob/main/images/IMG_20231214_184359_805.jpg)


## 3D design
The .stl files are all you need if you want to build my design as is. But if you want to edit it to your own preferences, you're welcome to do so! (I'd love to see what you do with it if you decide on that). It was built in OnShape, here is a link to the file: 

https://cad.onshape.com/documents/4dc76c0b4d4b1410bbc67964/w/e2a4b3a2241815c20a369661/e/7d96c48f304fe2d16c76f0d2?renderMode=1&uiState=659f06fb2e15421497c812e7

![](https://github.com/Wimads/TB3S/blob/main/images/Screenshot%202024-01-10%20220355.png)

![](https://github.com/Wimads/TB3S/blob/main/images/Screenshot%202024-01-10%20215835.png)


## Firmware
The QMK firmware files included in this repository were based on Ploopy Madromys and Bastardkb Charybdis firmware; all credits for firmware development go to them, I merely cobbled together from both what I needed. Ploopy Madromys was used as a template for the hardware configuration (since its also based on rp2040 and pmw3360). Bastardkb Charybdis firmware was used to implement the same trackball funcitonalities (dragscroll, sniping, etc); so you can use all the same keycodes and configurations for trackball as in Charybdis.

This firmware also implements the [*maccel feature*](https://github.com/finrod09/qmk_userspace_features/tree/main/maccel), a QMK based configurable mouse acceleration feature, which makes the trackball a lot more pleasant to use, and makes a SNIPING mode unnecessary. If you want to use this feature, base your firmware off the `via` keymap folder. If you prefer to not use this feature, you can use the `Wimads` keymap folder as a template.

**Important notes on firmware:**
* This is not a beginner QMK project. If you're not familiar with QMK, you might want to read up on that before attempting to build this. Google is your friend. 
* The firmware files in this repository will NOT be maintained, since I am no developer, and not a company - this was merely a hobby project - I have included these files only as a starting point for your own work.
* As such, there will be NO support from my end. If you need help with QMK. Though there's plenty of channels for that (reddit, discord, whatever you fancy).
* You'll have to copy these files into your own QMK fork to get started (there is and will not be a PR to merge this into QMK mainline). Or you could fork my personal QMK_firmware branch, but no guarantees it is in working state on the moment you happen to fork it.
* The firmware files included in this repository were working on QMK mainline on 27 april 2024, but there is no guarantee it will remain functional after future QMK updates.


## Wiring
I'm too lazy to write down how I've wired it up here. You'll have to dig into the firmware files, or do your own homework.

![](https://github.com/Wimads/TB3S/blob/main/images/IMG_20231214_210434_575.jpg)
