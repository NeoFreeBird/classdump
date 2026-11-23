//
#ifndef PTVActionSheetContainerView_h
#define PTVActionSheetContainerView_h
@import Foundation;

#include "PTVActionSheetContainerViewDelegate-Protocol.h"
#include "PTVActionSheetView.h"

@class UIView;

@interface PTVActionSheetContainerView : UIView {
    /* instance variables */
    id <PTVActionSheetContainerViewDelegate> _delegate;
}

@property (readonly, nonatomic) PTVActionSheetView *actionSheet;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ActionSheetFrame:(struct CGSize { double x0; double x1; })frame ActionSheetContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

/* instance methods */
- (void)layoutSubviews;
- (void)layoutActionSheetView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame actionSheetView:(id)view delegate:(id)delegate;
- (void)tapOccurred:(id)occurred;
- (void)dismiss;

@end

#endif /* PTVActionSheetContainerView_h */
