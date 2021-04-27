int led = D2; // Blue
int led2 = D3; // Green
int led3 = D4; // Red

void setup()

{
   // Here's the pin configuration

   pinMode(led, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);

   Particle.function("led",ledToggle);

   digitalWrite(led, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
}
 

void loop()
{}

int ledToggle(String command) {

    if (command=="blue") {

        digitalWrite(led,HIGH);
        return 1;
    }
    else if (command=="green") {

        digitalWrite(led2,HIGH);
        return 1;
    }
    else if(command=="red"){
    
        digitalWrite(led3,HIGH);
        return 1;
    }
    else if(command=="blueOFF"){
        digitalWrite(led,LOW);
        return 1;
    }
    else if(command=="greenOFF"){
        digitalWrite(led2,LOW);
        return 1;
    }
    else if(command=="redOFF"){
        digitalWrite(led3,LOW);
        return 1;
    }
    else{
        digitalWrite(led,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        return -1;
    }
}
