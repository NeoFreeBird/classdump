//
#ifndef _TtC12XPhotoEditor21InteractiveCanvasView_h
#define _TtC12XPhotoEditor21InteractiveCanvasView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC12XPhotoEditor10CanvasView.h"

@class XPhotoEditor.CanvasAlignmentGuidesView, XPhotoEditor.CanvasCenterGuide, XPhotoEditor.CanvasElement _$s_So6UIViewCXcSg, XPhotoEditor.CanvasElement _$scSg ->, XPhotoEditor.TrashZoneView ?, _$s10Foundation4DateVMn, _$sSD -> _$s10Foundation4UUIDVMn XPhotoEditor.CanvasElement _$s_So6UIViewCXc, _$sSo25UIImpactFeedbackGeneratorC, _$syycSg, __C.CGRect;

@interface XPhotoEditor.InteractiveCanvasView : XPhotoEditor.CanvasView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID XPhotoEditor.CanvasElement _$s_So6UIViewCXc elementViews;
    XPhotoEditor.CanvasElement _$s_So6UIViewCXcSg focusedElement;
    XPhotoEditor.TrashZoneView ? trashZone;
    XPhotoEditor.CanvasAlignmentGuidesView alignmentGuidesView;
    XPhotoEditor.CanvasCenterGuide centerXGuide;
    XPhotoEditor.CanvasCenterGuide centerYGuide;
    __C.UIImpactFeedbackGenerator alignmentHaptic;
    nominal type descriptor for Foundation.Date lastAlignmentHapticDate;
    __C.CGRect validContentRect;
    (() -> ())? onBlankAreaTapped;
    XPhotoEditor.CanvasElement _$scSg -> onElementTapped;
}

/* instance methods */
- (void)handlePan:(id)pan;
- (void)handlePinch:(id)pinch;
- (void)handleRotation:(id)rotation;
- (void)handleTap:(id)tap;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)handleCanvasTap:(id)tap;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor21InteractiveCanvasView_h */
