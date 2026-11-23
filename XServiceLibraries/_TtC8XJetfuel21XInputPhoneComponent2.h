//
#ifndef _TtC8XJetfuel21XInputPhoneComponent2_h
#define _TtC8XJetfuel21XInputPhoneComponent2_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class JetfuelSDK.DOM.Element ?, JetfuelSDK.JetfuelFormController, JetfuelSDK.ViewContext, NSObject, PhoneNumberKit.PhoneNumberUtility, XJetfuel.PhoneInputView ?, XJetfuel.XInputPhoneComponent2.Props ?, _$sSS, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface XJetfuel.XInputPhoneComponent2 : NSObject <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    PhoneNumberKit.PhoneNumberUtility phoneNumberUtility;
    XJetfuel.PhoneInputView ? currentView;
    Swift.String? name;
    XJetfuel.XInputPhoneComponent2.Props ? props;
    Swift.String lastKnownRegion;
    JetfuelSDK.DOM.Element ? el;
    JetfuelSDK.JetfuelFormController formController;
}

/* instance methods */
- (void)textFieldDidChange:(id)change;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)flagButtonTapped;
- (id)init;

@end

#endif /* _TtC8XJetfuel21XInputPhoneComponent2_h */
