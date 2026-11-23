//
#ifndef TFNLegacyFormViewController_h
#define TFNLegacyFormViewController_h
@import Foundation;

#include "TFNItemsDataViewController.h"
#include "TFNLegacyForm.h"
#include "TFNLegacyFormAppearance.h"
#include "TFNLegacyFormDelegate-Protocol.h"
#include "TFNLegacyFormFieldCell.h"
#include "TFNLegacyFormFieldCellDelegate-Protocol.h"
#include "TFNLegacyFormView.h"
#include "TFNLegacyFormViewAdapterAppearanceProvider-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIButton, UICollectionViewFlowLayout;

@interface TFNLegacyFormViewController : TFNItemsDataViewController <TFNLegacyFormViewAdapterAppearanceProvider, TFNLegacyFormFieldCellDelegate, UICollectionViewDelegateFlowLayout, TFNLegacyFormDelegate>

@property (nonatomic) _Bool rotating;
@property (nonatomic) _Bool insetting;
@property (nonatomic) _Bool updating;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } topGutterFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bottomGutterFrame;
@property (retain, nonatomic) UIButton *preparedSubmitButton;
@property (retain, nonatomic) UIBarButtonItem *preparedDoneBarButtonItem;
@property (readonly, nonatomic) TFNLegacyFormView *formView;
@property (readonly, nonatomic) NSMutableDictionary *sectionTitleWidths;
@property (retain, nonatomic) TFNLegacyFormFieldCell *currentFormFieldCell;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedAutocompleteRange;
@property (readonly, nonatomic) UIButton *submitButton;
@property (readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (readonly, nonatomic) _Bool addsDoneBarButtonButtonItemToNavigationBar;
@property (nonatomic) _Bool disableContentOffsetAdjustment;
@property (readonly, nonatomic) unsigned long long inputRequiredBehavior;
@property (readonly, nonatomic) TFNLegacyForm *form;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;
@property (readonly, nonatomic) UICollectionViewFlowLayout *layout;
@property (readonly, nonatomic) NSArray *footerItems;
@property (readonly, nonatomic) double topInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } additionalGutterFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)collectionViewClass;

/* instance methods */
- (id)initWithForm:(id)form appearance:(id)appearance;
- (id)initWithBasicForm:(id)form;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)submitForm;
- (void)focusOnFirstFormFieldPassingTest:(id /* block */)test completion:(id /* block */)completion;
- (id)cellForFormItem:(id)item;
- (void)_adjustFormViewIfNecessaryForFormFieldCell:(id)cell;
- (void)_animateFormViewForFormFieldCell:(id)cell;
- (double)_formFieldTitleWidthForSection:(unsigned long long)section;
- (id)_nextFormFieldCellForFormFieldCell:(id)cell;
- (void)_resetSectionTitleWidths;
- (void)_updateFormFieldForUserInput:(id)input;
- (id)_firstFormFieldCellPassingTest:(id /* block */)test;
- (void)_dismissKeyboard;
- (void)_tfn_applyAppearance;
- (void)_addDoneBarButtonItem;
- (void)_updateFormViewDisableContentOffsetAdjustment;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)presentViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)update:(_Bool)update;
- (void)keyboardDidChange:(id)change;
- (void)updateContentOffsetWithContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset previousContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset previousContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)setSections:(id)sections;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (void)form:(id)form didChangeSubmittability:(_Bool)submittability;
- (void)formFieldCellTextFieldDidBeginEditing:(id)editing;
- (void)formFieldDidBeginEditingUserInput:(id)input withStopEditingAction:(id /* block */)action;
- (void)formFieldCell:(id)cell textField:(id)field didChangeText:(id)text;
- (void)formFieldDidUpdateUserInput:(id)input;
- (void)formFieldCell:(id)cell textFieldDidEndEditingValid:(_Bool)valid;
- (void)formFieldDidEndEditingUserInput:(id)input;
- (_Bool)formFieldCell:(id)cell textFieldShouldReturn:(id)_return;
- (_Bool)formFieldShouldReturn:(id)_return withSelectNextFieldAction:(id /* block */)action stopEditingAction:(id /* block */)action;
- (void)formFieldCell:(id)cell willAnimateToShowError:(_Bool)error;
- (_Bool)formFieldCellShouldShowRequiredHint:(id)hint;
- (_Bool)formFieldShouldShowRequiredHint:(id)hint;
- (_Bool)formFieldCellShouldAnimateHighlight:(id)highlight;
- (_Bool)formFieldCellShouldBecomeFirstResponderOnAppearance:(id)appearance;
- (double)formFieldCell:(id)cell maximumWidthForTitleAtIndexPath:(id)path;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (_Bool)isRotating;
- (_Bool)isInsetting;
- (_Bool)isUpdating;

@end

#endif /* TFNLegacyFormViewController_h */
