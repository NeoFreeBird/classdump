//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot26GrokBotPublishHostLineView_h
#define _TtC11ChatGrokBot26GrokBotPublishHostLineView_h
@import Foundation;

@class UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotPublishHostLineView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot26GrokBotPublishHostLineView_h */
