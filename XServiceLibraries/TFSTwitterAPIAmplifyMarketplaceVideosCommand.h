//
#ifndef TFSTwitterAPIAmplifyMarketplaceVideosCommand_h
#define TFSTwitterAPIAmplifyMarketplaceVideosCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIAmplifyMarketplaceVideosCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *mediaID;

/* instance methods */
- (id)initWithAccountID:(id)id mediaID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAmplifyMarketplaceVideosCommand_h */
