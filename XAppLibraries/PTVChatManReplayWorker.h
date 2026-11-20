//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatManReplayWorker_h
#define PTVChatManReplayWorker_h
@import Foundation;

#include "PTVChatRoom.h"
#include "PTVReplayWorkerDelegate-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSDate, NSObject, NSString;

@interface PTVChatManReplayWorker : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    NSString *_historyCursor;
    int _replayCount;
}

@property (readonly, nonatomic) PTVChatRoom *chatRoom;
@property (weak, nonatomic) id <PTVReplayWorkerDelegate> delegate;
@property (retain, nonatomic) NSDate *historyStartDate;
@property (readonly, nonatomic) _Bool moreHistoryLeft;
@property (readonly, nonatomic) _Bool hasReceived503Error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)_ptv_parseHistoryFromReplayData:(id)data;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithChatRoom:(id)room;
- (void)load;
- (id /* block */)replayMessageConstructor;
- (_Bool)hasMinimumRequirementsToLoad;
- (void)reset;

@end

#endif /* PTVChatManReplayWorker_h */
