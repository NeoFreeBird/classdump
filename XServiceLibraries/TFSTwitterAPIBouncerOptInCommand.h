//
#ifndef TFSTwitterAPIBouncerOptInCommand_h
#define TFSTwitterAPIBouncerOptInCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@interface TFSTwitterAPIBouncerOptInCommand : TFSTwitterAPICommand {
    /* instance variables */
    long long _flowType;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id flowType:(long long)type source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIBouncerOptInCommand_h */
