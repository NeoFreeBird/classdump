//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK5DomVC_h
#define _TtC10JetfuelSDK5DomVC_h
@import Foundation;

@class JetfuelSDK.ComponentManager ?, JetfuelSDK.DOM.Element ?, JetfuelSDK.DomController ?, JetfuelSDK.ErrorDisplayView, JetfuelSDK.NavItem ?, JetfuelSDK.RenderingDeps, JetfuelSDK.VDOMRenderer ?, UIViewController, _$s10Foundation4DateVMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo23UIActivityIndicatorViewC, _$sSo7UIColorC, _$syycSg;

@interface JetfuelSDK.DomVC : UIViewController { // (Swift)
    /* instance variables */
    JetfuelSDK.NavItem ? item;
    JetfuelSDK.RenderingDeps deps;
    JetfuelSDK.ComponentManager ? $__lazy_storage_$_comp;
    JetfuelSDK.VDOMRenderer ? vdomRenderer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    JetfuelSDK.DomController ? controller;
    nominal type descriptor for Foundation.Date ? lastUpdate;
    JetfuelSDK.DOM.Element ? initialItem;
    __C.UIColor backgroundColor;
    (() -> ())? layoutingDelegate;
    __C.UIActivityIndicatorView activityIndicator;
    JetfuelSDK.ErrorDisplayView errorView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadButtonTapped;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10JetfuelSDK5DomVC_h */
