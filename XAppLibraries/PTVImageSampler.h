//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
