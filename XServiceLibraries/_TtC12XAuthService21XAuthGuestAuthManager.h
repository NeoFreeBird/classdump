//
#ifndef _TtC12XAuthService21XAuthGuestAuthManager_h
#define _TtC12XAuthService21XAuthGuestAuthManager_h
@import Foundation;

@class DispatchQueue, Swift.Bool, XAuthService.XAuthConsumerCredential ?, XAuthService.XAuthGuestAuthAPI ?, XAuthService.XAuthKeychainSupport ?, _$sSSSg, _$sSayySb_ _$ss5ErrorMp _$sSgtYbc, _$sSu, _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface XAuthService.XAuthGuestAuthManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DispatchQueue queue;
    Swift.String? appToken;
    Swift.String? guestToken;
    Swift.Bool needsRefresh;
    nominal type descriptor for Swift.UInt64 lastRefreshSuccessMachTime;
    Swift.Bool isAcquiring;
    Swift.Array empty-list  empty-list Swift.Bool first-element-marker  protocol descriptor for Swift.Error _$sSgtYbc pendingCompletions;
    XAuthService.XAuthGuestAuthAPI ? guestAuthAPI;
    XAuthService.XAuthKeychainSupport ? keychainSupport;
    XAuthService.XAuthConsumerCredential ? consumerCredential;
    Swift.UInt retryLimit;
    Swift.UInt retryCount;
    Swift.Bool tfsAuthRules;
    Swift.Bool acquisitionUsesTFSAuthRules;
}

@end

#endif /* _TtC12XAuthService21XAuthGuestAuthManager_h */
