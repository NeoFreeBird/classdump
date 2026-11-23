//
#ifndef _TtC12XPhotoEditor17EditorToolbarView_h
#define _TtC12XPhotoEditor17EditorToolbarView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class UIView, _$sSa -> XPhotoEditor.MediaEditorToolbarItemView, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC;

@interface XPhotoEditor.EditorToolbarView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    Swift.Array -> XPhotoEditor.MediaEditorToolbarItemView itemViews;
    __C.UIScrollView scrollView;
    __C.CAGradientLayer edgeFadeMask;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor17EditorToolbarView_h */
