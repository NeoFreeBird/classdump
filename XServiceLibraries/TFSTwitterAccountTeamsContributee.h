//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAccountTeamsContributee_h
#define TFSTwitterAccountTeamsContributee_h
@import Foundation;

#include "TFSTwitterAccountUserDetails.h"
#include "TFSTwitterUser.h"

@class NSObject;

@interface TFSTwitterAccountTeamsContributee : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterUser *user;
@property (nonatomic, readonly) TFSTwitterAccountUserDetails *accountUserDetails;
@property (nonatomic, readonly) _Bool isAdmin;

/* instance methods */
- (id)initWithUser:(id)user accountUserDetails:(id)details isAdmin:(_Bool)admin;
- (id)init;

@end

#endif /* TFSTwitterAccountTeamsContributee_h */
