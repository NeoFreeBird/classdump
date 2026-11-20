//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
