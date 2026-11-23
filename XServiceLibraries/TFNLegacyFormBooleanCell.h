//
#ifndef TFNLegacyFormBooleanCell_h
#define TFNLegacyFormBooleanCell_h
@import Foundation;

#include "TFNBooleanItem.h"
#include "TFNLegacyFormBaseCell.h"

@interface TFNLegacyFormBooleanCell : TFNLegacyFormBaseCell {
    /* instance variables */
    id /* block */ _updateAction;
}

@property (readonly, nonatomic) TFNBooleanItem *booleanItem;

/* class methods */
+ (id)cellForCollectionView:(id)view withItem:(id)item appearance:(id)appearance options:(id)options indexPath:(id)path updateAction:(id /* block */)action;
+ (double)heightForBooleanItem:(id)item withWidth:(double)width appearance:(id)appearance options:(id)options layoutMetrics:(id)metrics customizeAction:(id /* block */)action;
+ (void)private_configureCell:(id)cell withItem:(id)item options:(id)options forAppearance:(id)appearance;
+ (void)private_setAccessoryUpdateBlockForItem:(id)item withDisplayableCell:(id)cell;
+ (void)private_setCheckmarkAccessoryForCell:(id)cell withItem:(id)item;
+ (void)private_setToggleSwitchAccessoryForCell:(id)cell withItem:(id)item;
+ (id)private_checkmarkImageForItem:(id)item enabled:(_Bool)enabled;

/* instance methods */
- (double)heightOfPermanentContentForLayoutMetrics:(id)metrics;
- (void)layoutContentWithMetrics:(id)metrics;
- (void)private_performToggleSwitchAction:(id)action;
- (void)private_performCheckboxAction;
- (void)setSelected:(_Bool)selected;
- (_Bool)canHighlight;
- (id)_inputSwitchValueForState:(_Bool)state;
- (_Bool)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;

@end

#endif /* TFNLegacyFormBooleanCell_h */
