# Arduino 7 Segment Display Example

![setup](https://raw.githubusercontent.com/polypants/Arduino-7-Segment-Display-Example/master/setup.png)

## The 7 Segment Display Arduino Library

https://github.com/dgduncan/SevenSegment

## Basic Code Example

To import the .ZIP file into the Arduino Editor, go to 'Sketch' >>> 'Include Library' >>> 'Add .ZIP To Library...'

Then, go to 'Sketch' >>> 'Include Library' and find 'Seven Segment Library' in the list.

```
#include <SegmentDisplay.h>

// setup which digital ports to use
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);

void setup() {
  // segmentDisplay.displayHex(8, false);
  // can display a single number from 0 to 15

  // displays all the numbers from 0 to 15 
  segmentDisplay.testDisplay();
}

void loop() {

}
```

The above code will display the hex value of all the numbers from 0 to 15.