//
#ifndef TSACameraAuthorizedService_h
#define TSACameraAuthorizedService_h
@import Foundation;

#include "TSAAuthorizedService-Protocol.h"

@class NSObject, NSString;

@interface TSACameraAuthorizedService : NSObject <TSAAuthorizedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)_mapStatus:(long long)status;

/* instance methods */
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (id)regrantPermissionInstructions;

@end

#endif /* TSACameraAuthorizedService_h */
