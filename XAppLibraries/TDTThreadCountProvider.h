//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTThreadCountProvider_h
#define TDTThreadCountProvider_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class NSObject;

@interface TDTThreadCountProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) id /* block */ provideThreadCount;

/* class methods */
+ (void)activateWithSamplingInterval:(double)interval provideThreadCount:(id /* block */)count;
+ (void)deactivate;

/* instance methods */
- (id)initWithInterval:(unsigned long long)interval leeway:(unsigned long long)leeway provideThreadCount:(id /* block */)count;
- (void)dealloc;
- (void)_tfs_cancelTimer;
- (void)_tfs_reportThreadCount;

@end

#endif /* TDTThreadCountProvider_h */
