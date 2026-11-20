//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterSelfServeAds33BoostRegionSelectorViewController_h
#define _TtC19TwitterSelfServeAds33BoostRegionSelectorViewController_h
@import Foundation;

#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class Swift.Bool, TwitterSelfServeAds.BoostGlobalOptionView, TwitterSelfServeAds.BoostSearchFieldView, TwitterSelfServeAds.Location _$sSgcSg ->, TwitterSelfServeAds.SimpleQuickPromoteRegionSelectorViewModel, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$sSa -> TwitterSelfServeAds.Location, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UITableViewC, _$sSo6UIViewC;

@interface TwitterSelfServeAds.BoostRegionSelectorViewController : type metadata for XDesignSystem.StackTrayContentViewController <UITableViewDataSource, UITableViewDelegate> { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.Location _$sSgcSg -> onSelectRegion;
    TwitterSelfServeAds.SimpleQuickPromoteRegionSelectorViewModel viewModel;
    Swift.Bool isGlobalRegionEnabled;
    TwitterSelfServeAds.BoostSearchFieldView searchField;
    __C.UIView resultsContainer;
    __C.UITableView tableView;
    TwitterSelfServeAds.BoostGlobalOptionView globalOptionView;
    Swift.String query;
    Swift.Array -> TwitterSelfServeAds.Location locations;
    Swift.Bool hasFocusedSearch;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19TwitterSelfServeAds33BoostRegionSelectorViewController_h */
