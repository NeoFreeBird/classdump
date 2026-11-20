//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetActionItemSwitchDelegate_Protocol_h
#define TFNMenuSheetActionItemSwitchDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSheetActionItemSwitchDelegate <NSObject>

@required

/* required instance methods */
- (void)menuSheetActionItemSwitchStateDidUpdate:(_Bool)update;

@optional

@end

#endif /* TFNMenuSheetActionItemSwitchDelegate_Protocol_h */
