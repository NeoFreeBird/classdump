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
