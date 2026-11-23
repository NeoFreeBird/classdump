//
#ifndef TFSTwitterAPIAccountUpdateProfileImageCommand_h
#define TFSTwitterAPIAccountUpdateProfileImageCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@class NSData, NSString;

@interface TFSTwitterAPIAccountUpdateProfileImageCommand : TFSTwitterAPICommandWithExternalResponseProcessor

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *imageFileName;
@property (readonly, copy, nonatomic) NSString *originalMediaHash;

/* instance methods */
- (id)initWithAccountID:(id)id imageData:(id)data imageFileName:(id)name originalMediaHash:(id)hash context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountUpdateProfileImageCommand_h */
