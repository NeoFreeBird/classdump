//
#ifndef T1PostInteractionsViewController_h
#define T1PostInteractionsViewController_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class TFNViewController;

@interface T1PostInteractionsViewController : TFNViewController <TFNUISwift.LegacySegmentedViewControllerDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *statusID;
    NSNumber"16@0:8 *statusUserID;
    NSNumber"16@0:8 *initialTab;
    NSNumber"16@0:8 *postActivityButtonEnabled;
    NSNumber"16@0:8 *likesTimelineSortedBy;
    NSNumber"16@0:8 *quotesTimelineSortedBy;
    NSNumber"16@0:8 *retweetsTimelineSortedBy;
    NSNumber"16@0:8 *likeSorting;
    NSNumber"16@0:8 *quoteSorting;
    NSNumber"16@0:8 *retweetSorting;
    NSNumber"16@0:8 *quotesVideoEmbedsEnabled;
    NSNumber"16@0:8 *lastSelectedTab;
    NSNumber"16@0:8 *$__lazy_storage_$_segmentedController;
    NSNumber"16@0:8 *$__lazy_storage_$_likesTopSortTimelineViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_likesLatestSortTimelineViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_quotesTopSortTimelineViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_quotesLatestSortTimelineViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_retweetsTopSortTimelineViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_retweetsLatestSortTimelineViewController;
}

/* class methods */
+ (id)viewControllerWithAccount:(id)account statusID:(long long)id statusUserID:(long long)id initialTab:(long long)tab;

/* instance methods */
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (void)segmentedViewController:(id)controller didScrollToFractionalIndex:(double)index;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)openLikesSortingMenuSheet;
- (void)openQuotesSortingMenuSheet;
- (void)openRetweetsSortingMenuSheet;

@end

#endif /* T1PostInteractionsViewController_h */
