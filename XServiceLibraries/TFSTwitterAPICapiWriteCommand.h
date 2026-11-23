//
#ifndef TFSTwitterAPICapiWriteCommand_h
#define TFSTwitterAPICapiWriteCommand_h
@import Foundation;

#include "TFSTwitterAPICapiCommandData.h"
#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPICapiWriteCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) TFSTwitterAPICapiCommandData *data;

/* instance methods */
- (id)initWithAccountID:(id)id capiData:(id)data context:(id)context responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPICapiWriteCommand_h */
