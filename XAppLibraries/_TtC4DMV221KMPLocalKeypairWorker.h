//
#ifndef _TtC4DMV221KMPLocalKeypairWorker_h
#define _TtC4DMV221KMPLocalKeypairWorker_h
@import Foundation;

@class DMModels.TabStateStream, DMV2.LocalKeypairStateStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B24Arm64_mainKeypairManager_p;

@interface DMV2.KMPLocalKeypairWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainKeypairManager keypairManager;
    DMV2.LocalKeypairStateStream localKeypairStateStream;
    DMModels.TabStateStream tabStateStream;
}

@end

#endif /* _TtC4DMV221KMPLocalKeypairWorker_h */
