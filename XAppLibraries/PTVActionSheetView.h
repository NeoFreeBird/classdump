//
#ifndef PTVActionSheetView_h
#define PTVActionSheetView_h
@import Foundation;

#include "PTVActionSheetButton.h"
#include "PTVActionSheetViewDelegate-Protocol.h"

@class NSArray, UIScrollView, UIView;

@interface PTVActionSheetView : UIView {
    /* instance variables */
    UIView *_headerView;
    UIView *_buttonsBackgroundView;
    PTVActionSheetButton *_dismissButton;
    UIScrollView *_actionSheetScrollView;
    UIView *_actionSheetBackgroundView;
    id <PTVActionSheetViewDelegate> _delegate;
}

@property (readonly, nonatomic) NSArray *actionButtons;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })maxButtonSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)delegate attributedMessage:(id)message attributedDismissTitle:(id)title otherButtonTitles:(id)titles;
- (_Bool)accessibilityPerformEscape;
- (id)actionButtonWithAttributedTitle:(id)title;
- (id)dismissButtonWithAttributedTitle:(id)title;
- (id)headerViewWithAttributedTitle:(id)title;
- (void)dismissButtonPressed:(id)pressed;
- (void)actionButtonPressed:(id)pressed;

@end

#endif /* PTVActionSheetView_h */
