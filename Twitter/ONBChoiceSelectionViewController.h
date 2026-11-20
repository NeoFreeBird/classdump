//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBChoiceSelectionViewController_h
#define ONBChoiceSelectionViewController_h
@import Foundation;

#include "ONBChoiceSelectionBoxedTableRowAdapterDelegate-Protocol.h"
#include "ONBChoiceSelectionViewControllerDelegate-Protocol.h"
#include "ONBItemsDataViewController.h"
#include "ONBSearchViewModel.h"
#include "ONBSearchViewModelDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSMutableSet, NSString, OCFShowMore, UIScrollView, XNAVConfiguration;

@interface ONBChoiceSelectionViewController : ONBItemsDataViewController <XNAVConfigurationProviding, ONBSearchViewModelDelegate, ONBChoiceSelectionBoxedTableRowAdapterDelegate> {
    /* instance variables */
    id <ONBChoiceSelectionViewControllerDelegate> _delegate;
    _Bool _needsSelectionUpdate;
    NSArray *_choices;
    NSArray *_filteredChoices;
    NSMutableSet *_selectedChoices;
    unsigned long long _showMoreTapCount;
    long long _choiceStyle;
    long long _selectionType;
    OCFShowMore *_showMore;
    ONBSearchViewModel *_searchViewModel;
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

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model searchSpec:(id)spec choices:(id)choices showMore:(id)more selectedChoiceIdentifiers:(id)identifiers selectionType:(long long)type delegate:(id)delegate choiceStyle:(long long)style;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)calculatedLayoutMetrics;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)update:(_Bool)update;
- (void)submit;
- (void)abandon;
- (void)boxedChoiceSelected:(id)selected;
- (void)setSelectedChoiceFor:(id)_for;
- (void)searchViewModelTextDidBeginEditing:(id)editing;
- (void)searchViewModel:(id)model textDidChange:(id)change;
- (void)searchViewModelTextDidEndEditing:(id)editing;
- (void)private_addSearchOverlayView;
- (void)private_layoutSearchOverlayView;
- (double)private_additionalTopInsetForSearchOverlayView;
- (void)private_searchFocusDidChange;
- (id)private_selectedChoicesFrom:(id)from forIdentifiers:(id)identifiers;
- (void)private_updateNextButton;
- (void)private_updatePrimarySelection;
- (id)private_boxedDataViewItemsForChoices:(id)choices;
- (id)private_dataViewItemsForChoices:(id)choices;
- (void)private_handleSelectionOfChoice:(id)choice forBooleanItem:(id)item;
- (id)private_expandedRichText:(id)text;
- (void)private_reorderChoicesIfNeeded;

@end

#endif /* ONBChoiceSelectionViewController_h */
