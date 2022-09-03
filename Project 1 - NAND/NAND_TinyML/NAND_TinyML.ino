#include <EloquentTinyML.h>
#include "nand_model.h"

#define NUMBER_OF_INPUTS    2
#define NUMBER_OF_OUTPUTS   1
#define TENSOR_ARENA_SIZE   3*1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;

void RunModel(float* input,char* title)
{
  Serial.println(title);
  float predicted = ml.predict(input);
  Serial.print("predicted value = ");
  Serial.println(predicted);
}

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  ml.begin(nand_model);
  float inputs1[] = {0,0};
  float inputs2[] = {0,1};
  float inputs3[] = {1,0};
  float inputs4[] = {1,1};
  Serial.println("\n NAND Model Experiment: \n");
  RunModel(inputs1,"0 NAND 0: ");
  RunModel(inputs2,"0 NAND 1: ");
  RunModel(inputs3,"1 NAND 0: ");
  RunModel(inputs4,"1 NAND 1: ");
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
