//
#ifndef TFSTwitterAPIOAuthAccessTokenCommand_h
#define TFSTwitterAPIOAuthAccessTokenCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIOAuthAccessTokenCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, copy, nonatomic) NSString *authParameters;
@property (readonly, copy, nonatomic) NSString *consumerKey;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id authType:(unsigned long long)type consumerKey:(id)key authParameters:(id)parameters source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOAuthAccessTokenCommand_h */
