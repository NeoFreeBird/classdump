//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THMURTContextTrackingHelper_h
#define THMURTContextTrackingHelper_h
@import Foundation;

@class NSObject;

@interface THMURTContextTrackingHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *contexts;
}

/* instance methods */
- (void)addContextIdentitiesFromUserInfo:(id)info;
- (id)flushContextIdentities;
- (id)init;

@end

#endif /* THMURTContextTrackingHelper_h */
