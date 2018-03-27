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
