# face_detector
Indexation of image with caffe 

export PATH=$PATH:<path to build/tools>
export LD_LIBRARY_PATH=<path to libcaffe.so>

./face_detector \
/Users/yukaiwang/Documents/Study/INSA/5IF/PDC02/start_deep/facenet_train_test_2.prototxt \
/Users/yukaiwang/Documents/Study/INSA/5IF/PDC02/start_deep/facenet_iter_200000.caffemodel \
examples/images/face.jpg 	
