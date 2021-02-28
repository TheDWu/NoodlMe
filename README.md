# NoodlMe
Automated Ramen Machine for AngelHacks 2021

![Ramen Image](https://octodex.github.com/TheDWu/NoodlMe/images/20210228_133932.jpg)

## Inspiration
We're a group of college students who've had our fair share of bad experiences trying to grab a quick and cheap bite between classes. Cup ramen is a great choice but is prone to being messy and easy to spill while walking back to class or to a nearby table. We wondered if there was a way to re-seal the paper lid after adding hot water for easier transportation. Que the NoodlMe!

## What it does
The NoodlMe is an automated dispensing system designed for home and cafeterias alike. Unlike traditional ramen dispensers that require the user to peel back the lid and pour in hot water manually, our system uses a needle to puncture the paper lid and inject just the right amount of hot water. This leaves only a small hole at the top for steam venting and is much less prone to messy spills or worse, burns.

## How we built it
The main assembly is laser cut cardboard with a wooden base. There are a total of 2 servos which are used to push the ramen out of the dispenser and to actuate the needle that punctures the lid. There is also a relay for operating the water pump and a button for starting the ramen making process. These are all controlled by an Arduino UNO.

## Challenges we ran into
Cup pushing servo didn't mesh well with the cup ramen so it has to be assisted by hand on the prototype. Not having access to a working 3D printer made mounting the servos and assembly more difficult. The flex in the cardboard prevented the servo mechanism from working as planned so we had to hand assist some of the functions.

We couldn't implement a water heating element due to a lack of appropriate heating element and safety concerns. Instead water was pre-heated before being pumped into the cup ramen.

## Accomplishments that we're proud of
The laser cut carboard and overall build came out looking much nicer than anticipated, provided hot water the NoodlMe mostly works as an automated cup noodle dispenser.

## What we learned
David: I had my first experience programming an Arduino Uno and creating a website with HTML

Bernard: 3D printing and laser cutting experience!

## What's next for NoodlMe | Automated Ramen Dispenser
Adding a functional payment system through the website or a mobile app.

A system that can add various toppings and seasonings to the cup ramen.

A more rigid construction and redesigned actuating mechanism that are more reliable.
