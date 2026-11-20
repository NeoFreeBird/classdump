//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
