//
#ifndef GADMediationAdRequest_Protocol_h
#define GADMediationAdRequest_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADMediationAdRequest <NSObject>

@required

/* required instance methods */
- (id)publisherId;
- (id)credentials;
- (_Bool)testMode;
- (id)networkExtras;
- (id)childDirectedTreatment;
- (id)maxAdContentRating;
- (id)underAgeOfConsent;
- (id)userKeywords;

@optional

@end

#endif /* GADMediationAdRequest_Protocol_h */
