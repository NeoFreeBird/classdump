//
#ifndef UIView_TFNAdditions_h
#define UIView_TFNAdditions_h
@import Foundation;

@interface UIView (TFNAdditions)

/* class methods */
+ (_Bool)tfn_snapshotIsBeingGenerated;
+ (_Bool)tfn_snapshotNextSnapshotGenerationRequiresUpdates;
+ (void)setTfn_snapshotNextSnapshotGenerationRequiresUpdates:(_Bool)updates;
+ (void)prepareStartSnapshotViewAfterScreenUpdates;
+ (void)prepareFinishSnapshotViewAfterScreenUpdates;
+ (void)load;
+ (void)tfn_performWithoutAnimation:(id /* block */)animation;
+ (_Bool)tfn_isStatusBarHidden:(id)hidden;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_systemSafeAreaInsets:(id)insets;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_standardSystemSafeAreaInsets:(id)insets forInterfaceOrientation:(long long)orientation statusBarHidden:(_Bool)hidden;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_standardSystemSafeAreaInsetsForWindow:(id)window safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets interfaceOrientation:(long long)orientation statusBarHidden:(_Bool)hidden;

/* instance methods */
- (id)_tfn_dynamic_swizzledSnapshotViewAfterScreenUpdates:(_Bool)updates;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_frameFromCenterAndBounds;
- (void)setTfn_frameFromCenterAndBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)tfn_updateBoundsToSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tfn_animateBounce;
- (id)tfn_viewController;
- (void)tfn_applyOnViewTree:(id /* block */)tree;
- (id)tfn_firstViewOfClass:(Class)_class;
- (_Bool)tfn_isDescendantOfViewOfType:(Class)type;
- (_Bool)tfn_isInPopover;
- (_Bool)tfn_isInViewHierarchyAndViewFrameContainsPoint:(struct CGPoint { double x0; double x1; })point;
- (id)tfn_snapshotAfterScreenUpdates:(_Bool)updates;
- (id)tfn_snapshotViewAfterScreenUpdates:(_Bool)updates;
- (id)tfn_snapshot;
- (id)tfn_snapshotAfterAnimations;
- (long long)tfn_overrideUserInterfaceStyle;
- (void)setTfn_overrideUserInterfaceStyle:(long long)style;
- (void)tfn_applyShadow;
- (void)tfn_applyShadowWithOffset:(struct CGSize { double x0; double x1; })offset radius:(double)radius opacity:(double)opacity;
- (void)tfn_removeShadow;
- (_Bool)tfn_isInvisible;
- (_Bool)tfn_isHidden;
- (void)setTfn_hidden:(_Bool)tfn_hidden;
- (_Bool)tfn_navigationControllerBackGestureEnabled;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_systemSafeAreaInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_systemSafeAreaInsetsWithStatusBarHidden:(_Bool)hidden;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_systemSafeAreaInsetsWithTraitCollection:(id)collection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tfn_systemSafeAreaInsetsWithStatusBarHidden:(_Bool)hidden traitCollection:(id)collection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_systemSafeAreaWithStatusBarHidden:(_Bool)hidden traitCollection:(id)collection getWindow:(out id *)window;
- (void)tfn_addAutoLayoutSubview:(id)subview;
- (void)tfn_addAutoLayoutSubviews:(id)subviews;
- (void)tfn_addAutoLayoutSubviews:(id)subviews withConstraints:(id)constraints;
- (void)tfn_addFullSizeSubview:(id)subview;
- (void)tfn_addFullSizeSubview:(id)subview padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)tfn_setCompressionResistanceAndHuggingRequired;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)axis distribution:(long long)distribution;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)axis;
- (id)tfn_ancestry;
- (struct CGSize { double x0; double x1; })tfn_dimensions;
- (void)tfn_optOutViewTreeOfInvertColorsIfNeeded;
- (void)tfn_updateAccessibilityIgnoresInvertColorsOnViewTree;
- (void)tfn_pinToLayoutGuide:(id)guide;
- (void)tfn_pinToLayoutGuide:(id)guide withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)tfn_pinToView:(id)view;
- (void)tfn_pinToView:(id)view withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)tfn_addBorderViews:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })views color:(id)color;
- (void)tfn_removeAllBorderViews;

@end

#endif /* UIView_TFNAdditions_h */
