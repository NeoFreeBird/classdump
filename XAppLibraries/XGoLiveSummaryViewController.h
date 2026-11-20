//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XGoLiveSummaryViewController_h
#define XGoLiveSummaryViewController_h
@import Foundation;

@class UIViewController;

@interface XGoLiveSummaryViewController : UIViewController { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 snapshotView;
    @40@0:8:16@24@32 $__lazy_storage_$_editBroadcastAction;
    @40@0:8:16@24@32 $__lazy_storage_$_viewStatsAction;
    @40@0:8:16@24@32 endedLabel;
    @40@0:8:16@24@32 overflowButton;
    @40@0:8:16@24@32 watchReplayButton;
}

@property (nonatomic, copy) id /* block */ onEditBroadcast;
@property (nonatomic, copy) id /* block */ onViewStats;
@property (nonatomic, copy) id /* block */ onOverflow;
@property (nonatomic, copy) id /* block */ onWatchReplay;

/* instance methods */
- (id)initWithSnapshotView:(id)view;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)overflowTapped;
- (void)watchReplayTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* XGoLiveSummaryViewController_h */
