//
#ifndef T1HomeTimelineAppNavigationTabEntry_h
#define T1HomeTimelineAppNavigationTabEntry_h
@import Foundation;

#include "T1AppNavigationTabEntry-Protocol.h"
#include "T1AppNavigationTabEntryContentControllerFactory-Protocol.h"
#include "T1TabView.h"

@class NSObject;

@interface T1HomeTimelineAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry, T1AppNavigationTabEntryContentControllerFactory> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *cachedHomeTimelineContainer;
    NSNumber"16@0:8 *_hasUnreadContent;
}

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) T1TabView *tabView;
@property (nonatomic, readonly) _Bool isTabViewSideBarOnly;
@property (nonatomic, readonly) _Bool isExcludedFromTabBar;
@property (nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;

/* instance methods */
- (id)createContentController;
- (id)rootTabViewController;
- (void)addContentReadyDependantObservers;
- (void)homeTimelineDidUpdate:(id)update;
- (void)activeUnreadStateDidChange:(id)change;
- (id)init;

@end

#endif /* T1HomeTimelineAppNavigationTabEntry_h */
