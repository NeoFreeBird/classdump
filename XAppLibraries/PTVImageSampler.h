//
#ifndef PTVImageSampler_h
#define PTVImageSampler_h
@import Foundation;

@class NSObject;

@interface PTVImageSampler : NSObject {
    /* instance variables */
    struct __CVBuffer * _buffer;
}

/* class methods */
+ (_Bool)imageSamplingAvailable;

/* instance methods */
- (id)init;
- (id)initWithImageSample:(struct __CVBuffer *)sample;
- (id)sampleColorAtNormalizedPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* PTVImageSampler_h */
