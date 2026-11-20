//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
