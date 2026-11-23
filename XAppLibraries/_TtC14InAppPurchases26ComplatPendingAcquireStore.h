//
#ifndef _TtC14InAppPurchases26ComplatPendingAcquireStore_h
#define _TtC14InAppPurchases26ComplatPendingAcquireStore_h
@import Foundation;

@class Swift.Bool, _$sSa -> InAppPurchases.ComplatPendingAcquireEntry, _$sSa -> InAppPurchases.ComplatPendingIntent, _$sSa -> InAppPurchases.ComplatPendingSwitchEntry, _$sSh -> _$ss6UInt64VMn, _$sShySSG, _$sSo14NSUserDefaultsC, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface InAppPurchases.ComplatPendingAcquireStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSUserDefaults userDefaults;
    __C.NSLock lock;
    Swift.Array -> InAppPurchases.ComplatPendingAcquireEntry entries;
    Swift.Array -> InAppPurchases.ComplatPendingSwitchEntry switchEntries;
    Swift.Set -> nominal type descriptor for Swift.UInt64 liveTransactionIDs;
    Swift.Bool didFailToLoad;
    Swift.Array -> InAppPurchases.ComplatPendingIntent intents;
    Swift.Set<Swift.String> inFlightIntentProductIDs;
}

@end

#endif /* _TtC14InAppPurchases26ComplatPendingAcquireStore_h */
