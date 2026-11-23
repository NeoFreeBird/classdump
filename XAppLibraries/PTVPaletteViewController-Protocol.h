//
#ifndef PTVPaletteViewController_Protocol_h
#define PTVPaletteViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPaletteViewController <NSObject>

@required

@property (readonly) double paletteViewHeight;
@property (readonly) _Bool paletteViewShouldDisableInteraction;

@optional

@end

#endif /* PTVPaletteViewController_Protocol_h */
