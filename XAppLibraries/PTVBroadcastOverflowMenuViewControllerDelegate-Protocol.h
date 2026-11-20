//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h
#define PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOverflowMenuViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)overflowMenu:(id)menu didSelectMenuItem:(id)item;
- (_Bool)overflowMenu:(id)menu shouldEnableMenuItem:(id)item;

@optional

/* optional instance methods */
- (void)overflowMenuDidTapEmptySpace:(id)space;
- (void)overflowMenu:(id)menu didTapTitleHashtag:(id)hashtag;

@end

#endif /* PTVBroadcastOverflowMenuViewControllerDelegate_Protocol_h */
