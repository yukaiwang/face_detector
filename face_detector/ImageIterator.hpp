//
//  ImageIterator.hpp
//  face_detector
//
//  Created by Yukai Wang on 01/12/15.
//  Copyright © 2015 Yukai Wang. All rights reserved.
//

#ifndef ImageIterator_hpp
#define ImageIterator_hpp

#include <fstream>
#include "Classifier.hpp"


const int TAILLE_IMG = 36;
const float REDUCTION_RATE = 1.2;

struct Tag {
    int realX;
    int realY;
    int realWidth;
    int realHeight;
};

class ImageIterator
{
public:
    ImageIterator(const string& model_file,
                  const string& trained_file,
                  const Mat& img);
    ~ImageIterator();
    void Detect();
    void Clustering();
    void Draw();

protected:
    void FrameIterator(Mat actualImg);
    void WriteCSV();
    void ReadCSV();
    void Transform();
    
    Classifier* classifier;
    Mat originalImg;
    int nbIterator;
    std::vector<Tag> tags;
    std::map<int, std::vector<int> > clusters;
    std::vector<Tag> results;
};

#endif /* ImageIterator_hpp */
