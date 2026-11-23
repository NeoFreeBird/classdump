//
#ifndef TAVTDownscalingFilterTask_h
#define TAVTDownscalingFilterTask_h
@import Foundation;

#include "TAVTVideoFilterTask-Protocol.h"

@class NSObject;

@interface TAVTDownscalingFilterTask : NSObject <TAVTVideoFilterTask> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 input;
    B24@0:8@"NSString"16 output;
    B24@0:8@"NSString"16 commandBuffer;
}

@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

/* instance methods */
- (struct __CVBuffer *)waitUntilCompletedAndReturnError:(id *)error;
- (id)init;

@end

#endif /* TAVTDownscalingFilterTask_h */
