//
#ifndef PTVVideoProcessorFramebuffer_h
#define PTVVideoProcessorFramebuffer_h
@import Foundation;

#include "PTVVideoProcessorContext.h"
#include "PTVVideoProcessorRenderer.h"

@class NSObject;

@interface PTVVideoProcessorFramebuffer : NSObject

@property (readonly, nonatomic) PTVVideoProcessorRenderer *renderer;
@property (readonly, nonatomic) PTVVideoProcessorContext *videoProcessorContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)init;
- (id)initWithVideoProcessorContext:(id)context size:(struct CGSize { double x0; double x1; })size;
- (void)renderInContext:(id)context completion:(id /* block */)completion;

@end

#endif /* PTVVideoProcessorFramebuffer_h */
