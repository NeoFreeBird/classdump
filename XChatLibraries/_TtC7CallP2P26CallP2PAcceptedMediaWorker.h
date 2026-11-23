//
#ifndef _TtC7CallP2P26CallP2PAcceptedMediaWorker_h
#define _TtC7CallP2P26CallP2PAcceptedMediaWorker_h
@import Foundation;

@class CallP2P.CallP2PAnswerStream, CallP2P.CallP2PLegsStream, CallP2P.CallP2PMediaSessionStream, CallP2P.CallP2PSessionStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallP2P.CallP2PAcceptedMediaWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PAnswerStream callP2PAnswerStream;
    CallP2P.CallP2PLegsStream callP2PLegsStream;
    CallP2P.CallP2PMediaSessionStream callP2PMediaSessionStream;
}

@end

#endif /* _TtC7CallP2P26CallP2PAcceptedMediaWorker_h */
