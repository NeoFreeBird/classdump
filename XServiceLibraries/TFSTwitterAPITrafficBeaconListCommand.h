//
#ifndef TFSTwitterAPITrafficBeaconListCommand_h
#define TFSTwitterAPITrafficBeaconListCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPITrafficBeaconListCommand : TFSTwitterAPICommand {
    /* instance variables */
    NSString *_configurationKey;
    NSString *_configurationValue;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id configurationKey:(id)key configurationValue:(id)value completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPITrafficBeaconListCommand_h */
