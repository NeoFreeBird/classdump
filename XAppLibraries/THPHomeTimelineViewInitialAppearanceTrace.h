//
#ifndef THPHomeTimelineViewInitialAppearanceTrace_h
#define THPHomeTimelineViewInitialAppearanceTrace_h
@import Foundation;

@class NSObject;

@interface THPHomeTimelineViewInitialAppearanceTrace : NSObject // (Swift)

/* class methods */
+ (void)activate;
+ (void)startSingleSpanTrace;
+ (void)stopSingleSpanTrace;
+ (void)cancel;
+ (void)abortWithReason:(id)reason;

/* instance methods */
- (id)init;

@end

#endif /* THPHomeTimelineViewInitialAppearanceTrace_h */
