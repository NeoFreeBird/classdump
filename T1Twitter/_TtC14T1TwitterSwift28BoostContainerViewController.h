//
#ifndef _TtC14T1TwitterSwift28BoostContainerViewController_h
#define _TtC14T1TwitterSwift28BoostContainerViewController_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class Swift.Bool, T1TwitterSwift.BoostExploreFilter, TFNViewController, _$s10TFNUISwift29LegacySegmentedViewControllerCMn ?, _$sSSSg, _$sSaySo16UIViewControllerCG, _$sSbSg, _$sSi, _$sSiSg, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.BoostContainerViewController : TFNViewController <TFNUISwift.LegacySegmentedViewControllerDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String? source;
    Swift.Bool isDeeplink;
    [__C.UIViewController] pageViewControllers;
    Swift.Int currentTabIndex;
    T1TwitterSwift.BoostExploreFilter currentExploreFilter;
    Swift.Int? initialTabIndex;
    Swift.Bool? $__lazy_storage_$_showsFilterTab;
    nominal type descriptor for TFNUISwift.LegacySegmentedViewController ? $__lazy_storage_$_segmentedController;
}

/* instance methods */
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (void)segmentedViewController:(id)controller didTapTabAtIndex:(long long)index;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)scribePage;
- (id)scribeSection;
- (_Bool)t1_showsDashAction;
- (long long)dashContentItemType;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift28BoostContainerViewController_h */
