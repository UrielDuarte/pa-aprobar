<<<<<<< HEAD
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

=======
class led{
    int pin;
    public:
    Led(int pin){
        this->pin = pin;
        pinMode(this->pin,OUTPUT);
    }
    void on(){
        digitalWrite(this->pin,HIGH);
    }
>>>>>>> 7b823f8080e6f9d1d56372a98080a8e5794fd08e
    void off(){
        digitalWrite(this->pin,LOW);
    }
};

<<<<<<< HEAD

=======
>>>>>>> 7b823f8080e6f9d1d56372a98080a8e5794fd08e
void setup(){

}

void loop(){
<<<<<<< HEAD

=======
    
>>>>>>> 7b823f8080e6f9d1d56372a98080a8e5794fd08e
}