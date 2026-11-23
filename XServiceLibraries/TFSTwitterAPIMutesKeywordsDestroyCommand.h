//
#ifndef TFSTwitterAPIMutesKeywordsDestroyCommand_h
#define TFSTwitterAPIMutesKeywordsDestroyCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray;

@interface TFSTwitterAPIMutesKeywordsDestroyCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) NSArray *keywordIDs;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id keywordIDs:(id)ids responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesKeywordsDestroyCommand_h */
