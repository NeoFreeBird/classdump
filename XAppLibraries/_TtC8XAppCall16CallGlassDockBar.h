//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8XAppCall16CallGlassDockBar_h
#define _TtC8XAppCall16CallGlassDockBar_h
@import Foundation;

@class GlassDock.DockPlayerView, Swift.Bool, XAppCall.CallGlassDockPreviewView, _$s10CallEngine0A0CMn, _$s10CallModels0A12ImageLoadingMp, _$s10CallModels0A12ParticipantsVMn, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgyc, _$syyc, _TtCs12_SwiftObject;

@interface XAppCall.CallGlassDockBar : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CallEngine.Call call;
    GlassDock.DockPlayerView dockPlayerView;
    Swift.Bool isDocked;
    protocol descriptor for CallModels.CallImageLoading imageLoader;
    () -> __C.UIViewController? presenterProvider;
    () -> () onOpen;
    XAppCall.CallGlassDockPreviewView previewView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    nominal type descriptor for CallModels.CallParticipants participants;
    Swift.Bool isLocalCameraEnabled;
    Swift.String accessibilityStatus;
}

@end

#endif /* _TtC8XAppCall16CallGlassDockBar_h */
