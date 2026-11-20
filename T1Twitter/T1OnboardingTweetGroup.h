//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
