//
#ifndef _TtC11ChatGrokBot27GrokBotTimelineEventRowView_h
#define _TtC11ChatGrokBot27GrokBotTimelineEventRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageListViewListener ?, ChatGrokBot.GrokBotTimelineEventViewModel.Kind, UIControl, _$sSS, _$sSo7NSTimerCSg, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotTimelineEventRowView : UIControl { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageListViewListener ? listener;
    (() -> ())? onLongPress;
    __C.UILabel textLabel;
    __C.NSTimer? clockTimer;
    Swift.String eventID;
    ChatGrokBot.GrokBotTimelineEventViewModel.Kind kind;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot27GrokBotTimelineEventRowView_h */
