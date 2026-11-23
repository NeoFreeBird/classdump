//
#ifndef _TtC10JetfuelSDK13DomController_h
#define _TtC10JetfuelSDK13DomController_h
@import Foundation;

@class JetfuelSDK.DOM, JetfuelSDK.DOMLoader, JetfuelSDK.NavItem ?, JetfuelSDK.ViewContext, Swift.Bool, _$s10Foundation4UUIDVMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSiSg, _$sSo7NSTimerCSg, _TtCs12_SwiftObject;

@interface JetfuelSDK.DomController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.DOM dom;
    nominal type descriptor for Foundation.UUID id;
    Swift.Int? lastRefresh;
    Swift.Int? refreshSeconds;
    JetfuelSDK.NavItem ? item;
    JetfuelSDK.ViewContext context;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    JetfuelSDK.DOMLoader loader;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    __C.NSTimer? autoRefreshTimer;
    Swift.Bool skipCache;
}

/* instance methods */
- (void)handleAutoRefreshTimer:(id)timer;

@end

#endif /* _TtC10JetfuelSDK13DomController_h */
