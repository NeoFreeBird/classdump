//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPublishParams_h
#define PTVPublishParams_h
@import Foundation;

@class NSObject;

@interface PTVPublishParams : NSObject

@property (readonly, nonatomic) int audioBitrate;
@property (readonly, nonatomic) int framerate;
@property (readonly, nonatomic) int gopLengthInFrames;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int minVideoBitrate;
@property (readonly, nonatomic) int maxVideoBitrate;
@property (readonly, nonatomic) double videoBitrateRatio;

/* instance methods */
- (id)initWithDict:(id)dict;
- (int)videoBitrateForBandwidth:(int)bandwidth;

@end

#endif /* PTVPublishParams_h */
