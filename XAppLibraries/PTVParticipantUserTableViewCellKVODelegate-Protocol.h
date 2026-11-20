//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
