//
#ifndef TFSTwitterAPIDeviceUnregisterCommand_h
#define TFSTwitterAPIDeviceUnregisterCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIDeviceUnregisterCommand : TFSTwitterAPICommand

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIDeviceUnregisterCommand_h */
