# ESPHome Toshiba TU2C-Link AC Component
ESPHome component to integrate with Toshiba Heatpumps type ESTIA R32 via TU2C-Link protocol (AB line).

This code is based on muxa esphome-tcc-link: https://github.com/muxa/esphome-tcc-link

Requires reader & writer circuit for the AB line: https://github.com/issalig/toshiba_air_cond

## Install

```yaml
external_components:
  - source:
      type: git
      url: https://github.com/theeuwe/esphome-tu2c-link

```

## Usage

```yaml
uart:
  tx_pin: GPIO1
  rx_pin: GPIO3
  baud_rate: 2400
  parity: EVEN

climate:
  - platform: tu2c_link
    name: "Toshiba AC"
    id: toshiba_ac
    connected:
      name: "Toshiba AC Connected"
    failed_crcs:
      name: "Toshiba AC Failed CRCs"
    vent:
      name: "Toshiba AC Vent Switch"
```
