//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation27ChatJetfuelFrameHostingView_h
#define _TtC16ChatConversation27ChatJetfuelFrameHostingView_h
@import Foundation;

@class UIView, _$s10JetfuelSDK13EventsHandlerMp ?, _$s10JetfuelSDK14JetFrameViewV2CMn ?, _$s10JetfuelSDK6JetEnvCMn, _$s8XJetfuel0A7RuntimeCMn, _$sSSSg;

@interface ChatConversation.ChatJetfuelFrameHostingView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for JetfuelSDK.JetEnv env;
    protocol descriptor for JetfuelSDK.EventsHandler ? eventsHandler;
    nominal type descriptor for JetfuelSDK.JetFrameViewV2 ? frameView;
    Swift.String? payload;
    nominal type descriptor for XJetfuel.XJetfuelRuntime runtime;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation27ChatJetfuelFrameHostingView_h */
