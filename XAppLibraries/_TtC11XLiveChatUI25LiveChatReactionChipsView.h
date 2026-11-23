//
#ifndef _TtC11XLiveChatUI25LiveChatReactionChipsView_h
#define _TtC11XLiveChatUI25LiveChatReactionChipsView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class UIView, _$s12CoreGraphics7CGFloatVMn boundsWidth_AA07contentB0tSg, _$sSa -> XLiveChatUI.LiveChatReactionChipsView.Chip, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC, _$sSo25UIImpactFeedbackGeneratorC, _$sySScSg;

@interface XLiveChatUI.LiveChatReactionChipsView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onTap;
    __C.UIScrollView scrollView;
    __C.CAGradientLayer fadeLayer;
    Swift.Array -> XLiveChatUI.LiveChatReactionChipsView.Chip chips;
    nominal type descriptor for CoreGraphics.CGFloat boundsWidth_AA07contentB0tSg lastRestingGeometry;
    __C.UIImpactFeedbackGenerator hapticGenerator;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11XLiveChatUI25LiveChatReactionChipsView_h */
