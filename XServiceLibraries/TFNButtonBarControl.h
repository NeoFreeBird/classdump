//
#ifndef TFNButtonBarControl_h
#define TFNButtonBarControl_h
@import Foundation;

@class NSArray, UIStackView, UIView;

@interface TFNButtonBarControl : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIView *shadowView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long sizeClass;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) _Bool dropShadowEnabled;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForItems:(id)items sizeClass:(long long)_class;

/* instance methods */
- (id)init;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)isDropShadowEnabled;

@end

#endif /* TFNButtonBarControl_h */
