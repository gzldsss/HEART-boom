# HEARTboom
## Background

In this world, there will always have 20-year-old people and their idols.
In psychology, there is a principle that can explain star chasing, called "projection effect" - it refers to the tendency of admirers to project certain dreams, desires and shortcomings of themselves onto their idols.
In fact, many of my friends have idols, me too. In China, Japan, Korea and even South Asia and Southeast Asia, idol culture is the most popular.
Idol culture first originated in Japan. Fans can get the opportunity to meet their idols by providing sales and traffic them.
Money connects fans and idols closely. When fans give money to idols, idols will also actively publish music or videos, which will create a dream for fans in the real world. The idol you like may be your ideal self, your ideal boyfriend and girlfriend.
But once you return to your real life, the dream is really just a dream.

## Concept

The idol has created a dream for you, and it is just a dream. I want to express this process that fans worship idols with this installation. 
This process is divided into touching, contacting, creating a dream, leaving, and the dream disappearing.

## Input and output
Input: Button, ultrasonic ranging sensor.
Output: WS2812 LED, servo.

# Weekly Log
## week 01

Start the week with a sketch. After thinking, the input I used is the button and the ultrasonic distance sensor, and the two outputs I used were the servo and the LED strip.
I want to use a button to control the LED strip, when I press the button, the light strip will light up, and when I do not press the button, the light strip will turn off. On the other side, I can control the rotation of the servo through the ultrasonic distance sensor.

Ultimately I plan to make a heart shaped box as shown in the picture.

I bought an LED light strip from Amazon. This light strip has 144 LED beads. When I received the express, I found that I didn't know how to light it. I found a tutorial on bilibili, the biggest video site in China.
According to the tutorial I downloaded the fast LED library as a try. In the course, I found that the LED light strip needs an external 5v power supply to drive it.
The next day I borrowed a power supply to power the light strip. I connected the power supply, arduino board and the light strip together, and connected the power supply and arduino to the same ground, and it took two hours to light up the light strip. 

## week 02

This week I started trying to connect circuits and write code, which was not an easy thing for me. The first is to use the button to control the work of the light strip. My first attempt was not ideal, because the light strip is always on when I don't press the button, and it will not light up when I press the button. This is different from my original. Imagine the opposite.
I tried several ways of connecting the button and the light strip together, all of which failed in the end. The button and light strip don't do what I want at all.
At this time, I want to thank my classmates. They saw that I was in a state of distress, and helped me patiently. They changed if(buttonState==HIGH) to if(buttonState!=HIGH), and changed the button and light The strips are connected in series, and my light strip can finally work normally. From this time on, I swore secretly that I will definitely come to CCI for self-study every day in the future. I love my classmates and teachers!
The other part of the code is to use the distance to control the movement of the two servos. When the distance is less than 10cm, the servo will rotate 90 degrees. I connected the two servos in parallel to make them rotate at the same time.
I connected the two inputs and outputs on a breadboard, tested and they all work! It makes me feel very fulfilled and makes me feel very happy.
Then I drew the circuit diagram for my circuit. After solving the problem of the circuit, I feel that the homework is two-thirds done, which makes me very satisfied. Finding difficulties and then solving them, although this process is very painful, it also makes people very happy. When I go home and lie on the bed, I will feel that every day is very fulfilling. I think this is probably the charm of learning. Let me The days are longer and the nights are shorter.

## week 03

This time the task is welding.
I'm not a very ambidextrous person, so it took me about two hours to solder all my wires to the board after everyone in the lab had left in the evening. This is much, much faster than I imagined, and the job is much easier than I imagined.
I often can't get the tin on top of my wire though, so it takes a lot of trying.
After I finished soldering, I found that my wires were very messy. But the classmates around me can be organized. I plugged it up with a sure-to-fail mentality, and it worked! This makes me so happy! It's just that some wires are not very securely connected, so sometimes the button can work normally and sometimes it can't, so I found a loose Dupont wire and reinforced it. And in the end I taped up the wires of each part
I have to say that soldering is really a fun job! It brings me 10,000 percent focus, and I'm really blissful when I put on my headphones and solder my homework. Also, the goggles are really cool, I think I might go and buy one.
Then I found out that my homework can only work when it is connected to the computer, but I obviously use an external power supply! Only then did I realize that the 5v of my arduino was not connected to the power supply, so I soldered another wire between the 5v and the positive pole of the board. After solving all the problems, it is time to start thinking about the shell.
At this time, I started to make the shell. I planned to laser cut it, but in order to preserve the handmade texture, I cut out my express box to make the shell. This is another challenge.
After an afternoon, my shell was cut out. I assembled the cardboard, put the arduino in, and great, they still work!
There was a feedback this week, I only brought my circuit to class, I didn’t prepare anything, I could only talk nonsense, but fortunately, the teacher and classmates could understand what I was talking about, fortunately.

## week 04

I need to color my homework and I'm going to glue the box to the arduino. Unfortunately I chose gouache paint instead of cardboard. The relationship between gouache paint and cardboard seems to be not very good, and I bought very few colors. The first time I painted it was really ugly, it was dark green. I also pasted purple cardboard on my hand, the effect is really not good Great, so I switched to a lighter color for a much better look.
Finally my homework is done! But I still have a lot of post-work to do, it's been a really busy week.

