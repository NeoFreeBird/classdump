//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK18InputCodeComponent_h
#define _TtC10JetfuelSDK18InputCodeComponent_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class JetfuelSDK.DOM.Element.Props ?, JetfuelSDK.FormState2 ?, JetfuelSDK.ViewContext, NSObject, Swift.Bool, _$sSSSg, _$sSa -> JetfuelSDK.InputCodeComponent.DigitView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo11UIStackViewCSg, _$sSo11UITextFieldCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC;

@interface JetfuelSDK.InputCodeComponent : NSObject <UIContextMenuInteractionDelegate, UITextFieldDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    __C.UITextField? $__lazy_storage_$_tf;
    Swift.Array -> JetfuelSDK.InputCodeComponent.DigitView digitViews;
    __C.UIStackView? stackView;
    Swift.String? name;
    JetfuelSDK.FormState2 ? formState;
    Swift.Int codeLength;
    Swift.Bool autoSubmit;
    JetfuelSDK.DOM.Element.Props ? rawProps;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.UIImpactFeedbackGenerator hapticGenerator;
    __C.UINotificationFeedbackGenerator successGenerator;
}

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)textDidChange:(id)change;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)viewTapped;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK18InputCodeComponent_h */
