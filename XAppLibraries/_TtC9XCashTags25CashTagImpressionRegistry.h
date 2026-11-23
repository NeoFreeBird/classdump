//
#ifndef _TtC9XCashTags25CashTagImpressionRegistry_h
#define _TtC9XCashTags25CashTagImpressionRegistry_h
@import Foundation;

@class _$sSa -> XCashTags.CashTagImpressionKey, _$sSh -> XCashTags.CashTagImpressionKey, _$sSi, _$sSo20NSNotificationCenterC, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface XCashTags.CashTagImpressionRegistry : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int capacity;
    __C.NSNotificationCenter notificationCenter;
    Swift.Set -> XCashTags.CashTagImpressionKey recorded;
    Swift.Array -> XCashTags.CashTagImpressionKey order;
    __C.NSObject? backgroundObserver;
}

@end

#endif /* _TtC9XCashTags25CashTagImpressionRegistry_h */
