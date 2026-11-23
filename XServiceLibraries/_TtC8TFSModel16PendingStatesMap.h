//
#ifndef _TtC8TFSModel16PendingStatesMap_h
#define _TtC8TFSModel16PendingStatesMap_h
@import Foundation;

@class _$sSD -> TFSModel.ModelIdentifier _$sSa -> _$s10Foundation4UUIDVMn, _$sSD -> _$s10Foundation4UUIDVMn TFSModel.PendingStateNode, _$sSD -> _$s10Foundation4UUIDVMn TFSModel.PendingStateToken, _TtCs12_SwiftObject;

@interface TFSModel.PendingStatesMap : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Dictionary -> TFSModel.ModelIdentifier Swift.Array -> nominal type descriptor for Foundation.UUID pendingStates;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID TFSModel.PendingStateNode uuidToPendingStateMap;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID TFSModel.PendingStateToken uuidToChildrenMap;
}

@end

#endif /* _TtC8TFSModel16PendingStatesMap_h */
