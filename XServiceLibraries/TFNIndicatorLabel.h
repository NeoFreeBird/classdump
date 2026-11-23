//
#ifndef TFNIndicatorLabel_h
#define TFNIndicatorLabel_h
@import Foundation;

#include "TFNIndicatorLabelConfiguration.h"
#include "TFNSwiftUIComponentRepresentable-Protocol.h"

@class UIView;

@interface TFNIndicatorLabel : UIView <TFNSwiftUIComponentRepresentable> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 hStack;
    B24@0:8@"NSString"16 label;
    B24@0:8@"NSString"16 imageView;
    B24@0:8@"NSString"16 staticConstraints;
    B24@0:8@"NSString"16 dynamicConstraints;
}

@property (nonatomic, retain) TFNIndicatorLabelConfiguration *configuration;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForConfiguration:(id)configuration;

/* instance methods */
- (void)applySwiftUIConfiguration:(id)uiconfiguration;
- (id)initWithConfiguration:(id)configuration;
- (void)updateConstraints;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sizeToFit;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TFNIndicatorLabel_h */
