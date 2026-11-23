//
#ifndef TFNTwitterMediaUploadUpsellFatigueTracker_h
#define TFNTwitterMediaUploadUpsellFatigueTracker_h
@import Foundation;

@class NSObject;

@interface TFNTwitterMediaUploadUpsellFatigueTracker : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldHideWithTimeout:(double)timeout;
+ (void)resetTimestamp;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterMediaUploadUpsellFatigueTracker_h */
