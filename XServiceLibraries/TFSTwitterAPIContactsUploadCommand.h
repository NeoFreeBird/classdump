//
#ifndef TFSTwitterAPIContactsUploadCommand_h
#define TFSTwitterAPIContactsUploadCommand_h
@import Foundation;

#include "TFSTwitterAPIUploadCommand.h"
#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSArray;

@interface TFSTwitterAPIContactsUploadCommand : TFSTwitterAPIUploadCommand

@property (copy, nonatomic) NSArray *vcards;
@property (nonatomic) _Bool optInToLiveSync;
@property (nonatomic) _Bool liveSyncRequest;
@property (nonatomic) _Bool isReupload;
@property (retain, nonatomic) id <TFSModel.TFSModelBuilder> responseModelBuilder;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source uploadProgressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id vcards:(id)vcards optInToLiveSync:(_Bool)sync isLiveSyncRequest:(_Bool)request isReupload:(_Bool)reupload context:(id)context source:(unsigned long long)source uploadProgressBlock:(id /* block */)block responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIContactsUploadCommand_h */
