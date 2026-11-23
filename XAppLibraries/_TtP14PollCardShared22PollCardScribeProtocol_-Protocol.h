//
#ifndef _TtP14PollCardShared22PollCardScribeProtocol__Protocol_h
#define _TtP14PollCardShared22PollCardScribeProtocol__Protocol_h
@import Foundation;

@protocol PollCardShared.PollCardScribeProtocol

@required

/* required instance methods */
- (void)logVotingViewImpressionWithPollCardID:(id)id choiceCount:(long long)count pollType:(id)type;
- (void)logResultsViewImpressionWithPollCardID:(id)id choiceCount:(long long)count pollType:(id)type;
- (void)logVoteClickWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logVoteSuccessWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logVoteFailureWithPollCardID:(id)id choiceIndex:(long long)index pollType:(id)type;
- (void)logMediaTapWithPollCardID:(id)id choiceIndex:(long long)index isResultsView:(_Bool)view;

@optional

@end

#endif /* _TtP14PollCardShared22PollCardScribeProtocol__Protocol_h */
