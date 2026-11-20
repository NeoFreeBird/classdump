//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK14VideoComponent_h
#define _TtC10JetfuelSDK14VideoComponent_h
@import Foundation;

@class JetfuelSDK.RenderingDelegate ?, JetfuelSDK.ViewContext, _$s10Foundation3URLVMn ?, _$s7Combine14AnyCancellableCMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo13AVPlayerLayerCSg, _$sSo8AVPlayerCSg, _$ss13OpaquePointerVMn ?, _TtCs12_SwiftObject;

@interface JetfuelSDK.VideoComponent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    nominal type descriptor for Swift.OpaquePointer ? node;
    JetfuelSDK.RenderingDelegate ? renderingDelegate;
    __C.AVPlayer? player;
    __C.AVPlayerLayer? playerLayer;
    nominal type descriptor for Combine.AnyCancellable ? storyCancellable;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? posterTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? videoTask;
    nominal type descriptor for Foundation.URL ? currentSrc;
    nominal type descriptor for Foundation.URL ? currentPoster;
}

@end

#endif /* _TtC10JetfuelSDK14VideoComponent_h */
