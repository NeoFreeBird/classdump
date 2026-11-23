//
#ifndef UIView_TUIImageViewFetchable_h
#define UIView_TUIImageViewFetchable_h
@import Foundation;

@interface UIView (TUIImageViewFetchable)

/* class methods */
+ (void)spacesUpdateViewWithChanges:(id /* block */)changes animated:(_Bool)animated completion:(id /* block */)completion;
+ (void)useYOLayout;
+ (void)yo_exchangeImplementation:(SEL)implementation withImplementation:(SEL)implementation;
+ (long long)ptv_interfaceOrientationFromVideoOrientation:(long long)orientation;
+ (void)ptv_animateWithDuration:(double)duration delay:(double)delay options:(unsigned long long)options animations:(id /* block */)animations completion:(id /* block */)completion shouldAnimate:(_Bool)animate;
+ (void)ptv_animateWithDuration:(double)duration animations:(id /* block */)animations completion:(id /* block */)completion shouldAnimate:(_Bool)animate;
+ (void)ptv_animateWithDuration:(double)duration animations:(id /* block */)animations shouldAnimate:(_Bool)animate;
+ (void)ptv_animateWithDuration:(double)duration delay:(double)delay usingSpringWithDamping:(double)damping initialSpringVelocity:(double)velocity options:(unsigned long long)options animations:(id /* block */)animations completion:(id /* block */)completion shouldAnimate:(_Bool)animate;

/* instance methods */
- (void)tdt_swizzled_layoutSubviews;
- (void)setLayout:(id)layout;
- (id)layout;
- (void)viewInit;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_initWithCoder:(id)coder;
- (void)yo_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)yo_layoutSubviews;
- (struct CGSize { double x0; double x1; })yo_sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)yo_setNeedsLayout;
- (void)layoutView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tav_boundsForClippingDescendants;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tav_boundsClippedByAncestors;
- (_Bool)tav_isVisibleAndInFront;
- (void)setVisible:(_Bool)visible;
- (_Bool)visible;
- (_Bool)ptv_isInPortraitOrientation;
- (id)see_constrain:(long long)see_constrain toBe:(long long)be toValue:(double)value priority:(float)priority;
- (id)see_constrain:(long long)see_constrain toValue:(double)value priority:(float)priority;
- (id)see_constrain:(long long)see_constrain toValue:(double)value;
- (id)see_constrain:(long long)see_constrain toBe:(long long)be to:(long long)to ofView:(id)view offsetBy:(double)by priority:(float)priority activate:(_Bool)activate;
- (id)see_constrain:(long long)see_constrain toView:(id)view;
- (id)see_constrain:(long long)see_constrain to:(long long)to ofView:(id)view;
- (id)see_constrain:(long long)see_constrain toView:(id)view offsetBy:(double)by;
- (id)see_constrain:(long long)see_constrain to:(long long)to ofView:(id)view offsetBy:(double)by;
- (id)see_constrain:(long long)see_constrain to:(long long)to ofView:(id)view offsetBy:(double)by activate:(_Bool)activate;
- (void)see_constrainSidesToView:(id)view;
- (id)see_ancestorSharedWithView:(id)view;
- (void)see_constrainVerticalEdgesToMarginsOfView:(id)view;
- (void)see_constrainHorizontalEdgesToMarginsOfView:(id)view;
- (void)see_constrainToMarginsOfView:(id)view;
- (void)see_constrainToEdgesOfView:(id)view;
- (void)ptv_addAutoLayoutSubviews:(id)subviews;
- (void)ptv_addAutoLayoutSubviews:(id)subviews constraints:(id)constraints;
- (void)ptv_insertAutoLayoutSubview:(id)subview atIndex:(long long)index constraints:(id)constraints;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ptv_systemSafeAreaInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_ptv_systemSafeAreaGetWindow:(out id *)window;
- (double)_ptv_statusBarHeight;
- (id)tui_fetchHelper;
- (void)setTui_fetchHelper:(id)helper;

@end

#endif /* UIView_TUIImageViewFetchable_h */
