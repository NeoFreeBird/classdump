//
#ifndef ONBPermissionHalfCoverTray_h
#define ONBPermissionHalfCoverTray_h
@import Foundation;

@class NSObject;

@interface ONBPermissionHalfCoverTray : NSObject // (Swift)

/* class methods */
+ (id)makeChromeTrayWithSubtask:(id)subtask subtaskDataProvider:(id)provider allowsUserDismiss:(_Bool)dismiss onPrimary:(id /* block */)primary onSecondary:(id /* block */)secondary onActivateLink:(id /* block */)link onUserDismiss:(id /* block */)dismiss;
+ (id)makeDismissOnlyTrayWithTitle:(id)title body:(id)body detail:(id)detail primaryTitle:(id)title secondaryTitle:(id)title;
+ (id)makeEmbeddedTrayWithContentViewController:(id)controller allowsUserDismiss:(_Bool)dismiss onUserDismiss:(id /* block */)dismiss;
+ (void)dismissTray:(id)tray completion:(id /* block */)completion;
+ (void)setInteractionLocked:(_Bool)locked on:(id)on;

/* instance methods */
- (id)init;

@end

#endif /* ONBPermissionHalfCoverTray_h */
