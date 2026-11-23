//
#ifndef TFSDatabaseExpiringActivityWriteOperationState_h
#define TFSDatabaseExpiringActivityWriteOperationState_h
@import Foundation;

@class NSObject;

@interface TFSDatabaseExpiringActivityWriteOperationState : NSObject

@property (nonatomic) _Bool didStartExpiringActivity;
@property (nonatomic) _Bool didExpire;

@end

#endif /* TFSDatabaseExpiringActivityWriteOperationState_h */
