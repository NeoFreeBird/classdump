//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotWeatherDayRowView_h
#define _TtC11ChatGrokBot24GrokBotWeatherDayRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotWeatherDayRowView.Columns, ChatGrokBot.GrokBotWeatherRangeBarView, UIControl, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotWeatherDayRowView : UIControl { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotWeatherDayRowView.Columns columns;
    (() -> ())? onTap;
    ChatGrokBot.GrokBotWeatherRangeBarView barView;
    __C.UIImageView glyphView;
    __C.UILabel highLabel;
    __C.UILabel lowLabel;
    __C.UILabel readoutLabel;
    __C.UILabel weekdayLabel;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotWeatherDayRowView_h */
