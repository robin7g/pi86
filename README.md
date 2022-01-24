# pi86

This is a fork of the original Raspberry Pi 8086 Hat project from homebrew8088 
https://github.com/homebrew8088/pi86

![alt text](/images/20211112_105224.jpg)

\
\
This is the code for my 8088/8086 (Really V20/V30) Raspberry Pi "hat"

https://www.homebrew8088.com/home/raspberry-pi-second-project

### How it works

The Raspberry PI toggles the Clock then reads the Control Bus and then provides the 8088 what it is requesting. It will read the ALE pin and save the address then provide the proper Memory or IO Read/Write.  

**Disadvantages:** The speed, the processor is only running at about 0.3 MHz the best I could calculate.  But on the flip side the drive read writes are very fast because the memory is virtual on raspberry pi.

Not all 8088/8086 Processors will work. The power is connected to the 3.3v pin on the PI. Most NEC V20/V30's will operate 3V - 7V so this is not problem.   

I have written a c library that helps with interfacing the 8088 PCB.  I have also begun to develop a GUI window that emulates CGA/VGA graphics. I tested this with a fresh install of Raspberry PI os and it ran just fine.

### Prerequisites 
To compile you need gcc some build tools, SDL2 and nasm
```
sudo apt-get install gcc build-essential libsdl2-dev nasm
```

### Build
```
cd src
make
```

### Run
The program has to be run as root in order for it to access the gpios.
For the **V30 CPU** 8086 run 
```
sudo ./pi86
```
For the **V20 CPU** 8088 run
```
sudo ./pi88
```



*** This is experimental use at your own risk. 

This current build runs very stable. I have left it running for seveal hours and came back and it was still running just fine. I encourage you to download the source code to the projects and give them a try and make modification. 
