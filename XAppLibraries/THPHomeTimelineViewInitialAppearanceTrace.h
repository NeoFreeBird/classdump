//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
