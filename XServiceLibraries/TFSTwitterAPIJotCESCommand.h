//
#ifndef TFSTwitterAPIJotCESCommand_h
#define TFSTwitterAPIJotCESCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"
#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSData;

@interface TFSTwitterAPIJotCESCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSData *data;
@property (nonatomic) _Bool debug;
@property (retain, nonatomic) id <TFSModel.TFSModelBuilder> modelBuilder;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id data:(id)data context:(id)context modelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIJotCESCommand_h */
