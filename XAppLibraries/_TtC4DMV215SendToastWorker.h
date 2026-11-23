//
#ifndef _TtC4DMV215SendToastWorker_h
#define _TtC4DMV215SendToastWorker_h
@import Foundation;

@class DMUI.DMEventScriber, _$s10ChatModels0A24ToastActionTriggerStreamCMn, _$s11XFoundation13CombineWorkerCN, _$s13ChatSyncState0A16AccountProvidingMp;

@interface DMV2.SendToastWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    nominal type descriptor for ChatModels.ChatToastActionTriggerStream chatToastActionTriggerStream;
    DMUI.DMEventScriber eventScriber;
}

@end

#endif /* _TtC4DMV215SendToastWorker_h */
