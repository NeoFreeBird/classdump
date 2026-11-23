//
#ifndef _TtC4DMV218LocalKeypairWorker_h
#define _TtC4DMV218LocalKeypairWorker_h
@import Foundation;

@class DMModels.TabStateStream, DMV2.LocalKeypairStateStream, _$s11XFoundation13CombineWorkerCN, _$s13ChatSyncState0A16AccountProvidingMp;

@interface DMV2.LocalKeypairWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    DMV2.LocalKeypairStateStream localKeypairStateStream;
    DMModels.TabStateStream tabStateStream;
}

@end

#endif /* _TtC4DMV218LocalKeypairWorker_h */
