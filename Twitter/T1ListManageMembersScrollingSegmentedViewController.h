//
#ifndef T1ListManageMembersScrollingSegmentedViewController_h
#define T1ListManageMembersScrollingSegmentedViewController_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"
#include "_TtP12TwitterLists57ListManageMembersScrollingSegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP12TwitterLists57ListManageMembersScrollingSegmentedViewControllerProtocol_-Protocol.h"

@class TFNViewController, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface T1ListManageMembersScrollingSegmentedViewController : TFNViewController <TFNUISwift.LegacySegmentedViewControllerDataSource, TFNUISwift.LegacySegmentedViewControllerDelegate, TwitterLists.ListManageMembersScrollingSegmentedViewControllerProtocol> { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 account;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 listID;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 acceptCachedRepresentation;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 initiallySelectedTabIndex;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 viewModel;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 listHeaderDataFetcher;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 viewControllers;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 listRecommendedUsersViewController;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 listRemoveMembersViewController;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 isHeaderHidden;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 segmentedTitles;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 $__lazy_storage_$_segmentedController;
}

@property (nonatomic, weak) id <TwitterLists.ListManageMembersScrollingSegmentedViewControllerDelegate> delegate;

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (void)segmentedViewController:(id)controller willSelectViewController:(id)controller atIndex:(long long)index indexChanged:(_Bool)changed;
- (id)initWithAccount:(id)account listID:(long long)id acceptCachedRepresentation:(_Bool)representation initiallySelectedTabIndex:(long long)index;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ListManageMembersScrollingSegmentedViewController_h */
