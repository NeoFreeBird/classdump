//
#ifndef _TtC8ChatSync27ChatPaymentReceiptValidator_h
#define _TtC8ChatSync27ChatPaymentReceiptValidator_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatPaymentReceiptValidityStream, _$sSDyS2SG, _$sShySSG, _$sSo12NSURLSessionC, _TtCs12_SwiftObject;

@interface ChatSync.ChatPaymentReceiptValidator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    __C.NSURLSession jwksSession;
    ChatSyncState.ChatPaymentReceiptValidityStream validityStream;
    [Swift.String : Swift.String] jwksByIssuer;
    Swift.Set<Swift.String> pendingTokens;
}

@end

#endif /* _TtC8ChatSync27ChatPaymentReceiptValidator_h */
