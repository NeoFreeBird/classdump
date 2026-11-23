//
#ifndef _TtC4DMV239WebSocketConnectionStateIndicatorWorker_h
#define _TtC4DMV239WebSocketConnectionStateIndicatorWorker_h
@import Foundation;

@class DMModels.ApplicationLifecycleStreaming, DMModels.WebSocketConnectionStateStreaming, DMV2.KMPWebSocketConnectionStateIndicatorStreaming, _$s11XFoundation13CombineWorkerCN;

@interface DMV2.WebSocketConnectionStateIndicatorWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DMModels.ApplicationLifecycleStreaming applicationLifecycleStream;
    DMV2.KMPWebSocketConnectionStateIndicatorStreaming kmpWebSocketConnectionStateIndicatorStream;
    DMModels.WebSocketConnectionStateStreaming webSocketConnectionStateStream;
}

@end

#endif /* _TtC4DMV239WebSocketConnectionStateIndicatorWorker_h */
