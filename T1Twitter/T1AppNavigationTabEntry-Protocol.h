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
