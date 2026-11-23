//
#ifndef TIPRenderImageFormat_Protocol_h
#define TIPRenderImageFormat_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPRenderImageFormat <NSObject>

@required

@property (nonatomic) _Bool opaque;
@property (nonatomic) _Bool prefersExtendedRange;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;

@optional

@end

#endif /* TIPRenderImageFormat_Protocol_h */
