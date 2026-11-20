//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRPlacePickerViewController_h
#define TCRPlacePickerViewController_h
@import Foundation;

#include "TCRPlacePickerActionAdapter.h"
#include "TCRPlacePickerTableRowAdapter.h"
#include "TCRPreciseLocationSwitch.h"
#include "TCRScrollingTitleView.h"
#include "TCRScrollingTitleViewDataSource-Protocol.h"
#include "TFNTwitterComposePlaceStore.h"
#include "TFNTwitterCompositionGeotagSession.h"
#include "TUIErrorDataViewAdapterDelegate-Protocol.h"
#include "UISearchBarDelegate-Protocol.h"

@class NSArray, NSError, NSString, TFNItemsDataViewController, TFNSearchBar, TFNSpacerView, TFSTwitterPlace, TFSTwitterPlaceAttribution, UIBarButtonItem;
@protocol TCRPlacePickerViewControllerDelegate;

@interface TCRPlacePickerViewController : TFNItemsDataViewController <UISearchBarDelegate, TCRScrollingTitleViewDataSource, TUIErrorDataViewAdapterDelegate>

@property (readonly, weak, nonatomic) id <TCRPlacePickerViewControllerDelegate> delegate;
@property (nonatomic) _Bool loading;
@property (retain, nonatomic) NSError *fetchError;
@property (copy, nonatomic) NSArray *places;
@property (retain, nonatomic) TFSTwitterPlaceAttribution *placeAttribution;
@property (readonly, nonatomic) UIBarButtonItem *removeBarButton;
@property (retain, nonatomic) TCRPlacePickerTableRowAdapter *placeAdapter;
@property (retain, nonatomic) TCRPlacePickerActionAdapter *searchItemAdapter;
@property (retain, nonatomic) TCRPreciseLocationSwitch *preciseLocationSwitch;
@property (readonly, nonatomic) _Bool preciseLocationSwitchVisible;
@property (retain, nonatomic) TCRScrollingTitleView *titleView;
@property (retain, nonatomic) TFNSearchBar *searchBar;
@property (retain, nonatomic) TFNSpacerView *searchBarSpacerView;
@property (nonatomic) _Bool clientFilterActive;
@property (readonly, nonatomic) TFSTwitterPlace *selectedPlace;
@property (nonatomic) _Bool fromAudienceSelector;
@property (readonly, nonatomic) TFNTwitterComposePlaceStore *placeStore;
@property (retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession;
@property (nonatomic) _Bool preciseLocationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithAccount:(id)account placeStore:(id)store geoDataViewProvider:(id)provider delegate:(id)delegate fromAudienceSelector:(_Bool)selector;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (double)_searchBarHeight;
- (void)willRotateToInterfaceOrientation:(long long)orientation duration:(double)duration;
- (void)didRotateFromInterfaceOrientation:(long long)orientation;
- (void)_updateRemoveButtonState;
- (void)_okButtonTapped:(id)tapped;
- (void)_removeButtonTapped:(id)tapped;
- (long long)numberOfTitlesForTitleView:(id)view;
- (id)navigationBarForTitleView:(id)view;
- (id)titleView:(id)view titleTupleAtIndex:(long long)index;
- (double)scalingFactorForTitleView:(id)view;
- (void)_placeFetchSuccessful:(id)successful;
- (void)_placeFetchFailed:(id)failed;
- (void)_placeSearchSuccessful:(id)successful;
- (void)_placeSearchFailed:(id)failed;
- (void)update:(_Bool)update;
- (id)_errorItemForStreamError:(id)error;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (void)_executeSearchWithQuery:(id)query;
- (void)_executeSearch;
- (void)scrollViewDidScroll:(id)scroll;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)_syncTitleViewScrollWithScrollView:(id)view;
- (void)saveScrollPosition;
- (_Bool)isPreciseLocationEnabled;
- (void)setPreciseLocationSwitchVisible:(_Bool)visible animated:(_Bool)animated;
- (_Bool)_shouldShowPreciseLocationSwitch;
- (double)_preciseLocationSwitchYForVisible:(_Bool)visible;
- (void)_updatePreciseLocationSwitchVisibleAnimated:(_Bool)animated;
- (void)_preciseLocationSwitchDidChange:(id)change;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)errorItemTapped:(id)tapped;
- (_Bool)isLoading;

@end

#endif /* TCRPlacePickerViewController_h */
