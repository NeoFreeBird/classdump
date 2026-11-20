//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
