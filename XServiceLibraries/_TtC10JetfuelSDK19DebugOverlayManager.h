//
#ifndef _TtC10JetfuelSDK19DebugOverlayManager_h
#define _TtC10JetfuelSDK19DebugOverlayManager_h
@import Foundation;

@class JetfuelSDK.ConnectionIndicatorView, JetfuelSDK.Runtime, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo22UITapGestureRecognizerCSg, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject;

@interface JetfuelSDK.DebugOverlayManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIView? view;
    JetfuelSDK.Runtime runtime;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    JetfuelSDK.ConnectionIndicatorView connectionIndicatorView;
    __C.UITapGestureRecognizer? fiveTapGesture;
}

/* instance methods */
- (void)handleFiveTaps;

@end

#endif /* _TtC10JetfuelSDK19DebugOverlayManager_h */
