//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13QuickComposer26QuickComposerPressFeedback_h
#define _TtC13QuickComposer26QuickComposerPressFeedback_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSbyc, _$sSd, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSgXw;

@interface QuickComposer.QuickComposerPressFeedback : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    weak __C.UIView? view;
    [__C.UIView] companions;
    nominal type descriptor for CoreGraphics.CGFloat scale;
    Swift.Double duration;
    () -> Swift.Bool isSuppressed;
    __C.UILongPressGestureRecognizer? gesture;
    Swift.Bool isPressedInside;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handlePress:(id)press;
- (void)press;
- (void)releasePress;
- (id)init;

@end

#endif /* _TtC13QuickComposer26QuickComposerPressFeedback_h */
