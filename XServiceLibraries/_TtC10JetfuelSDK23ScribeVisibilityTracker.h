//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK23ScribeVisibilityTracker_h
#define _TtC10JetfuelSDK23ScribeVisibilityTracker_h
@import Foundation;

@class JetfuelSDK.EventsHandler ?, Swift.Bool, _$sSDyS2SG, _$sSDyS2SGSg, _$sSSSg, _$sSa -> JetfuelSDK.ScribeVisibilityTracker.LingerTask, _TtCs12_SwiftObject;

@interface JetfuelSDK.ScribeVisibilityTracker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.EventsHandler ? eventsHandler;
    [Swift.String : Swift.String] contextParams;
    Swift.String? scribeID;
    Swift.Bool didAppear;
    [Swift.String : Swift.String]? appearParams;
    [Swift.String : Swift.String]? disappearParams;
    Swift.Array -> JetfuelSDK.ScribeVisibilityTracker.LingerTask lingerTasks;
}

@end

#endif /* _TtC10JetfuelSDK23ScribeVisibilityTracker_h */
