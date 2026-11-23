//
#ifndef _TtC10JetfuelSDK23InputMultilineComponent_h
#define _TtC10JetfuelSDK23InputMultilineComponent_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class JetfuelSDK.FormState2 ?, JetfuelSDK.RenderingDelegate ?, JetfuelSDK.ViewContext, NSObject, _$sSS, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelCSgXw, _$ss13OpaquePointerVMn ?;

@interface JetfuelSDK.InputMultilineComponent : NSObject <UITextViewDelegate> { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    weak __C.UILabel? placeholderLabel;
    Swift.String leadingText;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    nominal type descriptor for Swift.OpaquePointer ? textViewNode;
    JetfuelSDK.RenderingDelegate ? renderingDelegate;
    JetfuelSDK.FormState2 ? formState;
    Swift.String? name;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK23InputMultilineComponent_h */
