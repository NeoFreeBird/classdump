//
#ifndef TFNSettingsDescriptionContainerView_h
#define TFNSettingsDescriptionContainerView_h
@import Foundation;

#include "TFNAttributedTextView.h"
#include "TFNSettingsDescriptionItem.h"

@class NSAttributedString, UIView;

@interface TFNSettingsDescriptionContainerView : UIView {
    /* instance variables */
    NSAttributedString *_displayText;
    TFNAttributedTextView *_textView;
    TFNSettingsDescriptionItem *_item;
}

/* class methods */
+ (id)_t1_textModelForAttributedString:(id)string;
+ (struct CGSize { double x0; double x1; })sizeThatFitsItem:(id)item width:(double)width;

/* instance methods */
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setItem:(id)item forController:(id)controller;
- (void)private_setText:(id)text linkRanges:(id)ranges;
- (void)private_setTextViewDelegate:(id)delegate;
- (void)layoutSubviews;

@end

#endif /* TFNSettingsDescriptionContainerView_h */
