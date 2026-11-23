//
#ifndef _TtC14T1TwitterSwift36NotificationsContainerViewController_h
#define _TtC14T1TwitterSwift36NotificationsContainerViewController_h
@import Foundation;

#include "T1URTNotificationTimelineRefresherDelegate-Protocol.h"

@class T1TwitterSwift.URTChromeViewController, T1TwitterSwift.URTNotificationTimelineRefresher ?, TFNViewController, UIScrollView, UIView, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.NotificationsContainerViewController : TFNViewController <T1URTNotificationTimelineRefresherDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.URTChromeViewController urtChromeViewController;
    T1TwitterSwift.URTNotificationTimelineRefresher ? urtTimelineRefresher;
}

@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property (nonatomic, readonly) _Bool tfn_contentScrolledToBottom;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)becomeFirstResponder;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)t1_showsDashAction;
- (id)scribePage;
- (id)scribeSection;
- (void)showSettings;
- (_Bool)timelineRefresherShouldLoadTop:(id)top;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift36NotificationsContainerViewController_h */
