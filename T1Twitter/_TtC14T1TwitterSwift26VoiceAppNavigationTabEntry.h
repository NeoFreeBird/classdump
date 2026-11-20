//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26VoiceAppNavigationTabEntry_h
#define _TtC14T1TwitterSwift26VoiceAppNavigationTabEntry_h
@import Foundation;

#include "T1AppNavigationTabEntry-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@class NSObject, Swift.Bool, _$sSo17TFNTwitterAccountC, _$sSo9T1TabViewCSg;

@interface T1TwitterSwift.VoiceAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry, T1AppNavigationTabEntryContentControllerFactory> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.T1TabView? $__lazy_storage_$_tabView;
}

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;
@property (nonatomic, retain) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;

/* instance methods */
- (id)createContentController;
- (id)rootTabViewController;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26VoiceAppNavigationTabEntry_h */
