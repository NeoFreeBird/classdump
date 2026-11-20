//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7Profile29ProfileBirthdayVisibilityTray_h
#define _TtC7Profile29ProfileBirthdayVisibilityTray_h
@import Foundation;

@class NSObject;

@interface Profile.ProfileBirthdayVisibilityTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithTitle:(id)title visibility:(long long)visibility restrictsChoicesToSelf:(_Bool)self learnMoreURL:(id)url onSelect:(id /* block */)select onLearnMore:(id /* block */)more onDismiss:(id /* block */)dismiss;
+ (id)labelForVisibility:(long long)visibility;

/* instance methods */
- (id)init;

@end

#endif /* _TtC7Profile29ProfileBirthdayVisibilityTray_h */
