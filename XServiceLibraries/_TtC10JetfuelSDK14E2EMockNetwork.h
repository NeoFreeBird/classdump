//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK14E2EMockNetwork_h
#define _TtC10JetfuelSDK14E2EMockNetwork_h
@import Foundation;

@class JetfuelSDK.E2EMockNetwork.FixtureStore, JetfuelSDK.E2ETraceLogger, NSObject, _$sSDySO JetfuelSDK.E2EMockNetwork.TaskHandler, _$sSo6NSLockC;

@interface JetfuelSDK.E2EMockNetwork : NSObject { // (Swift)
    /* instance variables */
    JetfuelSDK.E2ETraceLogger trace;
    Swift.Dictionary empty-list Swift.ObjectIdentifier JetfuelSDK.E2EMockNetwork.TaskHandler activeHandlers;
    __C.NSLock activeHandlersLock;
    JetfuelSDK.E2EMockNetwork.FixtureStore fixtureStore;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC10JetfuelSDK14E2EMockNetwork_h */
