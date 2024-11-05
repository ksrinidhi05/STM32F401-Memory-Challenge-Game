# STM32F401-Memory-Challenge-Game
This project is a Memory Challenge Game built on the STM32F401 microcontroller using STM32CubeIDE. It combines hardware interfaces, GPIO manipulation, ADC readings, I2C communication, and interrupts to create an interactive and engaging game that challenges players to memorize and repeat an increasing sequence of LED flashes. The game integrates multiple components including an LCD, LEDs, buttons, buzzer, and potentiometer, and is designed to showcase embedded systems concepts and skills.



## Project Overview
The Memory Challenge Game randomly generates a sequence of LED flashes that the player must remember and input correctly. As each level progresses, the sequence becomes more challenging by adding an additional flash. The potentiometer allows for real-time control of game difficulty by adjusting the speed of the LED sequence, providing a customizable gaming experience. This project is ideal for learning microcontroller programming, especially with STM32, and covers a range of embedded systems techniques.



## Components and Peripherals Used
![image](https://github.com/user-attachments/assets/e77c2e93-6647-4ed6-8c30-0db01c4ea774)

STM32F401 Microcontroller

LEDs (3): Indicate the sequence players need to memorize.

Buttons (3): Allow players to input their sequence guesses.

Buzzer: Provides feedback for correct/incorrect sequences and game events.

Potentiometer: Adjusts game difficulty by changing the sequence speed or complexity.

LCD with I2C Module: Used to display the current game level and game status.
![image](https://github.com/user-attachments/assets/6e918e9a-61ce-43b6-b03c-2059ba426895)





## Pin Configuration and Connections
Potentiometer: Connected to PA0 for ADC reading, providing a variable voltage input that adjusts game difficulty based on player preference.
LCD (I2C): Connected to PB8 (SCL) and PB9 (SDA).
Buttons: Connected to GPIO pins PA1, PA2, and PA3, each with EXTI interrupt handling for accurate response to player inputs.
LEDs: Connected to GPIO pins PA5, PA6, and PA7, used to display the game sequence.
Buzzer: Connected to GPIO pin PA4, providing audio feedback for correct/incorrect responses and game events.

![image](https://github.com/user-attachments/assets/19f3492c-9f4b-4f95-9af1-57828daae3c3)




## Usage Instructions
Adjust Difficulty: Rotate the potentiometer to control game speed (lower resistance = faster sequence).
Start the Game: Watch the LEDs flash in a sequence. Memorize the pattern.
Input the Sequence: Using the buttons, repeat the sequence in the correct order.
Advance or End:
If you input the correct sequence, the game advances to the next level, and the sequence length increases.
If incorrect, the game displays "Game Over" on the LCD and resets.



## Technical Highlights
I2C Communication with LCD: Manages LCD messages with efficient I2C protocol, allowing real-time feedback.
Analog-to-Digital Conversion (ADC): Continuously reads from the potentiometer to control game speed, enhancing user control.
NVIC Interrupts: Ensures responsive button input handling through external interrupts, allowing the game to progress smoothly.
Randomized Sequence: Adds unpredictability, making the game challenging by generating a new pattern every round.

## Circuit diagram
![image](https://github.com/user-attachments/assets/dc6cdbcb-2e34-41bc-8c18-4b2fd3f477b0)

![image](https://github.com/user-attachments/assets/4b88c3f5-c5ed-49aa-95b6-9781d6ba9ac8)

![image](https://github.com/user-attachments/assets/32374861-5199-40b0-a8aa-7aa61c907f84)



