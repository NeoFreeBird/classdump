//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK18InputDateComponent_h
#define _TtC10JetfuelSDK18InputDateComponent_h
@import Foundation;

@class JetfuelSDK.InputDateComponent.Props ?, JetfuelSDK.ViewContext, NSObject, _$sSo15NSDateFormatterC;

@interface JetfuelSDK.InputDateComponent : NSObject { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.InputDateComponent.Props ? props;
    __C.NSDateFormatter dateFormatter;
}

/* instance methods */
- (void)dateChanged:(id)changed;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK18InputDateComponent_h */
