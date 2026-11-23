//
#ifndef PTVManageGuestCallersActionsCollectionViewCell_h
#define PTVManageGuestCallersActionsCollectionViewCell_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVManageGuestCallersActionsCollectionViewCellDelegate-Protocol.h"

@class UICollectionViewCell;

@interface PTVManageGuestCallersActionsCollectionViewCell : UICollectionViewCell {
    /* instance variables */
    PTVExtendedButton *_requestCallersButton;
    PTVExtendedButton *_disableCallersButton;
}

@property (weak, nonatomic) id <PTVManageGuestCallersActionsCollectionViewCellDelegate> delegate;
@property (nonatomic) _Bool isRequestCallersButtonVisible;
@property (nonatomic) _Bool isDisableCallersButtonSelected;

/* class methods */
+ (double)ButtonHeight;
+ (double)HeightThatFits:(_Bool)fits;

/* instance methods */
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)requestCallersAttributedTitle:(_Bool)title;
- (id)disableCallersAttributedTitle;
- (id)enableCallersAttributedTitle;
- (void)buttonBackgroundColorState;
- (void)reconcileButtonState;
- (void)didSelectRequestCallersButton;
- (void)didSelectDisableCallersButton;

@end

#endif /* PTVManageGuestCallersActionsCollectionViewCell_h */
