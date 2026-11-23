//
#ifndef _TtC10CallEngine24CallIdentityRosterWorker_h
#define _TtC10CallEngine24CallIdentityRosterWorker_h
@import Foundation;

@class CallEngine.CallIdentityRequestStream, CallEngine.CallIdentityResolutionStream, CallEngine.CallIdentityRosterStream, CallMedia.CallRemoteParticipantsStream, CallModels.CallUserID, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallIdentityRosterWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallUserID selfUserID;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallEngine.CallIdentityResolutionStream callIdentityResolutionStream;
    CallEngine.CallIdentityRequestStream callIdentityRequestStream;
    CallEngine.CallIdentityRosterStream callIdentityRosterStream;
}

@end

#endif /* _TtC10CallEngine24CallIdentityRosterWorker_h */
