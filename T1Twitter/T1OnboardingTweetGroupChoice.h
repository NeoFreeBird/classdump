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
