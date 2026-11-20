//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift21ImmersiveActionButton_h
#define _TtC14T1TwitterSwift21ImmersiveActionButton_h
@import Foundation;

#include "TTAStatusInlineActionButtonDelegate-Protocol.h"

@class T1TwitterSwift.ImmersiveActionButtonDelegate ?, T1TwitterSwift.ImmersiveActionButtonType, T1TwitterSwift.ImmersiveActionViewVariant, UIView, _$sSo17AVRoutePickerViewCSg, _$sSo17TFNTwitterAccountC, _$sSo27TTAStatusInlineActionButtonCSg, _$sSo6UIViewCSg;

@interface T1TwitterSwift.ImmersiveActionButton : UIView <TTAStatusInlineActionButtonDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveActionButtonDelegate ? delegate;
    T1TwitterSwift.ImmersiveActionButtonType type;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersiveActionViewVariant variant;
    __C.TTAStatusInlineActionButton? inlineActionButton;
    __C.UIView? buttonView;
    __C.AVRoutePickerView? routePickerView;
}

/* instance methods */
- (void)didTapInlineActionButton:(id)button;
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (void)routePickerTapped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift21ImmersiveActionButton_h */
