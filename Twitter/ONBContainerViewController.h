//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBContainerViewController_h
#define ONBContainerViewController_h
@import Foundation;

#include "OCFAnnounceable-Protocol.h"
#include "OCFWaitable-Protocol.h"
#include "ONBComponentCollectionViewModelObserver-Protocol.h"
#include "ONBComponentCollectionViewProvider.h"
#include "ONBContainerViewControllerDelegate-Protocol.h"
#include "ONBEntryNavigationDeclaring-Protocol.h"
#include "ONBSearchViewModel.h"
#include "ONBSearchViewModelDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNItemsDataViewController, TFNTwitterAccount, TFNViewController, TFSTwitterScribeContext, UIScrollView, UIView, XNAVConfiguration;

@interface ONBContainerViewController : TFNViewController <XNAVConfigurationProviding, ONBComponentCollectionViewModelObserver, ONBSearchViewModelDelegate, OCFAnnounceable, OCFWaitable, ONBEntryNavigationDeclaring> {
    /* instance variables */
    id <ONBContainerViewControllerDelegate> _delegate;
    _Bool _didScribeSearchTyping;
    ONBComponentCollectionViewProvider *_viewProvider;
    ONBSearchViewModel *_searchViewModel;
    TFNItemsDataViewController *_contentViewController;
    TFNItemsDataViewController *_searchResultsViewController;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_searchScribeContext;
    UIView *_headerView;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long entryNavigation;

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model searchSpec:(id)spec contentViewController:(id)controller searchScribeContext:(id)context showSeparator:(_Bool)separator delegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)tfn_prefersNavigationBarHidden;
- (_Bool)tfn_logoTitleViewShown;
- (id)tfn_customizeLayoutMetrics:(id)metrics forChildViewController:(id)controller;
- (id)ocf_voiceoverPresentationAnnouncement;
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;
- (void)searchViewModelTextDidBeginEditing:(id)editing;
- (void)searchViewModel:(id)model textDidChange:(id)change;
- (void)searchViewModelTextDidEndEditing:(id)editing;
- (void)searchViewModelDidSearch:(id)search;
- (void)searchViewModelDidCancel:(id)cancel fromButton:(_Bool)button;
- (void)componentsViewModelDidUpdate:(id)update withUpdateType:(long long)type;
- (void)private_nextTapped:(id)tapped;
- (void)private_skipTapped:(id)tapped;
- (void)updateNextButtonText:(id)text;
- (void)updateNextButtonEnabled:(_Bool)enabled;
- (void)updateDetailRichText:(id)text;
- (void)updateDetailNumberValue:(id)value;
- (void)private_handleStartTextEditing;
- (void)private_scribeSearchAction:(id)action forElement:(id)element;
- (void)private_updateTableHeaderLayout;
- (void)private_updateFooterLayout;
- (void)private_addSearchOverlayView;
- (void)private_layoutSearchOverlayView;
- (void)private_layoutSearchResultsView;
- (void)private_showSearchOverlayView:(_Bool)view;
- (void)private_showOrUpdateSearchTypeaheadResultsViewController:(id)controller;
- (void)private_showOrUpdateSearchResultsViewController:(id)controller;
- (void)private_updateSearchOverlayInsetForViewController:(id)controller;

@end

#endif /* ONBContainerViewController_h */
