//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSActionServiceCommandHandle_h
#define TFSActionServiceCommandHandle_h
@import Foundation;

#include "TFSAPIRequestOperation.h"
#include "TFSTwitterAPICommand.h"
#include "TFSTwitterAPICommandOperationHandle-Protocol.h"

@class NSObject;

@interface TFSActionServiceCommandHandle : NSObject <TFSTwitterAPICommandOperationHandle> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 startImpl;
}

@property (nonatomic, readonly) TFSTwitterAPICommand *command;
@property (nonatomic, readonly) TFSAPIRequestOperation *operation;

/* instance methods */
- (void)start;
- (id)init;

@end

#endif /* TFSActionServiceCommandHandle_h */
