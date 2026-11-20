//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
