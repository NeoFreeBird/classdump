//
#ifndef T1SubscriptionFeatureRegistry_h
#define T1SubscriptionFeatureRegistry_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionFeatureRegistry : NSObject // (Swift)

/* class methods */
+ (id)editTweet;
+ (id)expandedBioEnabled;
+ (id)highlightsEnabled;
+ (id)canHideSubscriptions;
+ (id)fullHdVideoUpload;
+ (id)noteTweetCreation;
+ (id)canGiftPremiumEnabled;
+ (id)canHidePremiumCheckmark;

/* instance methods */
- (id)init;

@end

#endif /* T1SubscriptionFeatureRegistry_h */
