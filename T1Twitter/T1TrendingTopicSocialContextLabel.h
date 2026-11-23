//
#ifndef T1TrendingTopicSocialContextLabel_h
#define T1TrendingTopicSocialContextLabel_h
@import Foundation;

@class NSObject;

@interface T1TrendingTopicSocialContextLabel : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldShowForAccount:(id)account statusViewModel:(id)model;
+ (id)deeplinkURLForAccount:(id)account statusViewModel:(id)model;
+ (_Bool)scribeImpressionForViewModel:(id)model;
+ (void)scribeClickForAccount:(id)account statusViewModel:(id)model scribeContext:(id)context;
+ (void)scribeSeeLessClickForAccount:(id)account statusViewModel:(id)model scribeContext:(id)context feedbackActionUnavailable:(_Bool)unavailable;

/* instance methods */
- (id)init;

@end

#endif /* T1TrendingTopicSocialContextLabel_h */
