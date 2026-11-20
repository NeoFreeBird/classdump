//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVParticipantsBarViewControllerDelegate_Protocol_h
#define PTVParticipantsBarViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVParticipantsBarViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)participantsBarViewControllerDidUpdateParticipantCount:(id)count;
- (void)participantsBarViewController:(id)controller didTapOnParticipant:(id)participant;
- (void)participantsBarViewController:(id)controller didLongPressParticipant:(id)participant;
- (void)participantsBarViewControllerDidTapOnContributors:(id)contributors withContributorWatcher:(id)watcher presentUserIDs:(id)ids;

@optional

@end

#endif /* PTVParticipantsBarViewControllerDelegate_Protocol_h */
