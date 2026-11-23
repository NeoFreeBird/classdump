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
