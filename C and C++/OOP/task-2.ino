class STring{
public:
  STring(a);           
  STring(const String& b); 
  STring(const char* c);   
  
  ~STring();           
private:
  char* array;            
  int size;              
};
STring::STring();
class Led{
    private:
      void on_off_1_sek(){
          digitalWrite(LED_BUILTIN, HIGH);  
          delay(1000);                       
          digitalWrite(LED_BUILTIN, LOW);   
          delay(1000);   
      };
      void on_off_025_sek(){
          digitalWrite(LED_BUILTIN, HIGH);  
          delay(250);                       
          digitalWrite(LED_BUILTIN, LOW);   
          delay(250);   
      };
    public:
      Led(int);
      void go(){
        on_off_1_sek();
      };
      void go1(){
        on_off_025_sek();
      }; 
  };
 void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    { STring a, b;  
  STring c(a);  
  print(a);     
  
  STring d("One");   
    }
}

Led::Led(int){};

void loop() {
  Led Dead(20);
  Dead.go();
  Dead.go();
  Dead.go1();
  Dead.go1();

}
