//
#ifndef TFNModuleHeaderTextActionConfiguration_h
#define TFNModuleHeaderTextActionConfiguration_h
@import Foundation;

#include "TFNModuleHeaderActionConfiguration.h"

@class NSString;

@interface TFNModuleHeaderTextActionConfiguration : TFNModuleHeaderActionConfiguration

@property (readonly, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) id /* block */ textTapBlock;

/* class methods */
+ (id)configurationWithText:(id)text onButtonTap:(id /* block */)tap;
+ (long long)_tfn_underlyingButtonSizeClass;

/* instance methods */
- (id)initWithText:(id)text onButtonTap:(id /* block */)tap;
- (struct CGSize { double x0; double x1; })_tfn_intrinsicContentSize;
- (void)_tfn_buttonWasTapped:(id)tapped;

@end

#endif /* TFNModuleHeaderTextActionConfiguration_h */
