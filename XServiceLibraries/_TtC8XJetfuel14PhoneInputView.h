//
#ifndef _TtC8XJetfuel14PhoneInputView_h
#define _TtC8XJetfuel14PhoneInputView_h
@import Foundation;

@class PhoneNumberKit.PhoneNumberTextField, PhoneNumberKit.PhoneNumberUtility, UIView;

@interface XJetfuel.PhoneInputView : UIView { // (Swift)
    /* instance variables */
    PhoneNumberKit.PhoneNumberTextField phoneNumberTextField;
    PhoneNumberKit.PhoneNumberUtility phoneNumberUtility;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC8XJetfuel14PhoneInputView_h */
