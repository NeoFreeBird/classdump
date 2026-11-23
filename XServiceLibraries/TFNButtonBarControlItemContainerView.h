//
#ifndef TFNButtonBarControlItemContainerView_h
#define TFNButtonBarControlItemContainerView_h
@import Foundation;

#include "TFNButton.h"
#include "TFNButtonBarControlItem.h"

@class UILongPressGestureRecognizer, UIView;

@interface TFNButtonBarControlItemContainerView : UIView

@property (readonly, nonatomic) TFNButtonBarControlItem *item;
@property (readonly, nonatomic) TFNButton *button;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForItem:(id)item sizeClass:(long long)_class;

/* instance methods */
- (id)initWithItem:(id)item sizeClass:(long long)_class;
- (void)_tfn_didTapButton:(id)button;
- (void)_tfn_didLongPressButton:(id)button;
- (void)_tfn_presentMenuSheetWithItems:(id)items sender:(id)sender;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* TFNButtonBarControlItemContainerView_h */
