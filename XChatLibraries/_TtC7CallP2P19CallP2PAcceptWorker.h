//
#ifndef _TtC7CallP2P19CallP2PAcceptWorker_h
#define _TtC7CallP2P19CallP2PAcceptWorker_h
@import Foundation;

@class CallP2P.CallP2PAnswerStream, CallP2P.CallP2PAnsweredSessionStream, CallP2P.CallP2PLegsStream, CallP2P.CallP2PSessionStream, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallP2PAcceptWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PLegsStream callP2PLegsStream;
    CallP2P.CallP2PAnsweredSessionStream callP2PAnsweredSessionStream;
    CallP2P.CallP2PAnswerStream callP2PAnswerStream;
}

@end

#endif /* _TtC7CallP2P19CallP2PAcceptWorker_h */
