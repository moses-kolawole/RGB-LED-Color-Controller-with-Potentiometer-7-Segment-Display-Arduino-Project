int redled = 11;
int greenled = 12;
int blueled = 13;
int pot_pin = A0;
int pot_reading = 0;
int delay_time = 250;
int total_outputpin = 12;
int display1 = 9;
int display2 = 10;
int last_digit;
int second_last_digit;
int color_switch;


int led_display[] = {2, 3, 4, 5, 6, 7, 8};

int zero[] = {1, 1, 1, 1, 1, 1, 0};
int one[] = {0, 1, 1, 0, 0, 0, 0};
int two[] = {1, 1, 0, 1, 1, 0, 1};
int three[] = {1, 1, 1, 1, 0, 0, 1};
int four[] = {0, 1, 1, 0, 0, 1, 1};
int five[] = {1, 0, 1, 1, 0, 1, 1};
int six[] = {1, 0, 1, 1, 1, 1, 1};
int seven[] = {1, 1, 1, 0, 0, 0, 0};
int eight[] = {1, 1, 1, 1, 1, 1, 1};
int nine[] = {1, 1, 1, 0, 0, 1, 1};


void displayled(int display, int number){
  digitalWrite(display, LOW);
  switch(number){
    case 0:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], zero[i]);
    }
    break;
  
  case 1:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], one[i]);
    }
    break;
  
  case 2:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], two[i]);
    }
    break;
  
  case 3:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], three[i]);
    }
    break;
  
  case 4:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], four[i]);
    }
    break;
  
  case 5:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], five[i]);
    }
    break;
  
  case 6:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], six[i]);
    }
    break;
  
  case 7:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], seven[i]);
    }
    break;
  
  case 8:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], eight[i]);
    }
    break;

  case 9:
    for(int i = 0; i < 7; i++){
      digitalWrite(led_display[i], nine[i]);
    }
    break;
 
}
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pot_pin, INPUT);
for(int i = 0; i < total_outputpin; i++){
  pinMode(i + 2, OUTPUT);
}

}

void loop() {
  // put your main code here, to run repeatedly:

pot_reading = analogRead(pot_pin);
color_switch = int((100. / 1023.) * pot_reading);

last_digit = (color_switch) % 10;
second_last_digit = ((color_switch) / 10)  % 10;


Serial.print(" The current color switch reading is: \t");
Serial.println(color_switch);

if (color_switch >= 0 && color_switch <= 20){
  digitalWrite(redled, LOW);
  digitalWrite(greenled, LOW);
  digitalWrite(blueled, LOW);
  displayled(display1, last_digit);
 displayled(display1, last_digit);
  delay(1);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(1);
  digitalWrite(display2,HIGH);
}
else if(color_switch >= 21 && color_switch <= 30){
   digitalWrite(redled, HIGH);
  digitalWrite(greenled, LOW);
  digitalWrite(blueled, LOW);
 displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}
else if(color_switch >= 31 && color_switch <= 40){
   digitalWrite(redled, LOW);
  digitalWrite(greenled, HIGH);
  digitalWrite(blueled, LOW);
 displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}
else if(color_switch >= 41 && color_switch <= 50){
   digitalWrite(redled, LOW);
  digitalWrite(greenled, LOW);
  digitalWrite(blueled, HIGH);
  displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}

else if(color_switch >= 51 && color_switch <= 60){
   digitalWrite(redled, LOW);
  digitalWrite(greenled, HIGH);
  digitalWrite(blueled, HIGH);
 displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}

else if(color_switch >= 61 && color_switch <= 70){
   digitalWrite(redled, HIGH);
  digitalWrite(greenled, HIGH);
  digitalWrite(blueled, LOW);
 displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}

else if(color_switch >= 71 && color_switch <= 80){
   digitalWrite(redled, HIGH);
  digitalWrite(greenled, LOW);
  digitalWrite(blueled, HIGH);
 displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}

else if(color_switch >= 81 && color_switch <= 100){
   digitalWrite(redled, HIGH);
  digitalWrite(greenled, HIGH);
  digitalWrite(blueled, HIGH);
  displayled(display1, last_digit);
  delay(5);
  digitalWrite(display1, HIGH);

  displayled(display2, second_last_digit);
  delay(5);
  digitalWrite(display2,HIGH);
}

//delay(delay_time);
}
