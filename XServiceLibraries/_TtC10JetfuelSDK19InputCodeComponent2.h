//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK19InputCodeComponent2_h
#define _TtC10JetfuelSDK19InputCodeComponent2_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class JetfuelSDK.DOM.Element ?, JetfuelSDK.DOM.Element.Props ?, JetfuelSDK.InputCodeComponent2.CenteredCaretTextField ?, JetfuelSDK.InputCodeComponent2.Props ?, JetfuelSDK.JetfuelFormController, JetfuelSDK.ViewContext, NSObject, Swift.Bool, _$sSSSg, _$sSa -> JetfuelSDK.InputCodeComponent2.DigitView, _$sSaySo18NSLayoutConstraintCG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo11UIStackViewCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC;

@interface JetfuelSDK.InputCodeComponent2 : NSObject <UIGestureRecognizerDelegate, UITextFieldDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.InputCodeComponent2.CenteredCaretTextField ? $__lazy_storage_$_tf;
    Swift.Array -> JetfuelSDK.InputCodeComponent2.DigitView digitViews;
    __C.UIStackView? stackView;
    Swift.String? name;
    Swift.Int codeLength;
    Swift.Bool autoSubmit;
    JetfuelSDK.DOM.Element.Props ? rawProps;
    JetfuelSDK.InputCodeComponent2.Props ? props;
    JetfuelSDK.DOM.Element ? el;
    JetfuelSDK.JetfuelFormController formController;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.UIImpactFeedbackGenerator hapticGenerator;
    __C.UINotificationFeedbackGenerator successGenerator;
    [__C.NSLayoutConstraint] tfConstraints;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)textDidChange:(id)change;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)viewTapped;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK19InputCodeComponent2_h */
