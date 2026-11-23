//
#ifndef TTSSearchContainerViewController_h
#define TTSSearchContainerViewController_h
@import Foundation;

#include "TTSSearchResultsParameters.h"
#include "TTSSearchTypeaheadViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TFNViewController, TFSTwitterScribeContext, UIView;

@interface TTSSearchContainerViewController : TFNViewController <TTSSearchTypeaheadViewControllerDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 searchInputEnabled;
    @40@0:8:16@24@32 searchBar;
    @40@0:8:16@24@32 usesGlassBackButton;
    @40@0:8:16@24@32 isFocusAwaitingStackTransition;
    @40@0:8:16@24@32 baseQuery;
    @40@0:8:16@24@32 entranceMorphState;
    @40@0:8:16@24@32 exitMorphState;
    @40@0:8:16@24@32 morphStaticBarWindowFrame;
    @40@0:8:16@24@32 isLocationFilterEnabled;
    @40@0:8:16@24@32 searchResultsViewController;
    @40@0:8:16@24@32 brandedAnimation;
    @40@0:8:16@24@32 visibleViewController;
    @40@0:8:16@24@32 filtersPresenter;
    @40@0:8:16@24@32 $__lazy_storage_$_filtersTypeaheadContext;
    @40@0:8:16@24@32 $__lazy_storage_$_searchLanguagesProvider;
    @40@0:8:16@24@32 $__lazy_storage_$_searchSafetySettingsProvider;
    @40@0:8:16@24@32 hasSurfacedPrefilledQuery;
    @40@0:8:16@24@32 loadedTypeaheadViewController;
    @40@0:8:16@24@32 dismissesWithFade;
    @40@0:8:16@24@32 $__lazy_storage_$_backButtonItem;
    @40@0:8:16@24@32 $__lazy_storage_$_systemBackAction;
    @40@0:8:16@24@32 $__lazy_storage_$_filterButtonItem;
}

@property (nonatomic, retain) TTSSearchResultsParameters *searchParameters;
@property (nonatomic) _Bool focusSearchFieldOnNextAppear;
@property (nonatomic) long long selectedTab;
@property (nonatomic, copy) NSString *prefilledQuery;
@property (nonatomic, copy) NSString *prefilledSource;
@property (nonatomic, copy) NSString *searchBarPlaceholder;
@property (nonatomic) _Bool shouldHideTypeahead;
@property (nonatomic, copy) NSString *scribeParameterContext;
@property (nonatomic, retain) TFSTwitterScribeContext *scribeContext;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property (nonatomic, readonly) _Bool tfn_supportsNavigationBarCollapsing;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property (nonatomic, readonly) _Bool tfn_contentScrolledToBottom;
@property (nonatomic, readonly) _Bool isShowingTypeahead;

/* instance methods */
- (void)searchTypeaheadViewControllerViewWillBeginDragging:(id)dragging;
- (void)searchTypeaheadViewController:(id)controller didSelectUser:(id)user;
- (void)searchTypeaheadViewController:(id)controller didSelectMessageForUser:(id)user;
- (void)searchTypeaheadViewController:(id)controller didSelectRecentSearch:(id)search;
- (void)searchTypeaheadViewController:(id)controller didSelectTopic:(id)topic;
- (void)searchTypeaheadViewController:(id)controller didSelectEvent:(id)event;
- (void)searchTypeaheadViewController:(id)controller didSelectCashtag:(id)cashtag;
- (void)searchTypeaheadViewController:(id)controller didTapAheadWithTerm:(id)term;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithParameters:(id)parameters context:(id)context searchInputEnabled:(_Bool)enabled;
- (id)initWithCoder:(id)coder;
- (_Bool)shouldNavigateInSearchControllerWithParameters:(id)parameters;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (_Bool)becomeFirstResponder;
- (_Bool)accessibilityPerformEscape;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tui_showsActionButton;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeImpressionParameters;
- (void)backButtonTapped;
- (void)filterButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)backgroundTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TTSSearchContainerViewController_h */
