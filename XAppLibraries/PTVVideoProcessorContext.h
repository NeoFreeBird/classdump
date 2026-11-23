//
#ifndef PTVVideoProcessorContext_h
#define PTVVideoProcessorContext_h
@import Foundation;

#include "MTLCommandQueue-Protocol.h"
#include "MTLDevice-Protocol.h"

@class CIContext, MTKTextureLoader, NSObject;
@protocol MTLLibrary, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PTVVideoProcessorContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *inFlightBufferSemaphore;
@property (readonly, nonatomic) MTKTextureLoader *metalTextureLoader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *videoProcessingQueue;
@property _Bool shuttingDown;
@property (readonly, nonatomic) long long framesPerSecond;
@property _Bool appIsInactive;
@property (readonly, nonatomic) CIContext *coreImageContext;
@property (readonly, nonatomic) id <MTLDevice> metalDevice;
@property (readonly, nonatomic) id <MTLLibrary> metalLibrary;
@property (readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) unsigned long long currentFrame;
@property (readonly, nonatomic) unsigned long long currentBufferIndex;

/* class methods */
+ (id)LoadMetalLibraryForDevice:(id)device error:(id *)error;

/* instance methods */
- (id)init;
- (id)loadMetalTextureWithName:(id)name inBundle:(id)bundle extension:(id)extension options:(id)options error:(id *)error;
- (id)loadMetalTextureWithURL:(id)url options:(id)options error:(id *)error;
- (void)performOnRenderQueue:(id /* block */)queue skipIfShuttingDown:(_Bool)down;
- (void)shutdown;
- (_Bool)canBeginFrame;
- (_Bool)beginFrame;
- (void)endFrame;

@end

#endif /* PTVVideoProcessorContext_h */
