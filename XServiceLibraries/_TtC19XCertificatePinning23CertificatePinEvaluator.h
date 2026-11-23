//
#ifndef _TtC19XCertificatePinning23CertificatePinEvaluator_h
#define _TtC19XCertificatePinning23CertificatePinEvaluator_h
@import Foundation;

@class XCertificatePinning.PinnedHashSet, XCertificatePinning.PinningPolicyDelegate, XCertificatePinning.UnfairLock, _$sSh -> _$s10Foundation4DataVMn, _TtCs12_SwiftObject;

@interface XCertificatePinning.CertificatePinEvaluator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XCertificatePinning.PinnedHashSet pinSet;
    XCertificatePinning.PinningPolicyDelegate policy;
    XCertificatePinning.UnfairLock cacheLock;
    Swift.Set -> nominal type descriptor for Foundation.Data validLeafFingerprints;
}

@end

#endif /* _TtC19XCertificatePinning23CertificatePinEvaluator_h */
