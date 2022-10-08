# TinyML-Exercises  

## How to use  
- Connect your ESP32 board to your PC.    
- Run the ``NAND_TinyML`` code.  
- Open your ``Serial monitor`` and ensure the baud rate is set to ``115200``.  
- You should observe the output shown in the ``Serial monitor's output`` section of this README.  

## Description  
TinyML projects. Project 1 is a trivial example of training a model to predict the outputs of a NAND gate.  
The model is trained using ``tensorflow`` in ``Google Colab`` and converted to a C code. The C code is executed on an  
ESP32 module. The EloquentTinyML library is used to run the inference on the ESP32.   

## How the code works  
The C code generated is a header file containing an array. This array is the model that was trained using ``tensorflow``.  
The header file is named ``nand_model.h``. The array in the header file is named ``nand_model``. The header file is included  
in the ``.ino`` file in order to make the model accessible to the main application. The following headers are included:  

```
#include <EloquentTinyML.h>
#include "nand_model.h"
```  
The number of inputs and output required by the model as well as the ``tensor arena size`` are defined in the code as follows:  

```
#define NUMBER_OF_INPUTS    2
#define NUMBER_OF_OUTPUTS   1
#define TENSOR_ARENA_SIZE   3*1024
```

NB: Tensor arena size is the amount of space reserved for the neural networks operations (e.g. storage of tensors). An object (``ml``) of the class ``TFLite`` is instantiated and initialized with the number of inputs,outputs and tensor arena size. The function ``RunModel(float* input,char* title)`` makes the inference and displays the result on the ``Serial monitor``. ``RunModel()`` makes inferences by calling ``ml.predict()``. More information on the EloquentTinyML library functions can be in the repo linked in the ``Credits`` section below.  

## Serial monitor's output  
```
 NAND Model Experiment: 

0 NAND 0: 
predicted value = 1.00
0 NAND 1: 
predicted value = 1.00
1 NAND 0: 
predicted value = 1.00
1 NAND 1: 
predicted value = 0.00
```

## Credits  
- EloquentTinyML Library: https://github.com/eloquentarduino/EloquentTinyML  
- NAND Gate ML model training and validation: https://github.com/MikunsHub/my_Portfolio  
- Convert tensorflow model to C code: https://github.com/eloquentarduino/tinymlgen  
- Running xxd on windows: https://linuxhint.com/run-xxd-command-in-windows/  

