//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor29MediaStyleTrayDragInteraction_h
#define _TtC12XPhotoEditor29MediaStyleTrayDragInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, XPhotoEditor.MediaStyleTrayDragInteraction.State, XPhotoEditor.MediaStyleTrayDragInteractionDelegate ?, _$sSo22UIPanGestureRecognizerC;

@interface XPhotoEditor.MediaStyleTrayDragInteraction : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaStyleTrayDragInteractionDelegate ? delegate;
    __C.UIPanGestureRecognizer panGestureRecognizer;
    XPhotoEditor.MediaStyleTrayDragInteraction.State _state;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)init;
- (void)_handlePan:(id)pan;

@end

#endif /* _TtC12XPhotoEditor29MediaStyleTrayDragInteraction_h */
