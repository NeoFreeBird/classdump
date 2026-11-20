//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRProtectedReplyTutorialTray_h
#define TCRProtectedReplyTutorialTray_h
@import Foundation;

@class NSObject;

@interface TCRProtectedReplyTutorialTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithUnfollowingUsers:(id)users;

/* instance methods */
- (id)init;

@end

#endif /* TCRProtectedReplyTutorialTray_h */
