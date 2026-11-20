//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposePollingCardPreviewView_h
#define TCRComposePollingCardPreviewView_h
@import Foundation;

#include "TCRAccordionButton.h"
#include "TCRDurationPickerView.h"

@class NSArray, NSMutableArray, NSMutableDictionary, TFNButton, UIImage, UIImageView, UILabel, UIView;
@protocol TCRComposePollingCardPreviewViewDelegate;

@interface TCRComposePollingCardPreviewView : UIView

@property (retain, nonatomic) NSArray *textFields;
@property (retain, nonatomic) UIView *durationContainer;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) TCRDurationPickerView *durationPicker;
@property (retain, nonatomic) UIView *audienceSelectorContainer;
@property (retain, nonatomic) UIView *audienceSelectorSeparator;
@property (retain, nonatomic) UILabel *audienceSelectorLabel;
@property (retain, nonatomic) TFNButton *audienceSelectorButton;
@property (retain, nonatomic) NSMutableArray *imageButtons;
@property (retain, nonatomic) NSMutableDictionary *choiceImages;
@property (retain, nonatomic) UIImage *placeholderIcon;
@property (retain, nonatomic) TFNButton *endsInButton;
@property (retain, nonatomic) UIImageView *endsInIconView;
@property (retain, nonatomic) NSMutableArray *trashButtons;
@property (weak, nonatomic) id <TCRComposePollingCardPreviewViewDelegate> delegate;
@property (readonly, nonatomic) TFNButton *removeButton;
@property (readonly, nonatomic) TFNButton *addChoiceButton;
@property (readonly, nonatomic) TCRAccordionButton *durationButton;
@property (nonatomic) _Bool imagePickerEnabled;
@property (readonly, nonatomic) _Bool composerRedesignEnabled;
@property (readonly, nonatomic) _Bool canAddAnotherChoice;
@property (nonatomic) unsigned long long numberOfVisibleChoices;
@property (nonatomic) _Bool durationPickerVisible;
@property (nonatomic) _Bool isAudienceSelectorVisible;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame minInterval:(double)interval maxInterval:(double)interval composerRedesignEnabled:(_Bool)enabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)choiceTextFields;
- (id)_choiceFieldForIndex:(long long)index;
- (id)_createImageButtonForIndex:(long long)index;
- (void)_imageButtonTapped:(id)tapped;
- (id)_createTrashButtonForIndex:(long long)index;
- (void)_trashButtonTapped:(id)tapped;
- (id)_redesignAlarmIcon;
- (void)layoutSubviews;
- (void)_updateTextFieldsPositionsForNumberOfChoices:(long long)choices;
- (_Bool)_shouldShowTrashForChoiceAtIndex:(long long)index numChoices:(long long)choices;
- (void)_updateAddChoiceButtonForNumberOfChoices:(long long)choices;
- (void)_layoutEndsInRowWithContainerSize:(struct CGSize { double x0; double x1; })size;
- (double)_textFieldsHeightForNumberOfChoices:(unsigned long long)choices;
- (double)_heightForNumberOfVisibleChoices:(unsigned long long)choices;
- (void)_applyAddChoiceButtonStylingForRedesign:(_Bool)redesign;
- (void)_updatePlaceholderIconForRedesign:(_Bool)redesign;
- (void)_applyImageButtonStyling:(id)styling hasImage:(_Bool)image;
- (void)_applyRemoveButtonStylingForRedesign:(_Bool)redesign;
- (void)setNumberOfVisibleChoices:(unsigned long long)choices animated:(_Bool)animated;
- (void)_endingHiddenStateForChoices:(unsigned long long)choices;
- (void)_endingAlphaStateForChoices:(unsigned long long)choices;
- (void)setDurationPickerVisible:(_Bool)visible animated:(_Bool)animated animations:(id /* block */)animations;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)accessibilityElements;
- (void)setImage:(id)image forChoiceAtIndex:(unsigned long long)index;
- (id)imageForChoiceAtIndex:(unsigned long long)index;
- (_Bool)hasImageForChoiceAtIndex:(unsigned long long)index;

@end

#endif /* TCRComposePollingCardPreviewView_h */
