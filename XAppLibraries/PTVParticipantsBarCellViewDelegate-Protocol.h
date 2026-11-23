//
#ifndef PTVParticipantsBarCellViewDelegate_Protocol_h
#define PTVParticipantsBarCellViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVParticipantsBarCellViewDelegate <NSObject>

@required

/* required instance methods */
- (void)participantBarCellViewDidTap:(id)tap;
- (void)participantBarCellViewDidLongPress:(id)press;

@optional

@end

#endif /* PTVParticipantsBarCellViewDelegate_Protocol_h */
