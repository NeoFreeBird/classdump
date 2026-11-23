//
#ifndef _TtC9CallMedia20CallHTTPSessionStore_h
#define _TtC9CallMedia20CallHTTPSessionStore_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$sSd, _$sSo12NSURLSessionCSg, _$sSo12NSURLSessionCyYbc, _TtCs12_SwiftObject;

@interface CallMedia.CallHTTPSessionStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never replacementSubject;
    Swift.Double invalidationDelay;
    @Sendable () -> __C.NSURLSession makeSession;
    __C.NSURLSession? currentSession;
}

@end

#endif /* _TtC9CallMedia20CallHTTPSessionStore_h */
