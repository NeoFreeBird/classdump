//
#ifndef TIPRenderImageFormatInternal_h
#define TIPRenderImageFormatInternal_h
@import Foundation;

#include "TIPRenderImageFormat-Protocol.h"

@class NSObject, NSString;

@interface TIPRenderImageFormatInternal : NSObject <TIPRenderImageFormat>

@property (nonatomic) _Bool opaque;
@property (nonatomic) _Bool prefersExtendedRange;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRendererFormat:(id)format;

@end

#endif /* TIPRenderImageFormatInternal_h */
