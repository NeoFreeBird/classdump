//
#ifndef TFSTwitterAPIAccountLoadSettingsCommand_h
#define TFSTwitterAPIAccountLoadSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAccountLoadSettingsCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountLoadSettingsCommand_h */
