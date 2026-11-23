//
#ifndef PTVReadOnlyModalView_h
#define PTVReadOnlyModalView_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVReadOnlyModalViewDelegate-Protocol.h"

@class UILabel, UIView;

@interface PTVReadOnlyModalView : UIView {
    /* instance variables */
    PTVExtendedButton *_dismissButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (nonatomic) unsigned long long chatState;
@property (weak, nonatomic) id <PTVReadOnlyModalViewDelegate> delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate chatState:(unsigned long long)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)dismissPressed;
- (void)updateTitleAndSubtitleLabels;

@end

#endif /* PTVReadOnlyModalView_h */
