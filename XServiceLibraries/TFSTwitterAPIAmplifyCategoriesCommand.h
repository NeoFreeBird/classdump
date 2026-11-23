//
#ifndef TFSTwitterAPIAmplifyCategoriesCommand_h
#define TFSTwitterAPIAmplifyCategoriesCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIAmplifyCategoriesCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAmplifyCategoriesCommand_h */
