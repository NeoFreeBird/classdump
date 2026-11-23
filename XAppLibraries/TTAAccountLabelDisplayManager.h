//
#ifndef TTAAccountLabelDisplayManager_h
#define TTAAccountLabelDisplayManager_h
@import Foundation;

@class NSObject;

@interface TTAAccountLabelDisplayManager : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldShowAccountLabelWithLabelType:(long long)type description:(id)description featureSwitches:(id)switches;

/* instance methods */
- (id)init;

@end

#endif /* TTAAccountLabelDisplayManager_h */
