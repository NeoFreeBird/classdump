//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OnboardingTweetGroupChoice_h
#define T1OnboardingTweetGroupChoice_h
@import Foundation;

@class NSObject, TFNTwitterStatus;

@interface T1OnboardingTweetGroupChoice : NSObject

@property (readonly, nonatomic) TFNTwitterStatus *status;

/* instance methods */
- (id)initWithStatus:(id)status;
- (id)init;

@end

#endif /* T1OnboardingTweetGroupChoice_h */
