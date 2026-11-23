//
#ifndef _TtC20TwitterSubscriptions26ComplatPurchaseCoordinator_h
#define _TtC20TwitterSubscriptions26ComplatPurchaseCoordinator_h
@import Foundation;

@class Swift.Bool, TwitterSubscriptions.ComplatAccountContext, TwitterSubscriptions.ComplatPurchaseCoordinator.Event _$sScMYccSg ->, TwitterSubscriptions.ComplatPurchaseCoordinator.PendingPlanChange ?, TwitterSubscriptions.ComplatPurchaseCoordinator.PendingPurchase ?, TwitterSubscriptions.ComplatPurchaseCoordinator.PurchaseActivity, TwitterSubscriptions.ComplatPurchaseCoordinator.PurchaseActivity _$sScMYccSg ->, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSh -> _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface TwitterSubscriptions.ComplatPurchaseCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterSubscriptions.ComplatAccountContext account;
    Swift.Double acquireResultTimeout;
    TwitterSubscriptions.ComplatPurchaseCoordinator.PendingPurchase ? pendingPurchase;
    TwitterSubscriptions.ComplatPurchaseCoordinator.PendingPlanChange ? pendingPlanChange;
    Swift.Set -> nominal type descriptor for Swift.UInt64 recordedSwitchIDs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? acquireTimeoutTask;
    Swift.Bool isAwaitingThrownPurchase;
    Swift.Bool thrownPurchaseWaitAbandoned;
    TwitterSubscriptions.ComplatPurchaseCoordinator.PurchaseActivity purchaseActivity;
    TwitterSubscriptions.ComplatPurchaseCoordinator.Event _$sScMYccSg -> onEvent;
    TwitterSubscriptions.ComplatPurchaseCoordinator.PurchaseActivity _$sScMYccSg -> onActivityChange;
}

@end

#endif /* _TtC20TwitterSubscriptions26ComplatPurchaseCoordinator_h */
