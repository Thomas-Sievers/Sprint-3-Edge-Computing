//Librarys
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Display LCD config
#define col 16
#define lin 2
#define ende 0x27

LiquidCrystal_I2C lcd(ende, col, lin);

//Trophy icon
byte trofeu[8] = {
    B11111,
    B11111,
    B01110,
    B00100,
    B00100,
    B01110,
    B11111,
};

//Sensor Pins
const int motionSensorLeft = 13;
const int motionSensorRight = 12;
const int buzzer = 11;

//Keep track of goals 
int countingLeft = 0;
int countingRight = 0;

//Storage sensor's last state
int lastStateLeft = LOW;
int lastStateRight = LOW;

void setup() {
  //Pin configuration
  pinMode(motionSensorLeft, INPUT);
  pinMode(motionSensorRight, INPUT);
  pinMode(buzzer, OUTPUT);

  //Inicialize serial communication
  Serial.begin(9600);

  //Welcome message
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bem-Vindos ao");
  lcd.setCursor(0, 1);
  lcd.print("amistoso!");
  lcd.createChar(0, trofeu);
  lcd.setCursor(15, 1);
  lcd.write(byte(0));

  //Delay and clear the screen
  delay(3000);
  updateScoreBoard();
}

void loop() {
  //Read sensor state
  int currentStateLeft = digitalRead(motionSensorLeft);
  int currentStateRight = digitalRead(motionSensorRight);

  //Check if the sensor of blue team is off
  if(currentStateRight == HIGH && lastStateRight == LOW){
    countingRight += 1; //Add 1 to the couting blue
    lcd.clear();
    lcd.print("Gol do time Red!"); //Print this message in LCD
    tone(buzzer, 262, 250); //Actived the buzzer
    delay(1000);
    updateScoreBoard(); //Display the score board again
  }
    //Check if the sensor of blue team is off
    if(currentStateLeft == HIGH && lastStateLeft == LOW){
    countingLeft += 1; //Add 1 to the counting o blue
    lcd.clear();
    lcd.print("Gol do time Blue!"); //Print this message in LCD
    tone(buzzer, 262, 250);
    delay(1000);
    updateScoreBoard(); //Display the score board again
  }

  lastStateLeft = currentStateLeft;
  lastStateRight = currentStateRight;
}

//Function to uptade the score board
void updateScoreBoard() {
  //Display the names of the teams
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  Blue  x  Red");

  //Display the points of each team
  lcd.setCursor(5, 1);
  lcd.print(countingLeft);

  lcd.setCursor(8, 1);
  lcd.print("x");

  lcd.setCursor(11, 1);
  lcd.print(countingRight);
}
