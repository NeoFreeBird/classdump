//
#ifndef TFNCustomBarButtonItemButton_h
#define TFNCustomBarButtonItemButton_h
@import Foundation;

#include "TFNBarButtonItemButton.h"

@class UIView;
@protocol TFNCustomBarButtonItemView;

@interface TFNCustomBarButtonItemButton : TFNBarButtonItemButton

@property (readonly, nonatomic) UIView<TFNCustomBarButtonItemView> *customView;

/* instance methods */
- (id)initWithCustomView:(id)view;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setEnabled:(_Bool)enabled;
- (void)layoutSubviews;

@end

#endif /* TFNCustomBarButtonItemButton_h */
