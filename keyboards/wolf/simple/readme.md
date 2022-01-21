# Simple

The following is the QMK Firmware for the Simple PCB.

The PCB features:
* QMK & VIA compatibility

---

* Keyboard Maintainer: [ToastyStoemp](https://github.com/ToastyStoemp)

Make example for this keyboard (after setting up your build environment):

    make wolf/simple:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader Enter the bootloader in 3 ways: 
* **Bootmagic reset**: Hold down the key ESC key and plug in the keyboard (Top Left most switch)
* **Short reset pins**: Briefly short the 2 pins labled reset on the back of the PCB
* **Keycode in layout**: Press the B key on layer 1 which is mapped to `RESET`
