//
#ifndef TFNDismissButton_h
#define TFNDismissButton_h
@import Foundation;

#include "TFNButton.h"

@interface TFNDismissButton : TFNButton

@property (nonatomic) unsigned long long type;

/* class methods */
+ (id)buttonForType:(unsigned long long)type;
+ (id)buttonForType:(unsigned long long)type style:(long long)style;
+ (id)buttonForType:(unsigned long long)type style:(long long)style sizeClass:(long long)_class;
+ (struct CGSize { double x0; double x1; })sizeForType:(unsigned long long)type;
+ (id)_imageNameForType:(unsigned long long)type;
+ (struct CGSize { double x0; double x1; })_fitsSizeForType:(unsigned long long)type;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_touchInsetsForType:(unsigned long long)type;

/* instance methods */
- (id)init;

@end

#endif /* TFNDismissButton_h */
