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
