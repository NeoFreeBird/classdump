//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotWeatherHourView_h
#define _TtC11ChatGrokBot22GrokBotWeatherHourView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotWeatherHourView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView glyphView;
    __C.UILabel readoutLabel;
    __C.UILabel timeLabel;
    __C.UILabel valueLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot22GrokBotWeatherHourView_h */
