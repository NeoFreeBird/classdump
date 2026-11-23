//
#ifndef _TtC12XVideoEditor33VideoEditorOverlayTrashController_h
#define _TtC12XVideoEditor33VideoEditorOverlayTrashController_h
@import Foundation;

@class Swift.Bool, XVideoEditor.VideoCaptionsGestureTrackingViewProtocol _$s_So6UIViewCXcSgXw, XVideoEditor.VideoEditorOverlayTrashController.State, XVideoEditor.VideoEditorTrashableOverlayProcessing ?, _$s12XPhotoEditor13TrashZoneViewCMn, _$sSbSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewCXo, _$sySbcSg, _$syycSg, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoEditorOverlayTrashController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onParkedChanged;
    (() -> ())? onDeleteRequested;
    unowned __C.UIView _hostView;
    nominal type descriptor for XPhotoEditor.TrashZoneView _trashZoneView;
    __C.UIImpactFeedbackGenerator _hapticFeedbackGenerator;
    XVideoEditor.VideoEditorOverlayTrashController.State _state;
    Swift.Bool _isGestureActive;
    XVideoEditor.VideoEditorTrashableOverlayProcessing ? _processor;
    XVideoEditor.VideoCaptionsGestureTrackingViewProtocol _$s_So6UIViewCXcSgXw _captureView;
    Swift.Bool? _guidesEnabledBeforeParking;
}

@end

#endif /* _TtC12XVideoEditor33VideoEditorOverlayTrashController_h */
