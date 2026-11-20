//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI28PlayableDetailsContainerView_h
#define _TtC21TwitterUnifiedCardsUI28PlayableDetailsContainerView_h
@import Foundation;

#include "TUCLayoutContext.h"
#include "TUCLayoutableView.h"

@class _$sSo16TUCComponentView_So6UIViewCXcSg, _$sSo16TUCLayoutContextCSg;

@interface TwitterUnifiedCardsUI.PlayableDetailsContainerView : TUCLayoutableView { // (Swift)
    /* instance variables */
    (__C.UIView & __C.TUCComponentView)? componentView;
    __C.TUCLayoutContext? layoutContextCopy;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) TUCLayoutContext *layoutContext;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC21TwitterUnifiedCardsUI28PlayableDetailsContainerView_h */
