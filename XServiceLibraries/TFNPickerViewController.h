//
#ifndef TFNPickerViewController_h
#define TFNPickerViewController_h
@import Foundation;

#include "TFNItemsDataViewController.h"
#include "TFNPickableValue-Protocol.h"
#include "TFNValuePicker-Protocol.h"
#include "TFNValuePickerDataSource-Protocol.h"
#include "TFSTokenDictionary.h"
#include "UISearchBarDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol TFNPickerViewControllerDelegate;

@interface TFNPickerViewController : TFNItemsDataViewController <UISearchBarDelegate, TFNValuePicker>

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSMutableArray *valueSections;
@property (readonly, nonatomic) NSMutableDictionary *valueSectionIndexes;
@property (readonly, nonatomic) TFSTokenDictionary *tokenizedValues;
@property (readonly, nonatomic) TFSTokenDictionary *tokenizedInitialValues;
@property (readonly, nonatomic) _Bool valuePickingOptional;
@property (readonly, nonatomic) _Bool canAddValues;
@property (readonly, nonatomic) _Bool canRemoveValues;
@property (readonly, nonatomic) _Bool canRemoveAllValues;
@property (readonly, nonatomic) _Bool shouldDismissAfterValuePicked;
@property (readonly, nonatomic) _Bool hasBackButton;
@property (readonly, nonatomic) _Bool isPresentedInSemiModal;
@property (retain, nonatomic) NSNumber *viewIsLaidOutAsSemiModal;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) _Bool scrolledToInitialPickedValue;
@property (readonly, nonatomic) double maxContentHeight;
@property (weak, nonatomic) id <TFNPickerViewControllerDelegate> delegate;
@property (readonly, weak, nonatomic) id <TFNValuePickerDataSource> dataSource;
@property (nonatomic) unsigned long long maxAllowedPickedValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool canPickMultipleValues;
@property (readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property (readonly, copy, nonatomic) NSSet *pickedValues;
@property (copy, nonatomic) id /* block */ didPickValueBlock;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSString *valueQuery;

/* instance methods */
- (id)init;
- (id)initWithDataSource:(id)source options:(unsigned long long)options;
- (id)initWithCollectionViewLayout:(id)layout;
- (_Bool)shouldScrollToInitialPickedValue;
- (_Bool)canSearchValues;
- (void)_setupValues:(id)values inSection:(id)section;
- (id)_tokenDictionaryForValues:(id)values unpickableValues:(id)values;
- (id)_valuesFilteredBySearchText:(id)text tokenDictionary:(id)dictionary;
- (void)_setupSections;
- (void)_setupSearchBar;
- (id)populateItemsWithMessages:(id)messages items:(id)items sectionIndex:(unsigned long long)index;
- (void)_findNextItemForIndexPath:(id)path;
- (void)_pickNextItems;
- (id)_addItemWithMessage:(id)message atIndex:(unsigned long long)index;
- (id)_valueSectionAtIndexPath:(id)path;
- (void)_updateControlsAnimated:(_Bool)animated;
- (void)_addItemToSectionAtIndex:(unsigned long long)index withAddValueMessage:(id)message index:(unsigned long long)index sender:(id)sender;
- (void)_dismiss;
- (void)_cancel;
- (void)_scrollToInitialPickedValueIfNeeded;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated;
- (void)update:(_Bool)update;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)_pickItem:(id)item atIndexPath:(id)path;
- (_Bool)shouldHighlightItem:(id)item atIndexPath:(id)path;
- (_Bool)shouldSelectItem:(id)item atIndexPath:(id)path;
- (_Bool)canEditItem:(id)item atIndexPath:(id)path;
- (long long)editingStyleForItem:(id)item atIndexPath:(id)path;
- (_Bool)shouldIndentWhileEditingItem:(id)item atIndexPath:(id)path;
- (void)commitEditingStyle:(long long)style forItem:(id)item atIndexPath:(id)path;
- (void)searchBar:(id)bar textDidChange:(id)change;

@end

#endif /* TFNPickerViewController_h */
