//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine17CallScribeEmitter_h
#define _TtC10CallEngine17CallScribeEmitter_h
@import Foundation;

@class CallEngine.CallMediaTopologyStream, CallEngine.CallScribing, CallModels.CallConfiguration, CallModels.CallIDStream, CallModels.CallSessionOwner, Swift.Bool, _$s10Foundation4DateVMn, _$s10Foundation4UUIDVMn, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface CallEngine.CallScribeEmitter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Date startedAt;
    nominal type descriptor for Swift.Int64 startedContinuousMs;
    nominal type descriptor for Foundation.UUID callUUID;
    CallModels.CallConfiguration configuration;
    CallModels.CallSessionOwner audioSessionOwner;
    CallModels.CallIDStream callIDStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
    CallEngine.CallScribing callScriber;
    Swift.Bool isFastConnectEnabled;
}

@end

#endif /* _TtC10CallEngine17CallScribeEmitter_h */
