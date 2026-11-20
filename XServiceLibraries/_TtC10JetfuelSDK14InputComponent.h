//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK14InputComponent_h
#define _TtC10JetfuelSDK14InputComponent_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class JetfuelSDK.FormState2 ?, JetfuelSDK.InputComponent.Props ?, JetfuelSDK.ModConfig ?, JetfuelSDK.ViewContext, NSObject, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg, _$syycSg;

@interface JetfuelSDK.InputComponent : NSObject <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.FormState2 ? formState;
    JetfuelSDK.ModConfig ? mods;
    JetfuelSDK.InputComponent.Props ? props;
    Swift.String? name;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Int? minLength;
    Swift.Int? maxLength;
    Swift.String? regex;
    (() -> ())? autofocusAction;
}

/* instance methods */
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)textFieldDidChange:(id)change;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK14InputComponent_h */
