//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV217KMPTabStateWorker_h
#define _TtC4DMV217KMPTabStateWorker_h
@import Foundation;

@class DMModels.MutableTabStateStream, DMModels.WebSocketConnectionStateStreaming, DMV2.LocalKeypairStateStream, Swift.Bool, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s10ChatModels0A15ExceptionStreamCMn, _$s11XFoundation13CombineWorkerCN, _$s13ChatSyncState0A16AccountProvidingMp;

@interface DMV2.KMPTabStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    nominal type descriptor for ChatModels.ChatExceptionStream exceptionStream;
    Swift.Bool isNativeRewrite;
    DMModels.MutableTabStateStream mutableTabStateStream;
    DMV2.LocalKeypairStateStream localKeypairStateStream;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    DMModels.WebSocketConnectionStateStreaming webSocketConnectionStateStream;
}

@end

#endif /* _TtC4DMV217KMPTabStateWorker_h */
