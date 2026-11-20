//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
