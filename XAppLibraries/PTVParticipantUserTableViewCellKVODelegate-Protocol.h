//
#ifndef PTVParticipantUserTableViewCellKVODelegate_Protocol_h
#define PTVParticipantUserTableViewCellKVODelegate_Protocol_h
@import Foundation;

@protocol PTVParticipantUserTableViewCellKVODelegate

@required

/* required instance methods */
- (void)participantUserTableViewCell:(id)cell didTapFollowForUser:(id)user;

@optional

@end

#endif /* PTVParticipantUserTableViewCellKVODelegate_Protocol_h */
