//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADScheduler_h
#define GADScheduler_h
@import Foundation;

@class NSObject, NSTimer;
@protocol OS_dispatch_queue;

@interface GADScheduler : NSObject {
    /* instance variables */
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

@property (readonly, nonatomic) double interval;

/* instance methods */
- (id)initWithInterval:(double)interval queue:(id)queue block:(id /* block */)block;
- (void)dealloc;
- (void)executeBlocks;
- (void)start;
- (void)stop;

@end

#endif /* GADScheduler_h */
