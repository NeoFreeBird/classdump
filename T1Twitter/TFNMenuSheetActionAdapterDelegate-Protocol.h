//
#ifndef TFNMenuSheetActionAdapterDelegate_Protocol_h
#define TFNMenuSheetActionAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSheetActionAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;

@optional

@end

#endif /* TFNMenuSheetActionAdapterDelegate_Protocol_h */
