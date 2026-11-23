//
#ifndef _TtC11ChatGrokBot29GrokBotFlightSegmentStopsView_h
#define _TtC11ChatGrokBot29GrokBotFlightSegmentStopsView_h
@import Foundation;

@class UIView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightSegmentStopsView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel arrivalLabel;
    __C.UIView arrivalDot;
    __C.UIView departureDot;
    __C.UILabel departureLabel;
    __C.UILabel durationLabel;
    __C.UIView railLine;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot29GrokBotFlightSegmentStopsView_h */
