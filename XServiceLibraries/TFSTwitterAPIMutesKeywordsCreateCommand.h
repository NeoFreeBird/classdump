//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMutesKeywordsCreateCommand_h
#define TFSTwitterAPIMutesKeywordsCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPIMutesKeywordsCreateCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) NSDictionary *keywordDictionary;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id keywordDictionary:(id)dictionary responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesKeywordsCreateCommand_h */
