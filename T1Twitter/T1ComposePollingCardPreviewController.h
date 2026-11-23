//
#ifndef T1ComposePollingCardPreviewController_h
#define T1ComposePollingCardPreviewController_h
@import Foundation;

#include "T1ComposePollingCardPreviewControllerDelegate-Protocol.h"
#include "TCRComposePollingCardPreviewViewDelegate-Protocol.h"
#include "TCRDurationPickerViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"
#include "_TtP15TwitterComposer43ComposePollingCardPreviewControllerProtocol_-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, TCRAccordionButton, TCRComposePollingCardPreviewView, TFNButton, TFNTwitterAccount, TFNViewController, UITextField;
@protocol PollingCardProtocol;

@interface T1ComposePollingCardPreviewController : TFNViewController <UITextFieldDelegate, TCRDurationPickerViewDelegate, TCRComposePollingCardPreviewViewDelegate, TwitterComposer.ComposePollingCardPreviewControllerProtocol>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TCRComposePollingCardPreviewView *view;
@property (weak, nonatomic) TFNButton *removeButton;
@property (weak, nonatomic) TFNButton *addChoiceButton;
@property (weak, nonatomic) TCRAccordionButton *durationButton;
@property (retain, nonatomic) NSMutableArray *textFields;
@property (retain, nonatomic) NSMutableSet *textFieldFocusMap;
@property (weak, nonatomic) TFNButton *audienceSelectorButton;
@property (nonatomic) long long selectedAudienceType;
@property (weak, nonatomic) id <T1ComposePollingCardPreviewControllerDelegate> delegate;
@property (retain, nonatomic) id <PollingCardProtocol> pollingCard;
@property (readonly, nonatomic) _Bool isFocused;
@property (readonly, nonatomic) UITextField *activeTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)focusView;
- (void)_updateView;
- (void)_updateTextFields;
- (void)_updateDurationButton;
- (void)_updateRemainingCountInTextField:(id)field forString:(id)string;
- (void)_animateShowPollComposeView;
- (void)_animateRemovePollComposeViewWithAnimations:(id /* block */)animations;
- (void)loadView;
- (void)viewDidLoad;
- (void)_didTapAddChoiceButton:(id)button;
- (void)_didTapDurationButton:(id)button;
- (void)_didTapRemoveButton:(id)button;
- (void)removePollComposeViewAnimated:(_Bool)animated;
- (void)_didTapAudienceSelectorButton:(id)button;
- (void)_removeImageForChoiceAtIndex:(unsigned long long)index;
- (id)_audienceSelectorActionItemsWithSelectedOption:(long long)option;
- (void)_didUpdateAudienceSelection:(long long)selection;
- (id)_audienceSelectorlabelStringFor:(long long)_for;
- (_Bool)textFieldShouldBeginEditing:(id)editing;
- (_Bool)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)_textFieldDidChange:(id)change;
- (void)_updateCompositionText:(id)text forTextField:(id)field;
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)pickerView:(id)view didChangeTimeInterval:(double)interval;
- (void)pollingCardPreviewView:(id)view didTapImageButtonForChoiceAtIndex:(unsigned long long)index;
- (void)pollingCardPreviewView:(id)view didTapTrashButtonForChoiceAtIndex:(unsigned long long)index;
- (void)_presentImagePickerForChoiceAtIndex:(unsigned long long)index;
- (void)_showImageOptionsActionSheetForChoiceAtIndex:(unsigned long long)index;
- (void)reloadImageAssets;
- (id)imageAssetsByChoiceIndex;

@end

#endif /* T1ComposePollingCardPreviewController_h */
