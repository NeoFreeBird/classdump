//
#ifndef _TtC11ChatGrokBot24GrokBotCalendarLinesView_h
#define _TtC11ChatGrokBot24GrokBotCalendarLinesView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSaySo7UILabelCG, _$sSo6UIViewCSg, __C.CGSize;

@interface ChatGrokBot.GrokBotCalendarLinesView : UIView { // (Swift)
    /* instance variables */
    __C.CGSize accessorySize;
    __C.UIView? accessoryView;
    Swift.Bool isFlowing;
    [__C.UILabel] labels;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot24GrokBotCalendarLinesView_h */
