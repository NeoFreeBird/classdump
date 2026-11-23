//
#ifndef _TtC10CallEngine20CallKitCallIDHistory_h
#define _TtC10CallEngine20CallKitCallIDHistory_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSD -> _$s10Foundation4UUIDVMn CallModels.CallID, _$sSa -> _$s10Foundation4UUIDVMn, _TtCs12_SwiftObject;

@interface CallEngine.CallKitCallIDHistory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID CallModels.CallID callIDs;
    Swift.Array -> nominal type descriptor for Foundation.UUID callUUIDs;
}

@end

#endif /* _TtC10CallEngine20CallKitCallIDHistory_h */
