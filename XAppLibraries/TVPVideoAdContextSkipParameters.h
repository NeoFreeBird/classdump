//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPVideoAdContextSkipParameters_h
#define TVPVideoAdContextSkipParameters_h
@import Foundation;

@class NSNumber, NSObject;

@interface TVPVideoAdContextSkipParameters : NSObject

@property (readonly, nonatomic) NSNumber *skipButtonTime;
@property (readonly, nonatomic) double skipAdDurationRequirement;

/* instance methods */
- (id)initWithSkipButtonTime:(id)time skipAdDurationRequirement:(double)requirement;

@end

#endif /* TVPVideoAdContextSkipParameters_h */
