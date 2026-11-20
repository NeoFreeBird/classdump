//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
