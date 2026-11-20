//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotFlightLegView_h
#define _TtC11ChatGrokBot20GrokBotFlightLegView_h
@import Foundation;

@class UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightLegView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel dateLabel;
    __C.UILabel noteLabel;
    __C.UILabel timesLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotFlightLegView_h */
