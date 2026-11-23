//
#ifndef _TtC11ChatGrokBot31GrokBotCarRentalDetailTitleView_h
#define _TtC11ChatGrokBot31GrokBotCarRentalDetailTitleView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCarRentalDetailTitleView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel companyLabel;
    __C.UIImageView logoView;
    __C.UILabel nameLabel;
    __C.UILabel specsLabel;
    nominal type descriptor for Foundation.URL ? logoURL;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot31GrokBotCarRentalDetailTitleView_h */
