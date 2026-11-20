//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIOAuthRequestTokenCommand_h
#define TFSTwitterAPIOAuthRequestTokenCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIOAuthRequestTokenCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (nonatomic) _Bool jsonResponse;
@property (nonatomic) _Bool scopePolicyInResponse;
@property (copy, nonatomic) NSString *sourceAppID;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id authContext:(id)context jsonResponse:(_Bool)response scopePolicyInResponse:(_Bool)response sourceAppID:(id)id source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (_Bool)isJsonResponse;
- (_Bool)isScopePolicyInResponse;

@end

#endif /* TFSTwitterAPIOAuthRequestTokenCommand_h */
