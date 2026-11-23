//
#ifndef _TtC14T1TwitterSwift34NotificationsAppNavigationTabEntry_h
#define _TtC14T1TwitterSwift34NotificationsAppNavigationTabEntry_h
@import Foundation;

#include "T1AppNavigationTabEntry-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@class NSObject, Swift.Bool, T1TwitterSwift.URTNotificationsInteractionsTimelineBridge, _$sSo17TFNTwitterAccountC, _$sSo9T1TabViewC, __C.T1PanelID;

@interface T1TwitterSwift.NotificationsAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry, T1AppNavigationTabEntryContentControllerFactory> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.URTNotificationsInteractionsTimelineBridge interactionsTimelineBridge;
}

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;

/* instance methods */
- (void)setupForTabBarPresentation;
- (id)createContentController;
- (id)rootTabViewController;
- (void)accountActivityDidUpdate:(id)update;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34NotificationsAppNavigationTabEntry_h */
