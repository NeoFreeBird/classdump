//
#ifndef TFSTwitterAPIOAuth2TokenCommand_h
#define TFSTwitterAPIOAuth2TokenCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIOAuth2TokenCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOAuth2TokenCommand_h */
