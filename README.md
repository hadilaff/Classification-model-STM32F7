# Classification-model-STM32F7

Our goal is to Implementat a Deep Learning model on STM32F746G DISCOVERY.


![Screenshot from 2024-12-13 22-28-44](https://github.com/user-attachments/assets/126947ab-8e60-4678-b556-cd4c7ec6303d)




After preparing and training a classification model we have to convert the model (tflite/.h...) to a STM32 compatible project using “ST Edge AI developer” tool.
https://stm32ai.st.com/st-edge-ai-developer-cloud/

![Screenshot from 2024-12-13 22-40-21](https://github.com/user-attachments/assets/5c077ebf-612d-478f-a2ea-db9d42ce2860)


In this case the input image size is 64*64*3, and since cubeide not able to read image we have to covert the input unot int32

![Screenshot from 2024-12-13 22-42-56](https://github.com/user-attachments/assets/ffce163d-ea55-4c97-8312-65b909b711fd)

![Screenshot from 2024-12-13 22-43-36](https://github.com/user-attachments/assets/d7b21d79-6b3b-43f7-9fe5-afdad0ef6f29)
![Screenshot from 2024-12-13 22-44-02](https://github.com/user-attachments/assets/627f1c6f-7210-4bc5-83dd-cbc40b9ed09f)



## Some output issues:
![Screenshot from 2024-12-13 22-44-49](https://github.com/user-attachments/assets/2aa4390d-bdbd-4985-a9ba-97035c50228a)
