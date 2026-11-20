//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession24ChatOrphanRecoveryLedger_h
#define _TtC11ChatSession24ChatOrphanRecoveryLedger_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSh -> ChatModelsCore.UserID, _TtCs12_SwiftObject;

@interface ChatSession.ChatOrphanRecoveryLedger : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    Swift.Set -> ChatModelsCore.UserID recoveredUserIDs;
}

@end

#endif /* _TtC11ChatSession24ChatOrphanRecoveryLedger_h */
