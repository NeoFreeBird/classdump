//
#ifndef T1LiveEventCarouselCellsRowAdapterDelegate_Protocol_h
#define T1LiveEventCarouselCellsRowAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventCarouselCellsRowAdapterDelegate <NSObject>

@required

/* required instance methods */
- (id)scribeContextForCarouselCellsRowAdapter:(id)adapter tilePosition:(id)position;

@optional

@end

#endif /* T1LiveEventCarouselCellsRowAdapterDelegate_Protocol_h */
