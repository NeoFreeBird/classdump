//
#ifndef TFSEventDrivenTrace_h
#define TFSEventDrivenTrace_h
@import Foundation;

@class NSObject;

@interface TFSEventDrivenTrace : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 samplingPolicy;
    B24@0:8@"NSString"16 completionTimeout;
    B24@0:8@"NSString"16 backgroundingBehavior;
    B24@0:8@"NSString"16 signpostMessage;
    B24@0:8@"NSString"16 signpostChannel;
    B24@0:8@"NSString"16 rootSpan;
    B24@0:8@"NSString"16 allSpanDescriptors;
}

/* class methods */
+ (id)traceWithSamplingPolicy:(id)policy rootSpan:(id)span;
+ (id)traceWithSamplingPolicy:(id)policy completionTimeout:(long long)timeout backgroundingBehavior:(long long)behavior rootSpan:(id)span;

/* instance methods */
- (id)init;

@end

#endif /* TFSEventDrivenTrace_h */
