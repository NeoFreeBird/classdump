//
#ifndef TSAPhotosAuthorizedService_h
#define TSAPhotosAuthorizedService_h
@import Foundation;

#include "TSAAuthorizedService-Protocol.h"

@class NSObject, NSString;

@interface TSAPhotosAuthorizedService : NSObject <TSAAuthorizedService>

@property (readonly, nonatomic) unsigned long long accessLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAccessLevel:(unsigned long long)level;
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (id)regrantPermissionInstructions;

@end

#endif /* TSAPhotosAuthorizedService_h */
