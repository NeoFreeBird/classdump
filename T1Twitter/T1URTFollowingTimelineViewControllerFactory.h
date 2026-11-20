//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URTFollowingTimelineViewControllerFactory_h
#define T1URTFollowingTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTFollowingTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)followingViewControllerWithAccount:(id)account userReference:(id)reference shouldShowPeopleButton:(_Bool)button shouldShowTitle:(_Bool)title;

/* instance methods */
- (id)init;

@end

#endif /* T1URTFollowingTimelineViewControllerFactory_h */
