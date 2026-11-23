//
#ifndef ONBFollowSheetTray_h
#define ONBFollowSheetTray_h
@import Foundation;

@class NSObject;

@interface ONBFollowSheetTray : NSObject // (Swift)

/* class methods */
+ (id)makeEmptyTrayWithFollowingSheet:(id)sheet subtaskDataProvider:(id)provider onPrimary:(id /* block */)primary onActivateLink:(id /* block */)link onDismiss:(id /* block */)dismiss;
+ (id)makeUsersTrayWithContentViewController:(id)controller onDismiss:(id /* block */)dismiss;
+ (id)makeDismissOnlyTrayWithTitle:(id)title body:(id)body buttonTitle:(id)title;
+ (void)dismissTray:(id)tray completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* ONBFollowSheetTray_h */
