//
#ifndef _TtC10CallEngine23CallKitLiveCallRegistry_h
#define _TtC10CallEngine23CallKitLiveCallRegistry_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSD -> _$s10Foundation4UUIDVMn CallEngine.CallKitLiveCallRegistry.LiveCall, _$sSD -> _$s10Foundation4UUIDVMn Swift.Bool, _TtCs12_SwiftObject;

@interface CallEngine.CallKitLiveCallRegistry : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID CallEngine.CallKitLiveCallRegistry.LiveCall liveCalls;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID Swift.Bool mutedBeforeOutgoingCallAdded;
}

@end

#endif /* _TtC10CallEngine23CallKitLiveCallRegistry_h */
