//
#ifndef T1DebugActivityToastViewController_h
#define T1DebugActivityToastViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1DebugActivityToastViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *activityView;
    NSNumber"16@0:8 *toastTimers;
    NSNumber"16@0:8 *currentItems;
    NSNumber"16@0:8 *retryRunCount;
    NSNumber"16@0:8 *dockedBar;
    NSNumber"16@0:8 *dockedBarViewModel;
    NSNumber"16@0:8 *dockChromeView;
    NSNumber"16@0:8 *dockProgressView;
    NSNumber"16@0:8 *dockChromeHeightConstraint;
    NSNumber"16@0:8 *dockTimers;
    NSNumber"16@0:8 *dockItemIDs;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1DebugActivityToastViewController_h */
