# CustomLogics
Custom Logics For Astromechs
The original file for this was free from the internet, I do not take any form of ownership of it. The purpose of these lights are to provide an open-source alternative to the teeces which many droid builders may struggle to get hold of due to costs. This is a budget equvilent.

Equipment:
Arduino Uno - You can purchase an offical Uno however mine was an Uno from China which I beleive is slightly different. If you purchase the Chinese equvilant then go to this website and follow the instructions as you neeed to download a driver manually to get the Uno to work - http://acoptex.com/project/16/chinese-arduino-nhduino-uno-r3-or-digital-pwm-uno-r3-drivers-at-acoptexcom/#sthash.nFShALHK.dpbs - I got my Uno from Wish - https://www.wish.com/search/uno/product/58bd187ef281c76d97af2512?&source=search

DOT MATRIX DISLPAYS

I purchased these because originally I thought they were RGB ones, they weren't they were only red. Currently the displays are only set up to work with one colour displays however the code will be updated in future versions for better flashing LED's and support for different colours as well as RGB Displays.
https://www.wish.com/product/57c8576f77f5bb1f727cbcc2 - You will need TWO of these displays.

Rear Logic Display is essentially a 4-in-1 Array made up of x4 8x8 displays which can be found here - https://www.wish.com/search/matrix%20led%20display/product/5b0a315836409931170eb823?&source=search - You only need one of these.

Don't Forget The Jumper Cables!!!

Below is set up instructions, these are also in the code but some folk read these things as well.

ARDUINO     DISPLAY
5V          Pin 1 - VCC
GND         Pin 2 - GND
Pin 12      Pin 3 - DIN
Pin 11      Pin 5 - CLK
Pin 10      Pin 4 - CS

Not overly complicated right? Good! The whole point I wanted to make when doing this is it make it as easy as possible.

Test your first display, ensure it's uploaded to the board correct. If everything is all good to go, attach the second display, use the same coloured jumper cables if you can, if you don't have enough of the same colour, perhaps write them down as once to stick the displays in place it's troublesome to get them back out to check which pin is which and some bright spark only put the pin labels on the front side of some boards...

Rear Logic attaches the same way just ensure you have long enough cable that can be neatly stuck or taped to the insie of the dome. I found that attached a female-female jumper from the final front logic and then using a male-female jumper from the rear logic and connect the male of one cable to the female of the other cable together gave me plenty of length. Again if you can, use the same colour jumpers as it will make life a lot easier when troubleshooting and wiring up

Again I want to state that I will constantly be making changes to this code to make it better and include as many different displays as I can whilst keeping it free to use. I also would love any Arduino folk who enjoy tinkering to have a mess around and see if you can make the code better and share it back with me!

Any questions or troubles drop me a line!
Cheers,
Rob
