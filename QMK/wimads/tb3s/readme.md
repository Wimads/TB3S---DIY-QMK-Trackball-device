## Firmware
The QMK firmware files included in this repository were based on Ploopy Madromys and Bastardkb Charybdis firmware; all credits for firmware development go to them, I merely cobbled together from both what I needed. Ploopy Madromys was used as a template for the hardware configuration (since its also based on rp2040 and pmw3360). Bastardkb Charybdis firmware was used to implement the same trackball funcitonalities (dragscroll, sniping, etc); so you can use all the same keycodes and configurations for trackball as in Charybdis.

This firmware also implements the [*maccel feature*](https://github.com/finrod09/qmk_userspace_features/tree/main/maccel), a QMK based configurable mouse acceleration feature, which makes the trackball a lot more pleasant to use, and makes a SNIPING mode unnecessary. If you want to use this feature, base your firmware off the `via` keymap folder. If you prefer to not use this feature, you can use the `Wimads` keymap folder as a template.

**Important notes on firmware:**
* This is not a beginner QMK project. If you're not familiar with QMK, you might want to read up on that before attempting to build this. Google is your friend. 
* The firmware files in this repository will NOT be maintained, since I am no developer, and not a company - this was merely a hobby project - I have included these files only as a starting point for your own work.
* As such, there will be NO support from my end. If you need help with QMK. Though there's plenty of channels for that (reddit, discord, whatever you fancy).
* You'll have to copy these files into your own QMK fork to get started (there is and will not be a PR to merge this into QMK mainline). Or you could fork my personal QMK_firmware branch, but no guarantees it is in working state on the moment you happen to fork it.
* The firmware files included in this repository were working on QMK mainline on 27 april 2024, but there is no guarantee it will remain functional after future QMK updates.
