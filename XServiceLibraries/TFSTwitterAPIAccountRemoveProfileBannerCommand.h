//
#ifndef TFSTwitterAPIAccountRemoveProfileBannerCommand_h
#define TFSTwitterAPIAccountRemoveProfileBannerCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@interface TFSTwitterAPIAccountRemoveProfileBannerCommand : TFSTwitterAPICommandWithExternalResponseProcessor

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountRemoveProfileBannerCommand_h */
