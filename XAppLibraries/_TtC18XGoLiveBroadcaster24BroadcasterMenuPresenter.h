//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18XGoLiveBroadcaster24BroadcasterMenuPresenter_h
#define _TtC18XGoLiveBroadcaster24BroadcasterMenuPresenter_h
@import Foundation;

@class Swift.Bool, XGoLive.GoLiveBroadcasterMenuContentViewController ?, XGoLiveBroadcaster.BroadcasterEngine, XGoLiveBroadcaster.BroadcasterMenuPresenterDelegate ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSo16TIPImagePipelineC, _TtCs12_SwiftObject;

@interface XGoLiveBroadcaster.BroadcasterMenuPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool theaterModeEnabled;
    XGoLiveBroadcaster.BroadcasterEngine engine;
    __C.TIPImagePipeline imagePipeline;
    XGoLiveBroadcaster.BroadcasterMenuPresenterDelegate ? delegate;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? tray;
    XGoLive.GoLiveBroadcasterMenuContentViewController ? menuContent;
}

@end

#endif /* _TtC18XGoLiveBroadcaster24BroadcasterMenuPresenter_h */
