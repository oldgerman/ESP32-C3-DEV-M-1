## ESP32-C3-DevKitM-1

> 基于ESP32-C3的开发板，[ESP32-C3-DEVKITM-1](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html)的重制版，保持十分考究的布局，提供AD原始工程、Gerber、BOM

## PCB

| 使用ESP32-C3 MINI-1模组                                | 使用ESP32-C3 MINI-1U模组                                 |
| ------------------------------------------------------ | -------------------------------------------------------- |
| ![ESP32-C3_DEV-M-1(1)](Images/ESP32-C3_DEV-M-1(1).png) | ![ESP32-C3_DEV-M-1u(1)](Images/ESP32-C3_DEV-M-1u(1).png) |
| ![ESP32-C3_DEV-M-1(2)](Images/ESP32-C3_DEV-M-1(2).png) | ![ESP32-C3_DEV-M-1u(2)](Images/ESP32-C3_DEV-M-1u(2).png) |
| ![ESP32-C3_DEV-M-1(3)](Images/ESP32-C3_DEV-M-1(3).png) | ![ESP32-C3_DEV-M-1u(3)](Images/ESP32-C3_DEV-M-1u(3).png) |

## 工艺

- 板厚：1.0~1.6mm 均可
- 层数：2层
- 过孔：0.3/0.5mm
- 最小线宽线隙：5mil

## Type-C正反插

- 正插：使用CP2102的串口
- 反插：使用ESP32-C3FN4或ESP32-C3FH4片内集成的USB串口，可以不焊接CP2102相关的电路使用ESP32-C3自带的USB串口桥烧录或者调试

## 照片&亮机测试

模组焊接很难，对锡膏均匀度要求很高，不开钢网很难弄

Example文件夹内有最基本的wifi、GPIO、串口、RGB灯测试

![hardware](Example/Arduino/WiFiScan/Images/hardware.JPG)

## 烧录程序

乐鑫工具：[Flash Download Tools](https://www.espressif.com/en/support/download/other-tools)

Arduino环境：简单些，一键选择esp32-c3开发板，一键就行

ESP-IDF：待补充

## 按键boot和reset组合，尝试进入下载模式，但不打印 “waiting for download”，仍然一直打印invalid header: 0xffffffff？

使用全新的模组，首次焊接好通电，不论是esp32-c3自身串口，还是cp2102的串口，会一直打印invalid header: 0xffffffff，然后自己复位，如此反复，如果GPIO8是高电平，按键boot和reset组合进入下载模式却不打印 “waiting for download”，那么是正常现象，因为出厂是不带BOOT的，可以使用flash_download_tool连接开发板进入下载模式，只需要连接一次，烧录bootloader.bin在0x0地址，然后就可以按下boot键不放，按下松开一次reset键，进入下载模式就会打印 “waiting for download”，或者随便烧录一个arduino esp32-c3例程进去，也可以解决

![成功烧录wfiscan示例](Images/成功烧录wfiscan示例.png)

```
ESP-ROM:esp32c3-api1-20210207
Build:Feb  7 2021
rst:0x15 (USB_UART_CHIP_RESET),boot:0x4 (DOWNLOAD(USB/UART0/1))
Saved PC:0x400462e2
waiting for download   <----按键boot和reset组合，尝试进入下载模式OK，esp32-3本身片内的串口桥或者cp2102都可以
```

## 碎碎念

最近的准备用STM32测试[esp-hosted](https://github.com/espressif/esp-hosted)，ESP32-C3拥有[ESP-Hosted-FG]() SPI模式最高的吞吐量(TX/RX 17Mbps)，[ESP32-C3 MINI-1U]()模组又是这几款ESP32提供的模组中尺寸最小的，遂选型之，由于直接使用模组，那么就不用设计模组内的电路部分了，直接找乐鑫官网[ESP32-C3-DEVKITM-1](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html)开发板（都2202年了还是Micro-USB接口？）提供的原理图和PDF格式的PCB布局做参考，本以为[ESP32-C3-DEVKITM-1](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html)这块两层板挺好搞定，然而细看背面布局发现画板子的工程师追求连续的GND（UART总线或者USB差分对与其他信号线之间必有GND），给改Type-C增加了不少麻烦

## 参考资料

[ESP32-C3-DevKitM-1：快速入门](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html) 