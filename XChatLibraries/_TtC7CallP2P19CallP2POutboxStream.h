//
#ifndef _TtC7CallP2P19CallP2POutboxStream_h
#define _TtC7CallP2P19CallP2POutboxStream_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$s7Combine18PassthroughSubjectCMn CallP2P.P2PSignalMessage _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn CallP2P.CallP2POutboxStream.Queue _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface CallP2P.CallP2POutboxStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue syncQueue;
    nominal type descriptor for Combine.CurrentValueSubject CallP2P.CallP2POutboxStream.Queue nominal type descriptor for Swift.Never queueSubject;
    nominal type descriptor for Combine.PassthroughSubject CallP2P.P2PSignalMessage nominal type descriptor for Swift.Never enqueuedSubject;
    nominal type descriptor for Combine.PassthroughSubject CallP2P.P2PSignalMessage nominal type descriptor for Swift.Never sentSubject;
}

@end

#endif /* _TtC7CallP2P19CallP2POutboxStream_h */
