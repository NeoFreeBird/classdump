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
