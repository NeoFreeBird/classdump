//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15XAppAttestation23AttestationKeyGenerator_h
#define _TtC15XAppAttestation23AttestationKeyGenerator_h
@import Foundation;

@class XAppAttestation.AttestationKeyRepository, XAppAttestation.AttestationKeyTask, XAppAttestation.AttestationServiceProxy, XAppAttestation.AttestationTokenProviderConfiguration ?, _$s2os6LoggerVMn, _TtCs12_SwiftObject;

@interface XAppAttestation.AttestationKeyGenerator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XAppAttestation.AttestationTokenProviderConfiguration ? configuration;
    XAppAttestation.AttestationKeyRepository keyRepository;
    XAppAttestation.AttestationServiceProxy attestationServiceProxy;
    XAppAttestation.AttestationKeyTask generationTask;
    nominal type descriptor for os.Logger logger;
}

@end

#endif /* _TtC15XAppAttestation23AttestationKeyGenerator_h */
