//
#ifndef _TtC16XActivityHistory39ActivityHistoryVideosPageViewController_h
#define _TtC16XActivityHistory39ActivityHistoryVideosPageViewController_h
@import Foundation;

@class TFNViewController, XActivityHistory.ActivityHistoryOfflineVideosPaging _$s_So16UIViewControllerCXcSg, XActivityHistory.ActivityHistoryOfflineVideosPaging _$s_So16UIViewControllerCXcycSg, XActivityHistory.ActivityHistoryPageViewController, XActivityHistory.ActivityHistoryVideosPageViewController.Mode;

@interface XActivityHistory.ActivityHistoryVideosPageViewController : TFNViewController { // (Swift)
    /* instance variables */
    XActivityHistory.ActivityHistoryPageViewController historyPage;
    XActivityHistory.ActivityHistoryOfflineVideosPaging _$s_So16UIViewControllerCXcycSg makeOfflineVideosPage;
    XActivityHistory.ActivityHistoryOfflineVideosPaging _$s_So16UIViewControllerCXcSg offlineVideosPage;
    XActivityHistory.ActivityHistoryVideosPageViewController.Mode mode;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)scribeSection;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16XActivityHistory39ActivityHistoryVideosPageViewController_h */
