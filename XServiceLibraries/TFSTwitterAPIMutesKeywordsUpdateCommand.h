//
#ifndef TFSTwitterAPIMutesKeywordsUpdateCommand_h
#define TFSTwitterAPIMutesKeywordsUpdateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSDictionary;

@interface TFSTwitterAPIMutesKeywordsUpdateCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) NSDictionary *keywordDictionary;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id keywordDictionary:(id)dictionary responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesKeywordsUpdateCommand_h */
