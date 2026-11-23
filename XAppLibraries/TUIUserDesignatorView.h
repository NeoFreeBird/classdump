//
#ifndef TUIUserDesignatorView_h
#define TUIUserDesignatorView_h
@import Foundation;

@class UIView;

@interface TUIUserDesignatorView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 label;
    @40@0:8:16@24@32 iconImageView;
    @40@0:8:16@24@32 $__lazy_storage_$_longPressGesture;
    @40@0:8:16@24@32 didTapViewHandler;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeFor:(id)_for;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap:(id)tap;
- (void)configureWithText:(id)text icon:(long long)icon didTapView:(id /* block */)view;
- (void)configureWithForegroundColor:(id)color;

@end

#endif /* TUIUserDesignatorView_h */
