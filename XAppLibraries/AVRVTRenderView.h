//
#ifndef AVRVTRenderView_h
#define AVRVTRenderView_h
@import Foundation;

#include "AVRInternalRenderView-Protocol.h"

@class UIView;

@interface AVRVTRenderView : UIView <AVRInternalRenderView>

/* instance methods */
- (void)renderWithPixelBuffer:(struct __CVBuffer *)buffer state:(id)state;
- (void)captureStillImageWithPixelBuffer:(struct __CVBuffer *)buffer completion:(id /* block */)completion;

@end

#endif /* AVRVTRenderView_h */
