//
#ifndef TFSTwitterAPICommandOperationHandle_Protocol_h
#define TFSTwitterAPICommandOperationHandle_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSAPIRequestOperation.h"
#include "TFSTwitterAPICommand.h"

@protocol TFSTwitterAPICommandOperationHandle <NSObject>

@required

@property (nonatomic, readonly) TFSTwitterAPICommand *command;
@property (nonatomic, readonly) TFSAPIRequestOperation *operation;

/* required instance methods */
- (void)start;

@optional

@end

#endif /* TFSTwitterAPICommandOperationHandle_Protocol_h */
