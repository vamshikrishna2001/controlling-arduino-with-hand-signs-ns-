# controlling-arduino-with-hand-signs-ns-

This is an example of deploying dl algorithms through arduino:

Firstly download the dataset from Kaggle :https://www.kaggle.com/koryakinp/fingers
This dataset contains hand signs which represents numbers from 0-6 that means we have 6 target variables
For simplicity we will use 0 and 6 hand it's palm and fist signs know .
The dataset isn't seperated according to the target variables so i have uploded the prep code for that
it basically seperates out dataset like this
dataset

     /train
        1.'0'--->this what fist that we have considered
        2.'1'
        3.'2'
        4.'3'
        5.'4'
        6.'5'--->this what palm that we have considered

       /test
        1.'0'--->this what fist that we have considered
        2.'1'
        3.'2'
        4.'3'
        5.'4'
        6.'5'--->this what palm that we have considered 

so dont hesitate to run the code
servo-pytorch is the code which for training the model
servo-opencv is basically the code where you show the input (palm or fist)"plz put your hand in middle of the screen since no object detection algorithm is used"
ardata is the arduino code which makes the servo rotate 


note :
If you find model cant predict the hand sign properly even though you are putting the hand sign,miidle of the screen
Then kindly try to get more images of both the signs from your webcam or phone around 200-250 images is enough 
and retrain the model or tranfer the previous model to the present dataset
then your code should work good

