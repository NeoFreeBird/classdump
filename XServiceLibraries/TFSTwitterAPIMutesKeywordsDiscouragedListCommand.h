//
#ifndef TFSTwitterAPIMutesKeywordsDiscouragedListCommand_h
#define TFSTwitterAPIMutesKeywordsDiscouragedListCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIMutesKeywordsDiscouragedListCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesKeywordsDiscouragedListCommand_h */
