//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14PollCardShared21PollCardScribeHandler_h
#define _TtC14PollCardShared21PollCardScribeHandler_h
@import Foundation;

#include "_TtP14PollCardShared22PollCardScribeProtocol_-Protocol.h"

@class NSObject, _$sSS, _$sSo32TFSTwitterLegacyScribeLogMethods_p;

@interface PollCardShared.PollCardScribeHandler : NSObject <PollCardShared.PollCardScribeProtocol> { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    Swift.String scribePage;
    Swift.String scribeSection;
}

/* instance methods */
- (void)logVotingViewImpressionWithPollCardID:(id)id choiceCount:(long long)count pollType:(id)type;
- (void)logResultsViewImpressionWithPollCardID:(id)id choiceCount:(long long)count pollType:(id)type;
- (void)logVoteClickWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logVoteSuccessWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logVoteFailureWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logMediaTapWithPollCardID:(id)id choiceIndex:(long long)index isResultsView:(_Bool)view;
- (id)initWithScribe:(id)scribe scribePage:(id)page scribeSection:(id)section;
- (id)init;

@end

#endif /* _TtC14PollCardShared21PollCardScribeHandler_h */
