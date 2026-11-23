//
#ifndef _TtC4Grok20GrokUsageCreditsView_h
#define _TtC4Grok20GrokUsageCreditsView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo7UILabelC;

@interface Grok.GrokUsageCreditsView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isRevealed;
    __C.UILabel titleLabel;
    __C.UILabel balanceLabel;
    __C.UILabel noteLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok20GrokUsageCreditsView_h */
