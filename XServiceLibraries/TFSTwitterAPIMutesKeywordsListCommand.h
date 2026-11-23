//
#ifndef TFSTwitterAPIMutesKeywordsListCommand_h
#define TFSTwitterAPIMutesKeywordsListCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIMutesKeywordsListCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesKeywordsListCommand_h */
