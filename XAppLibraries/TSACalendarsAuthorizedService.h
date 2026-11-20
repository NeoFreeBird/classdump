//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSACalendarsAuthorizedService_h
#define TSACalendarsAuthorizedService_h
@import Foundation;

#include "TSAAuthorizedService-Protocol.h"

@class EKEventStore, NSObject, NSString;

@interface TSACalendarsAuthorizedService : NSObject <TSAAuthorizedService>

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) unsigned long long entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)_mapStatus:(long long)status;

/* instance methods */
- (id)init;
- (id)initWithEntityType:(unsigned long long)type;
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (id)regrantPermissionInstructions;

@end

#endif /* TSACalendarsAuthorizedService_h */
