//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotMediaGridView_h
#define _TtC11ChatGrokBot20GrokBotMediaGridView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSa -> ChatGrokBot.GrokBotMediaCellView, _$sSa -> ChatGrokBot.GrokBotMessageViewModel.Attachment, _$sSo6UIViewC, _$sSo7UILabelC, _$sySS_So6UIViewCtcSg, _$sySScSg;

@interface ChatGrokBot.GrokBotMediaGridView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onLongPressAttachment;
    ((Swift.String, __C.UIView) -> ())? onTapAttachment;
    Swift.Bool ownsHorizontalPans;
    __C.UILabel moreCountLabel;
    __C.UIView moreCountOverlayView;
    Swift.Array -> ChatGrokBot.GrokBotMessageViewModel.Attachment attachments;
    Swift.Array -> ChatGrokBot.GrokBotMediaCellView cellViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapCell:(id)cell;

@end

#endif /* _TtC11ChatGrokBot20GrokBotMediaGridView_h */
