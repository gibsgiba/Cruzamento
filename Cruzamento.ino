void setup()
{
  
  //Grupo 01
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  
  //Grupo 02
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  
  //Grupo 03
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
  //Grupo 04
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  
}

void loop()
{
  digitalWrite(2, HIGH);// Vermelho grupo 1
  digitalWrite(8, HIGH); // Vermelho grupo 1
  
  digitalWrite(9, HIGH);// Verde grupo 2
  digitalWrite(3, HIGH);// Verde grupo 2
  delay(6000);
  digitalWrite(9, LOW);// Verde grupo 2 apaga
  digitalWrite(3, LOW);// Verde grupo 2 apaga
  
  digitalWrite(10, HIGH);// Amarelo grupo 2
  digitalWrite(4, HIGH);// Amarelo grupo 2
  delay(2000);
  
  digitalWrite(10, LOW);// Amarelo grupo 2 apaga
  digitalWrite(4, LOW);// Amarelo grupo 2 apaga
  
  digitalWrite(2, LOW); // Vermelho grupo 1 apaga
  digitalWrite(8, LOW); // Vermelho grupo 1 apaga
  
  
  
  digitalWrite(11, HIGH); // Vermelho grupo 2
  digitalWrite(5, HIGH); // Vermelho grupo 2
  
  digitalWrite(0, HIGH); // Verde grupo 1
  digitalWrite(6, HIGH); // Verde grupo 1
  delay(6000);
  
  digitalWrite(0, LOW);// Verde grupo 1 apaga
  digitalWrite(6, LOW);// Verde grupo 1 apaga
  
  
  digitalWrite(1, HIGH); // Amarelo grupo 1
  digitalWrite(7, HIGH); // Amarelo grupo 1
  delay(2000);
  
  digitalWrite(1, LOW);// Amarelo grupo 1 apaga
  digitalWrite(7, LOW);// Amarelo grupo 1 apaga
  
  digitalWrite(11, LOW); // Vermelho grupo 2 apaga
  digitalWrite(5, LOW); // Vermelho grupo 2 apaga  
  
}
