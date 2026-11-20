//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25MoreAppNavigationTabEntry_h
#define _TtC14T1TwitterSwift25MoreAppNavigationTabEntry_h
@import Foundation;

#include "T1AppNavigationTabEntry-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@class NSObject, Swift.Bool, _$sSo17TFNTwitterAccountC, _$sSo47T1AppNavigationTabEntryContentControllerFactory_pSg, _$sSo9T1TabViewC, __C.T1PanelID;

@interface T1TwitterSwift.MoreAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
}

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;

/* instance methods */
- (void)accountBadgesDidChange:(id)change;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift25MoreAppNavigationTabEntry_h */
