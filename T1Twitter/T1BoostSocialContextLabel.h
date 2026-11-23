//
#ifndef T1BoostSocialContextLabel_h
#define T1BoostSocialContextLabel_h
@import Foundation;

@class NSObject;

@interface T1BoostSocialContextLabel : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldShowForAccount:(id)account statusViewModel:(id)model;
+ (_Bool)scribeImpressionForViewModel:(id)model;
+ (void)handleTapForAccount:(id)account statusViewModel:(id)model presentingController:(id)controller scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1BoostSocialContextLabel_h */
