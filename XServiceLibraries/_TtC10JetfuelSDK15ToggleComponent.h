//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK15ToggleComponent_h
#define _TtC10JetfuelSDK15ToggleComponent_h
@import Foundation;

@class JetfuelSDK.Action.Bound ?, _TtCs12_SwiftObject;

@interface JetfuelSDK.ToggleComponent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.Action.Bound ? toggleOnAction;
    JetfuelSDK.Action.Bound ? toggleOffAction;
}

/* instance methods */
- (void)toggleValueChanged:(id)changed;

@end

#endif /* _TtC10JetfuelSDK15ToggleComponent_h */
