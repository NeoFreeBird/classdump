//
#ifndef _TtC11ChatGrokBot28GrokBotFlightTravelerRowView_h
#define _TtC11ChatGrokBot28GrokBotFlightTravelerRowView_h
@import Foundation;

@class UIView, _$sSS, _$sSSSg, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightTravelerRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel detailLabel;
    __C.UILabel headingLabel;
    __C.UILabel prefilledLabel;
    Swift.String heading;
    Swift.String? prefilled;
    Swift.String? type;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot28GrokBotFlightTravelerRowView_h */
