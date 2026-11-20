//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DspClientContextInputBuilder_h
#define T1DspClientContextInputBuilder_h
@import Foundation;

@class NSObject;

@interface T1DspClientContextInputBuilder : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *sessionId;
    NSNumber"16@0:8 *gsig;
    NSNumber"16@0:8 *refreshTimer;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *timelineFeatures;
    NSNumber"16@0:8 *gsigCache;
    NSNumber"16@0:8 *gsigCacheRefreshTimer;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)setupWithAccount:(id)account;

@end

#endif /* T1DspClientContextInputBuilder_h */
