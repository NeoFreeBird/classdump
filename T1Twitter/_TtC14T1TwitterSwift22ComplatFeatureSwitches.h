//
#ifndef _TtC14T1TwitterSwift22ComplatFeatureSwitches_h
#define _TtC14T1TwitterSwift22ComplatFeatureSwitches_h
@import Foundation;

@class T1TwitterSwift.ComplatFeatureSwitchSnapshot, _$sSDySS T1TwitterSwift.ComplatFeatureSwitches.ServerRead, _$sSDySSSbG, _$sSSSg, _$sSaySo8NSObject_pG, _$sScTyyt _$ss5NeverOMn ?, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.ComplatFeatureSwitches : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    T1TwitterSwift.ComplatFeatureSwitchSnapshot snapshot;
    Swift.String? impressedAccountID;
    Swift.String? lastActiveAccountID;
    [__C.NSObject] observerTokens;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? storefrontTask;
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.ComplatFeatureSwitches.ServerRead xGrantClaimReads;
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.ComplatFeatureSwitches.ServerRead offerReads;
    [Swift.String : Swift.Bool] grokBotLinkedSuperGrokByAccountID;
}

@end

#endif /* _TtC14T1TwitterSwift22ComplatFeatureSwitches_h */
