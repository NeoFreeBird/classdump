//
#ifndef TTSStaticSearchBarView_h
#define TTSStaticSearchBarView_h
@import Foundation;

#include "TFNControlHostingNavigationBarTitleView-Protocol.h"
#include "TFNGlassFillingNavigationBarTitleView-Protocol.h"

@class NSString, UIView;

@interface TTSStaticSearchBarView : UIView <TFNControlHostingNavigationBarTitleView, TFNGlassFillingNavigationBarTitleView> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 searchBar;
    @40@0:8:16@24@32 tapRecognizer;
}

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleTap;

@end

#endif /* TTSStaticSearchBarView_h */
