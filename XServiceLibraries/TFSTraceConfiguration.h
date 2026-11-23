//
#ifndef TFSTraceConfiguration_h
#define TFSTraceConfiguration_h
@import Foundation;

@class NSObject;

@interface TFSTraceConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 rootSpanName;
    B24@0:8@"NSString"16 samplingPolicy;
    B24@0:8@"NSString"16 isReportingAllowed;
    B24@0:8@"NSString"16 signpostNames;
    B24@0:8@"NSString"16 signpostMessage;
    B24@0:8@"NSString"16 signpostChannel;
    B24@0:8@"NSString"16 backgroundingBehavior;
}

/* instance methods */
- (id)initWithName:(id)name samplingPolicy:(id)policy;
- (id)initWithName:(id)name samplingPolicy:(id)policy isReportingAllowed:(_Bool)allowed;
- (id)initWithName:(id)name samplingPolicy:(id)policy isReportingAllowed:(_Bool)allowed backgroundingBehavior:(long long)behavior;
- (id)init;

@end

#endif /* TFSTraceConfiguration_h */
