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
