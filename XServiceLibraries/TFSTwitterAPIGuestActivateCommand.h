//
#ifndef TFSTwitterAPIGuestActivateCommand_h
#define TFSTwitterAPIGuestActivateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIGuestActivateCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context bearerToken:(id)token responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIGuestActivateCommand_h */
