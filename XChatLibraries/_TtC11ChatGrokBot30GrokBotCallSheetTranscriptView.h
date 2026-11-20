//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotCallSheetTranscriptView_h
#define _TtC11ChatGrokBot30GrokBotCallSheetTranscriptView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotCallSheetTranscriptView.Item, _$sSaySo6UIViewCG, _$sSo7UIColorCSg;

@interface ChatGrokBot.GrokBotCallSheetTranscriptView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> ChatGrokBot.GrokBotCallSheetTranscriptView.Item items;
    [__C.UIView] itemViews;
    __C.UIColor? userBubbleColor;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot30GrokBotCallSheetTranscriptView_h */
