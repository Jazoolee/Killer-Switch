<!-- ABOUT THE PROJECT -->
 Killer Switch
 =================

<p align="left">
  <img alt="Top View" src="Images/final_view.jpg" width="45%">
</p>

Table of contents
=================

<!--ts-->
   * [Abstract](##Abstract)
   * [Introduction](#Introduction)
   * [Code](#Code)
   * [Schematic & PCB](#Schematic-&-PCB)
   * [Enclosure](#Enclosure)
   * [Contributors](#Contributors)
<!--te-->

## Abstract
This project was undertaken as part of the EN1190 Module Engineering Design Project". The objective of this module was to introduce us to the engineering design experience and give us a hands on project experience.

* This is a micro-controller based project focusing on power saving and automation.  
* The components were carefully selected according to our needs, sourced locally and hand soldered.
* The PCB was designed in Altium Designer.
* The enclosure was designed in Solid Works.

## Introduction 

<p align="left">
  <img alt="architecture" src="Images/product_arch.png" width="45%">
</p>

* Our goal was to find a simple solution to energy wastage. One of the problem we observed was that, people regularly forgetting to turn off electrical appliances. So we made a system that will automate this process.
* Our transmitter module detects the presense and count of humans, in a room, using ultrasonic sensors, to wirelessly power on/off specific appliances such as lights, fans etc.
* Using the data from ultrasonic sensors the MCU sends a message to the reciever using a radio transicever (nRF24L01).
* Upon recieving the message, the MCU in the reciever uses that to control a multi channel relay.
* The relay can be bypassed using manual switches. so for the naked eye our system looks like a regular household switch while acting smart.

## Code

* Our code is completed written in C++ to work with common microcontrollers.
* It uses some special libraries to configure the ultra sonic sensors and to establish communication with the radio trancievers.

## Schematic & PCB
We have designed two different PCB's for the transmitter and the reciever. The schematic of the PCB was drawn initially by hand and then was transferred into a standard schematic accordingly using Altium. The PCB was made as small as much as possible to fit into commonly used placement brackets. This is a two layered PCB Design which utilizes power and ground copper pours for signal integrity. Standard footprints from reputed manufacturers were used to ensure quality.

<p align="center">
  <img alt="Schematic" src="Images/transmitter_schm.png" width="50%">
</p>

* Components were sourced locally and the pcb was printed abroad.

<p align="center">
  <img alt="transmitter_pcb" src="Images/transmitter_pcb.png" width="35%">
&nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="reciever_pcb" src="Images/reciever_pcb.png" width="25%">
</p>

* Since all the components were THC, they were carefully hand soldered.

<p align="center">
  <img alt="transmitter_soldered" src="Images/transmitter_soldered.jpg" width="25%">
&nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="reciever_soldered" src="Images/reciever_soldered.jpg" width="25%">
</p>

## Enclosure
* Enclosures were designed using Solid Works CAD software and 3D printed locally.
  
<p align="center">
  <img alt="prints.jpg" src="Images/prints.jpg" width="25%">
</p>

* Transmitter enclosure has two holes in each side to accommodate the ultrasonic sensors.
* Middle parts is made removable to change batteries.

<p align="center">
  <img alt="transmitter_enclosure.png" src="Images/transmitter_enclosure.png" width="25%">
</p>

* Reciever enclosure was made to fit into a regular switch cutout in the walls.

<p align="center">
  <img alt="reciever_enclosure.jpg" src="Images/reciever_enclosure.jpg" width="25%">
</p>
  
## Contributers

* Jazoolee Ahamed - [LinkedIn](https://www.linkedin.com/in/jazoolee-ahamed/)
* Abithan Asokumar - [LinkedIn](https://www.linkedin.com/in/abithan-asokumar-b6b132227/)
* Priyankan Vettivel - [LinkedIn](https://www.linkedin.com/in/priyankan-vettivel-262559212/)
* Thamirawaran Sathiyalogeswaran - [LinkedIn](https://www.linkedin.com/in/thamirawaran/)
