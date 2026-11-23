//
#ifndef _TtC7CallP2P24P2PPreconnectInboxWorker_h
#define _TtC7CallP2P24P2PPreconnectInboxWorker_h
@import Foundation;

@class CallP2P.CallP2PMediaSessionControlling, CallP2P.CallP2PSignalInboxStream, CallP2P.P2PCallSession, _$s11XFoundation11AsyncWorkerCN, _$s7Combine12AnyPublisherVMn CallP2P.P2PFetchedSignalLog _$ss5NeverOMn;

@interface CallP2P.P2PPreconnectInboxWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.AnyPublisher CallP2P.P2PFetchedSignalLog nominal type descriptor for Swift.Never fetchedSignals;
    CallP2P.P2PCallSession session;
    CallP2P.CallP2PSignalInboxStream callP2PSignalInboxStream;
    CallP2P.CallP2PMediaSessionControlling peer;
}

@end

#endif /* _TtC7CallP2P24P2PPreconnectInboxWorker_h */
