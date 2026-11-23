//
#ifndef _TtC4Grok21GrokIncludedUsageView_h
#define _TtC4Grok21GrokIncludedUsageView_h
@import Foundation;

@class Grok.GrokUsageMeterView, UIView, _$sSo7UILabelC;

@interface Grok.GrokIncludedUsageView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UILabel percentLabel;
    Grok.GrokUsageMeterView meter;
    __C.UILabel resetLabel;
    __C.UILabel limitLabel;
    __C.UILabel noteLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok21GrokIncludedUsageView_h */
