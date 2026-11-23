//
#ifndef THMURTContentHoistTrackingHelper_h
#define THMURTContentHoistTrackingHelper_h
@import Foundation;

@class NSObject;

@interface THMURTContentHoistTrackingHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *currentHoistDetectionTask;
}

/* instance methods */
- (void)addHoistDetectionTaskFromUserInfo:(id)info;
- (void)executeHoistTaskIfNeeded;
- (id)init;

@end

#endif /* THMURTContentHoistTrackingHelper_h */
