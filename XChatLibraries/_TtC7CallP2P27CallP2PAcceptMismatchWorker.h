//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P27CallP2PAcceptMismatchWorker_h
#define _TtC7CallP2P27CallP2PAcceptMismatchWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallP2P.CallP2PAnsweredSessionStream, CallP2P.CallP2PLegsStream, CallP2P.CallP2PSessionStream, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallP2PAcceptMismatchWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PLegsStream callP2PLegsStream;
    CallP2P.CallP2PAnsweredSessionStream callP2PAnsweredSessionStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallP2P27CallP2PAcceptMismatchWorker_h */
