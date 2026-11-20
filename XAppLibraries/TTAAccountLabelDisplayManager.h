//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
