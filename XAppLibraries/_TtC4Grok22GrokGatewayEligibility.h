//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok22GrokGatewayEligibility_h
#define _TtC4Grok22GrokGatewayEligibility_h
@import Foundation;

@class Grok.GrokAccountLinkStateResolving, _$s10Foundation4DateVMn _$syc, _$s7Combine18PassthroughSubjectCMn Grok.GrokAccountLinkStateTransition _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$ss5Int64VMn _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn Grok.GrokGatewayEligibility.LinkResolution, _$sSo6NSLockC, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface Grok.GrokGatewayEligibility : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.Never linkStateDidChange;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokAccountLinkStateTransition nominal type descriptor for Swift.Never linkStateTransitions;
    __C.NSLock lock;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GrokGatewayEligibility.LinkResolution resolutionsByUserID;
    __C.NSObject? foregroundObserver;
    nominal type descriptor for Foundation.Date _$syc now;
    Grok.GrokAccountLinkStateResolving resolver;
}

@end

#endif /* _TtC4Grok22GrokGatewayEligibility_h */
