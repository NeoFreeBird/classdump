//
#ifndef _TtC20TwitterCommunitiesUI32CommunitiesExploreViewController_h
#define _TtC20TwitterCommunitiesUI32CommunitiesExploreViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, TwitterCommunitiesUI.DataTableViewHeaderContent _$s_So16UIViewControllerCXcSg, TwitterCommunitiesUI.DataTableViewHeaderModuleController ?, _$sSS, _$sSo21TFNDataViewControllerC;

@interface TwitterCommunitiesUI.CommunitiesExploreViewController : TFNViewController { // (Swift)
    /* instance variables */
    Swift.String accountID;
    TwitterCommunitiesUI.DataTableViewHeaderContent _$s_So16UIViewControllerCXcSg headerViewController;
    __C.TFNDataViewController contentViewController;
    Swift.Bool shouldShowCarousel;
    TwitterCommunitiesUI.DataTableViewHeaderModuleController ? $__lazy_storage_$_dataViewHeaderController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterCommunitiesUI32CommunitiesExploreViewController_h */
