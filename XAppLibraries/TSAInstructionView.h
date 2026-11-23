//
#ifndef TSAInstructionView_h
#define TSAInstructionView_h
@import Foundation;

#include "TFNDismissableView-Protocol.h"

@class NSArray, TFNButton, UILabel, UIView;
@protocol TFNDismissDelegate;

@interface TSAInstructionView : UIView <TFNDismissableView> {
    /* instance variables */
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSArray *_itemImages;
    NSArray *_itemLabels;
    TFNButton *_openSettingsButton;
    TFNButton *_dismissButton;
}

@property (weak, nonatomic) id <TFNDismissDelegate> dismissDelegate;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithTitle:(id)title message:(id)message items:(id)items;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)dismiss:(id)dismiss;
- (void)openSettings:(id)settings;

@end

#endif /* TSAInstructionView_h */
