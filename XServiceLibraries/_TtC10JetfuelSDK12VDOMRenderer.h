//
#ifndef _TtC10JetfuelSDK12VDOMRenderer_h
#define _TtC10JetfuelSDK12VDOMRenderer_h
@import Foundation;

@class JetfuelSDK.JFEdgeInsets ?, JetfuelSDK.JFEnvironmentValues, JetfuelSDK.RenderingDelegate ?, JetfuelSDK.VDOMState, JetfuelSDK.ViewContext, Swift.Bool, _$s7Combine14AnyCancellableCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSDySO _$s7Combine14AnyCancellableCMn, _$sSa -> JetfuelSDK.Mods.Category ?, _TtCs12_SwiftObject;

@interface JetfuelSDK.VDOMRenderer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.JFEnvironmentValues env;
    JetfuelSDK.RenderingDelegate ? forwardingRenderingDelegate;
    JetfuelSDK.VDOMState state;
    Swift.Array -> JetfuelSDK.Mods.Category ? builtWithActiveMods;
    Swift.Bool isVisible;
    Swift.Bool stretch;
    Swift.Bool subscribeToEnv;
    nominal type descriptor for Combine.AnyCancellable ? envCancellable;
    nominal type descriptor for Combine.AnyCancellable ? safeAreaCancellable;
    Swift.Dictionary empty-list Swift.ObjectIdentifier nominal type descriptor for Combine.AnyCancellable atomCancellables;
    JetfuelSDK.JFEdgeInsets ? previousSafeArea;
    nominal type descriptor for Dispatch.DispatchWorkItem ? lowPriorityWorkItem;
}

@end

#endif /* _TtC10JetfuelSDK12VDOMRenderer_h */
