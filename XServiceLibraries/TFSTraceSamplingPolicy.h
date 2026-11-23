//
#ifndef TFSTraceSamplingPolicy_h
#define TFSTraceSamplingPolicy_h
@import Foundation;

@class NSObject;

@interface TFSTraceSamplingPolicy : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 isEnforcedByCaller;
    B24@0:8@"NSString"16 sampleReason;
}

/* class methods */
+ (id)always;
+ (id)percentage:(long long)percentage;
+ (id)fractionalPercentage:(long long)percentage;

/* instance methods */
- (_Bool)canStartTrace;
- (id)enforcedByCaller;
- (id)init;

@end

#endif /* TFSTraceSamplingPolicy_h */
