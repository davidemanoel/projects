void setup() {
  // put your setup code here, to run once:
    pinMode(10, OUTPUT); //criar variavel de saida ou entrada
    pinMode(9, OUTPUT);
    pinMode(7, INPUT); //resistor pulldown 
}

void loop() {
  // put your main code here, to run repeatedly:
//declarar variaveis(pode criar em qlqr lugar)-> int
//variavel criada em loop-> local em setup-> global
//se chama variavel atravez do loop

 int estbotao;
 estbotao = digitalRead(7);   //digitalread lê ou verifica o estado da porta


digitalWrite(10, estbotao);
digitalWrite(9, !estbotao);   //!significa inverso ou -1.

} 
