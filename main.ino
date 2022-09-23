class Buzzer{
    int pin;
    public:
    Buzzer(int pin){
        this->pin = pin;
        pinMode(this->pin,OUTPUT);
    }

    void on(){
        digitalWrite(this->pin,HIGH);
    }

    void off(){
        digitalWrite(this->pin,LOW);
    }
};


void setup(){

}

void loop(){

}