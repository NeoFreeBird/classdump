//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotWeatherHeaderView_h
#define _TtC11ChatGrokBot24GrokBotWeatherHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotWeatherForecast.Scale _$scSg ->, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotWeatherHeaderView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button celsiusButton;
    __C.UILabel conditionLabel;
    nominal type descriptor for XDesignSystem.Button fahrenheitButton;
    __C.UILabel firstLineLabel;
    __C.UIImageView glyphView;
    __C.UILabel locationLabel;
    __C.UILabel secondLineLabel;
    __C.UILabel temperatureLabel;
    ChatGrokBot.GrokBotWeatherForecast.Scale _$scSg -> onPickScale;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotWeatherHeaderView_h */
