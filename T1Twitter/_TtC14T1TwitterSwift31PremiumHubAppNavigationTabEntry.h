//
#ifndef _TtC14T1TwitterSwift31PremiumHubAppNavigationTabEntry_h
#define _TtC14T1TwitterSwift31PremiumHubAppNavigationTabEntry_h
@import Foundation;

#include "T1AppNavigationTabEntry-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@class NSObject, Swift.Bool, T1TwitterSwift.PremiumHubNavigationController ?, _$sSo17TFNTwitterAccountC, _$sSo8NSObject_pSg, _$sSo9T1TabViewC, __C.T1PanelID;

@interface T1TwitterSwift.PremiumHubAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry, T1AppNavigationTabEntryContentControllerFactory> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.NSObject? complatSwitchesObserver;
    Swift.Bool isRefreshPending;
    T1TwitterSwift.PremiumHubNavigationController ? contentController;
}

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, retain) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;

/* instance methods */
- (void)setupForTabBarPresentation;
- (void)dealloc;
- (id)createContentController;
- (id)rootTabViewController;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31PremiumHubAppNavigationTabEntry_h */
