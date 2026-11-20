//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP4Jobs22JobsAccountPerspective__Protocol_h
#define _TtP4Jobs22JobsAccountPerspective__Protocol_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSArray, NSString;

@protocol Jobs.JobsAccountPerspective <TAPAccount.TAPAccountPerspective>

@required

@property (nonatomic, readonly) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (nonatomic, readonly) NSArray *subscriptionClaims;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long userID;

@optional

@end

#endif /* _TtP4Jobs22JobsAccountPerspective__Protocol_h */
