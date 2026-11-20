//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP15XAppAttestation32AttestationClientVersionProvider__Protocol_h
#define _TtP15XAppAttestation32AttestationClientVersionProvider__Protocol_h
@import Foundation;

@protocol XAppAttestation.AttestationClientVersionProvider

@required

/* required instance methods */
- (id)platform;
- (id)osVersion;
- (id)clientVersion;

@optional

@end

#endif /* _TtP15XAppAttestation32AttestationClientVersionProvider__Protocol_h */
