//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFormFieldDataItemAdapter_h
#define TFNFormFieldDataItemAdapter_h
@import Foundation;

#include "TFNFormFieldAttributedFloatingHintTextAccessoryProvider.h"
#include "TFNFormFieldAttributedFooterTextAccessoryProvider.h"
#include "TFNFormFieldAttributedHeaderTextAccessoryProvider.h"
#include "TFNFormFieldAttributedLabelTextAccessoryProvider.h"
#include "TFNFormFieldBadgeAccessoryProvider.h"
#include "TFNFormFieldClearButtonAccessoryProvider.h"
#include "TFNFormFieldDataItemAdapterDelegate-Protocol.h"
#include "TFNFormFieldDisclosureIndicatorAccessoryProvider.h"
#include "TFNFormFieldErrorMessageAccessoryProvider.h"
#include "TFNFormFieldIconAccessoryProvider.h"
#include "TFNFormFieldRemainingCharacterCountAccessoryProvider.h"
#include "TFNFormFieldViewDelegate-Protocol.h"
#include "TFNFormFieldVisibilityButtonAccessoryProvider.h"
#include "TFNItemsDataViewAdapter.h"

@class NSArray, NSMapTable, NSString, UIImage;

@interface TFNFormFieldDataItemAdapter : TFNItemsDataViewAdapter <TFNFormFieldViewDelegate> {
    /* instance variables */
    UIImage *_alertImage;
    UIImage *_successImage;
    NSArray *_accessoryProviders;
    NSMapTable *_badgeTypeByBackingObjectTable;
    NSMapTable *_pickableValuesByBackingObjectTable;
    NSMapTable *_itemByBackingObjectTable;
    NSMapTable *_currentValidatingTextByItemTable;
    TFNFormFieldAttributedFloatingHintTextAccessoryProvider *_floatingHintTextAccessoryProvider;
    TFNFormFieldAttributedFooterTextAccessoryProvider *_footerTextAccessoryProvider;
    TFNFormFieldAttributedHeaderTextAccessoryProvider *_titleTextAccessoryProvider;
    TFNFormFieldAttributedHeaderTextAccessoryProvider *_subtitleTextAccessoryProvider;
    TFNFormFieldAttributedLabelTextAccessoryProvider *_labelTextAccessoryProvider;
    TFNFormFieldBadgeAccessoryProvider *_badgeAccessoryProvider;
    TFNFormFieldClearButtonAccessoryProvider *_clearButtonAccessoryProvider;
    TFNFormFieldDisclosureIndicatorAccessoryProvider *_disclosureIndicatorAccessoryProvider;
    TFNFormFieldErrorMessageAccessoryProvider *_errorMessageAccessoryProvider;
    TFNFormFieldIconAccessoryProvider *_iconAccessoryProvider;
    TFNFormFieldRemainingCharacterCountAccessoryProvider *_remainingCharacterCountAccessoryProvider;
    TFNFormFieldVisibilityButtonAccessoryProvider *_visibilityButtonAccessoryProvider;
}

@property (weak, nonatomic) id <TFNFormFieldDataItemAdapterDelegate> delegate;
@property (readonly, nonatomic) double validationTypingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)itemForBackingObject:(id)object;
- (id)textForItem:(id)item;
- (void)setText:(id)text forItem:(id)item;
- (id)pickableValueForItem:(id)item;
- (void)setPickableValue:(id)value forItem:(id)item;
- (id)errorMessageForItem:(id)item;
- (void)setErrorMessage:(id)message forItem:(id)item;
- (long long)badgeTypeForItem:(id)item;
- (void)setBadgeType:(long long)type forItem:(id)item;
- (void)setAppearance:(long long)appearance forItem:(id)item;
- (void)setSecureTextEntry:(_Bool)entry forItem:(id)item;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeForItem:(id)item;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forItem:(id)item;
- (void)beginEditingforItem:(id)item inViewController:(id)controller;
- (void)endEditingforItem:(id)item;
- (id)currentEditingItemInViewController:(id)controller;
- (void)scrollToItem:(id)item inViewController:(id)controller completion:(id /* block */)completion;
- (void)updateVisibilityForDataItems:(id)items inViewController:(id)controller;
- (void)pickValueForItem:(id)item fromDataViewController:(id)controller title:(id)title dataSource:(id)source retainDataSource:(_Bool)source;
- (void)pickValueForItem:(id)item fromDataViewController:(id)controller withOptions:(long long)options title:(id)title pickableValues:(id)values;
- (void)configureAccessoryProvidersForItem:(id)item withFormFieldView:(id)view;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)formFieldViewContentSizeDidChange:(id)change;
- (void)formFieldView:(id)view didChangeText:(id)text fromText:(id)text;
- (void)formFieldViewDidBeginEditing:(id)editing;
- (void)formFieldViewDidEndEditing:(id)editing;
- (_Bool)formFieldViewShouldBeginEditing:(id)editing;
- (_Bool)formFieldViewShouldEndEditing:(id)editing;
- (_Bool)formFieldViewShouldReturn:(id)_return;
- (_Bool)formFieldViewShouldClear:(id)clear;
- (id)private_formFieldViewForItem:(id)item;
- (void)private_savePickableValue:(id)value forItem:(id)item;
- (id)private_loadPickableValueForItem:(id)item;
- (void)private_saveBadgeType:(long long)type forItem:(id)item;
- (long long)private_loadBadgeTypeForItem:(id)item;
- (id)private_formatAndValidateInputText:(id)text forDataItem:(id)item;
- (void)private_setAppearance:(long long)appearance forView:(id)view;
- (id)private_backingObjectTableKeyForItem:(id)item;

@end

#endif /* TFNFormFieldDataItemAdapter_h */
