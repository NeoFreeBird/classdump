//
#ifndef _TtC8Payments19PaymentsFingerprint_h
#define _TtC8Payments19PaymentsFingerprint_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, Payments.PaymentsFingerprint.Fingerprint ?, Payments.PaymentsFingerprint.FingerprintingEnvironment ?, Payments.PaymentsLogging, _$s24TFSFeatureSwitchesAccess014AccountFeatureB0CMn, _$sSSSg, _$sScT -> Payments.PaymentsFingerprint.Fingerprint ? _$ss5ErrorMp ?;

@interface Payments.PaymentsFingerprint : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSFeatureSwitchesAccess.AccountFeatureSwitches featureSwitches;
    Swift.String? userAgent;
    Payments.PaymentsLogging logger;
    Payments.PaymentsFingerprint.FingerprintingEnvironment ? fingerprintingEnvironment;
    Payments.PaymentsFingerprint.Fingerprint ? fingerprint;
    Swift.Task -> Payments.PaymentsFingerprint.Fingerprint ? protocol descriptor for Swift.Error ? refreshTask;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtC8Payments19PaymentsFingerprint_h */
