//
#ifndef TAFBottomOverlayContentViewProvider_Protocol_h
#define TAFBottomOverlayContentViewProvider_Protocol_h
@import Foundation;

#include "TAFBottomOverlayContentViewable-Protocol.h"

@protocol TAFBottomOverlayContentViewProvider

@required

@property (nonatomic, readonly) id <TAFBottomOverlayContentViewable> overlayContentView;

@optional

@end

#endif /* TAFBottomOverlayContentViewProvider_Protocol_h */
