//
#ifndef TSShareLinkAttributionPreference_h
#define TSShareLinkAttributionPreference_h
@import Foundation;

@class NSObject;

@interface TSShareLinkAttributionPreference : NSObject // (Swift)

/* class methods */
+ (void)refreshForAccountID:(id)id actionService:(id)service featureSwitches:(id)switches;

/* instance methods */
- (id)init;

@end

#endif /* TSShareLinkAttributionPreference_h */
