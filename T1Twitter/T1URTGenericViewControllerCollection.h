//
#ifndef T1URTGenericViewControllerCollection_h
#define T1URTGenericViewControllerCollection_h
@import Foundation;

#include "T1URTGenericViewControllerCollectionDelegate-Protocol.h"
#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class NSArray, NSObject, TFNTwitterAccount;

@interface T1URTGenericViewControllerCollection : NSObject <TFNUISwift.LegacySegmentedViewControllerDataSource, TFNUISwift.LegacySegmentedViewControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *workQueue;
    NSNumber"16@0:8 *displayLocation;
    NSNumber"16@0:8 *viewControllers;
    NSNumber"16@0:8 *configurePageViewController;
    NSNumber"16@0:8 *isViewControllerCachingEnabled;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) NSArray *entries;
@property (nonatomic, weak) id <T1URTGenericViewControllerCollectionDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account entries:(id)entries priorityQueueActions:(_Bool)actions displayLocation:(long long)location isViewControllerCachingEnabled:(_Bool)enabled;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)cachedPageViewControllersIn:(id)in;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (id)init;

@end

#endif /* T1URTGenericViewControllerCollection_h */
