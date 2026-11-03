# Pico84

Hand-wired 75% (84-key) keyboard driven by a Raspberry Pi Pico (RP2040).

* Rows (top to bottom): GP2–GP7
* Columns (left to right): GP8–GP22, GP26
* Diodes: COL2ROW

Build: `qmk compile -kb pico84 -km default`

## Getting into the bootloader

* **Bootmagic**: hold Esc while plugging in the keyboard
* **Keycode**: press Fn + Esc
* **Hardware**: hold BOOTSEL on the Pico while plugging in

The Pico then appears as the `RPI-RP2` drive; copy `pico84_default.uf2` onto it.
