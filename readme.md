# 4x6_mx_split_test

_A short description of the keyboard/project_

-   Keyboard Maintainer: [Daniel Arpide](https://github.com/Daniel Arpide)
-   Hardware Supported: _The PCBs, controllers supported_
-   Hardware Availability: _Links to where you can find this hardware_

Make example for this keyboard (after setting up your build environment):

    make 4x6_mx_split_test:default

Flashing example for this keyboard:

    make 4x6_mx_split_test:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
