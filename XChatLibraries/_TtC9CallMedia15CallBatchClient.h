//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9CallMedia15CallBatchClient_h
#define _TtC9CallMedia15CallBatchClient_h
@import Foundation;

@class CallMedia.CallBatchSessionRecovery, CallMedia.CallRequestHeaderProvider, CallMedia.CallTransportReporter ?, Swift.Bool, _$sSSSg, _TtCs12_SwiftObject;

@interface CallMedia.CallBatchClient : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallMedia.CallRequestHeaderProvider requestHeaderProvider;
    CallMedia.CallBatchSessionRecovery sessionRecovery;
    Swift.Bool assumesHTTP3Capable;
    Swift.String? http3Host;
    CallMedia.CallTransportReporter ? transport;
}

@end

#endif /* _TtC9CallMedia15CallBatchClient_h */
