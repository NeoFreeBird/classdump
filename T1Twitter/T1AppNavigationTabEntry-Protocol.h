//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppNavigationTabEntry_Protocol_h
#define T1AppNavigationTabEntry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@protocol T1AppNavigationTabEntry <NSObject>

@required

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;
@property (nonatomic, readonly) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;

@optional

/* optional instance methods */
- (void)setupForTabBarPresentation;
- (void)addContentReadyDependantObservers;

@end

#endif /* T1AppNavigationTabEntry_Protocol_h */
