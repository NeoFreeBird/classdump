//
#ifndef _TtC7CallP2P16CallP2PByeWorker_h
#define _TtC7CallP2P16CallP2PByeWorker_h
@import Foundation;

@class CallMedia.CallStateChannelStream, CallModels.CallConnectionStateStream, CallP2P.CallP2PSessionStream, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallP2PByeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallMedia.CallStateChannelStream callStateChannelStream;
}

@end

#endif /* _TtC7CallP2P16CallP2PByeWorker_h */
