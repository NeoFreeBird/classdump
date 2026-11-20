//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21ChatMessageActionTray25MessageQuickReactionsView_h
#define _TtC21ChatMessageActionTray25MessageQuickReactionsView_h
@import Foundation;

@class UIView, _$sSaySo8UIButtonCG, _$sSo8UIButtonC, _$sySScSg, _$syycSg;

@interface ChatMessageActionTray.MessageQuickReactionsView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onReactionTap;
    (() -> ())? onMoreTap;
    [__C.UIButton] firstRowButtons;
    [__C.UIButton] secondRowButtons;
    __C.UIButton moreButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC21ChatMessageActionTray25MessageQuickReactionsView_h */
