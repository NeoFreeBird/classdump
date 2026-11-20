//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserReviewPrompt_h
#define T1UserReviewPrompt_h
@import Foundation;

@class NSObject;

@interface T1UserReviewPrompt : NSObject

/* class methods */
+ (void)_showPromptAfterDelay:(double)delay;
+ (void)promptUserToRateApp;
+ (_Bool)userMeetsConditionsForAppStoreReviewPrompt;
+ (void)updateConsecutiveUsageCount;

@end

#endif /* T1UserReviewPrompt_h */
