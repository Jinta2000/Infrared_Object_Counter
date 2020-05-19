// included the library Crystal library to control LCD display using Arduino
#include <LiquidCrystal.h>
// declare a variable for storing the count of people and initialize it as zero
int count =0;
// initializing the pins of Arduino to which LCD is connected
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // setup the no. of rows and columns of LCD
  lcd.begin(16, 2);
  // initializing the pin to which the PIR sensor is connected as input 
  pinMode(8, INPUT);
 
}

void loop() 
{
  if (digitalRead (8)==1)
  {
    // clear the LCD display
    lcd.clear();
    // print "People Entered" on first row of LCD display
    lcd.print("People entered");
    // to change the cursor from first row to second row
    lcd.setCursor(0,1);
    // since the sensor marked HIGH increase the count by one
    count +=1;
    // print the value on variable count on second row
    lcd.print(count);
    // delay to give time to the people to pass through the entry
    delay (3000);
    
  }
}
 
