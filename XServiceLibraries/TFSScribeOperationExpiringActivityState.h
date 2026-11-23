//
#ifndef TFSScribeOperationExpiringActivityState_h
#define TFSScribeOperationExpiringActivityState_h
@import Foundation;

@class NSObject;

@interface TFSScribeOperationExpiringActivityState : NSObject

@property (nonatomic) _Bool didBeginUnexpiredActivity;
@property (nonatomic) _Bool didSetUpRetrying;

@end

#endif /* TFSScribeOperationExpiringActivityState_h */
