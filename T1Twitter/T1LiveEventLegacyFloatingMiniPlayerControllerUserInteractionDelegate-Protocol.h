//
#ifndef T1LiveEventLegacyFloatingMiniPlayerControllerUserInteractionDelegate_Protocol_h
#define T1LiveEventLegacyFloatingMiniPlayerControllerUserInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventLegacyFloatingMiniPlayerControllerUserInteractionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)dockingControllerDockedViewDragBegan:(id)began;
- (void)dockingControllerDockedViewDragUpdated:(id)updated;
- (void)dockingControllerDockedViewDragEnded:(id)ended;

@end

#endif /* T1LiveEventLegacyFloatingMiniPlayerControllerUserInteractionDelegate_Protocol_h */
