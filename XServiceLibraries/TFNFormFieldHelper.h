//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFormFieldHelper_h
#define TFNFormFieldHelper_h
@import Foundation;

#include "TFNFormFieldDataItemAdapter.h"
#include "TFNFormFieldDataItemAdapterDelegate-Protocol.h"
#include "TFNItemsDataViewController.h"

@class NSMapTable, NSObject, NSString;

@interface TFNFormFieldHelper : NSObject <TFNFormFieldDataItemAdapterDelegate> {
    /* instance variables */
    TFNItemsDataViewController *_itemsDataViewController;
    id /* block */ _autosubmitAction;
    id /* block */ _submittabilityChangedAction;
    long long _submittability;
    NSMapTable *_formFieldToFormMapTable;
    long long _style;
}

@property (readonly, nonatomic) TFNFormFieldDataItemAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItemsDataViewController:(id)controller style:(long long)style submittabilityChangedAction:(id /* block */)action autosubmitAction:(id /* block */)action;
- (void)dealloc;
- (id)sectionsForForm:(id)form;
- (long long)submittabilityWithForm:(id)form;
- (void)beginEditingNextItemSkippingValidFields:(_Bool)fields;
- (void)formFieldAdapter:(id)adapter didBeginEditingForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didSelectNextForItem:(id)item;
- (void)formFieldAdapter:(id)adapter didChangeBadgeType:(long long)type forItem:(id)item;
- (void)formFieldAdapter:(id)adapter didUpdateVisibilityForItems:(id)items;
- (void)private_beginEditingNextItemAfterItem:(id)item skipValid:(_Bool)valid autoSubmit:(_Bool)submit;
- (void)private_checkSubmittabilityChangeWithItem:(id)item;
- (long long)private_submittabilityWithItem:(id)item;
- (id)private_itemForFieldItem:(id)item withForm:(id)form;
- (id)private_itemForFormField:(id)field;
- (id)private_itemForFormBooleanItem:(id)item;
- (id)private_styledItemForItem:(id)item;
- (void)private_formFieldDidUpdateUserInput:(id)input;
- (void)private_formFieldDidUpdateValidity:(id)validity;

@end

#endif /* TFNFormFieldHelper_h */
