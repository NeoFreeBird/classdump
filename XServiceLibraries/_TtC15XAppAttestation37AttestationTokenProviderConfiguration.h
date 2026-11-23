//
#ifndef _TtC15XAppAttestation37AttestationTokenProviderConfiguration_h
#define _TtC15XAppAttestation37AttestationTokenProviderConfiguration_h
@import Foundation;

@class NSObject, XAppAttestation.AttestationFeatureSwitchProvider ?, XAppAttestation.AttestationNetworkService, XAppAttestation.AttestationScribeService, XAppAttestation0B21ClientVersionProvider_p;

@interface XAppAttestation.AttestationTokenProviderConfiguration : NSObject { // (Swift)
    /* instance variables */
    XAppAttestation.AttestationNetworkService networkService;
    XAppAttestation.AttestationScribeService scribeService;
    XAppAttestation.AttestationFeatureSwitchProvider ? featureSwitchProvider;
    XAppAttestation0B21ClientVersionProvider_p clientVersionProvider;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC15XAppAttestation37AttestationTokenProviderConfiguration_h */
