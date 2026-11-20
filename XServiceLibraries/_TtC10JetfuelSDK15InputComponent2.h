//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK15InputComponent2_h
#define _TtC10JetfuelSDK15InputComponent2_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class JetfuelSDK.DOM.Element ?, JetfuelSDK.InputComponent2.Props ?, JetfuelSDK.JetfuelFormController, JetfuelSDK.ModConfig ?, JetfuelSDK.ViewContext, NSObject, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg, _$syycSg;

@interface JetfuelSDK.InputComponent2 : NSObject <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.ModConfig ? mods;
    JetfuelSDK.InputComponent2.Props ? props;
    JetfuelSDK.DOM.Element ? el;
    Swift.String? name;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Int? minLength;
    Swift.Int? maxLength;
    Swift.String? regex;
    JetfuelSDK.JetfuelFormController formController;
    (() -> ())? autofocusAction;
}

/* instance methods */
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)textFieldDidChange:(id)change;
- (_Bool)textFieldShouldBeginEditing:(id)editing;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK15InputComponent2_h */
