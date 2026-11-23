//
#ifndef TFNEmptyStateView_h
#define TFNEmptyStateView_h
@import Foundation;

#include "TFNEmptyStateConfiguration.h"
#include "TFNHorizontallyInsetView.h"

@interface TFNEmptyStateView : TFNHorizontallyInsetView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 sizeClassDependentConstraints;
    B24@0:8@"NSString"16 $__lazy_storage_$_containerLayoutGuideLeadingConstraint;
    B24@0:8@"NSString"16 $__lazy_storage_$_containerLayoutGuideTrailingConstraint;
    B24@0:8@"NSString"16 $__lazy_storage_$_containerLayoutGuideTopConstraint;
    B24@0:8@"NSString"16 containerLayoutGuide;
    B24@0:8@"NSString"16 semanticContentView;
    B24@0:8@"NSString"16 imageView;
}

@property (nonatomic, readonly) _Bool respectsMaxWidth;
@property (nonatomic, retain) TFNEmptyStateConfiguration *configuration;

/* instance methods */
- (void)safeAreaInsetsDidChange;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TFNEmptyStateView_h */
