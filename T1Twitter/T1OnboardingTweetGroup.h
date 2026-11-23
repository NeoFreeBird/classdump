//
#ifndef T1OnboardingTweetGroup_h
#define T1OnboardingTweetGroup_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface T1OnboardingTweetGroup : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *tweetChoices;

/* instance methods */
- (id)initWithTitle:(id)title tweetChoices:(id)choices;
- (id)init;

@end

#endif /* T1OnboardingTweetGroup_h */
