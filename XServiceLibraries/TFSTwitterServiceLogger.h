//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterServiceLogger_h
#define TFSTwitterServiceLogger_h
@import Foundation;

#include "TFSLogger-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterServiceLogger : NSObject <TFSLogger>

@property (retain, nonatomic) NSString *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithChannel:(id)channel;
- (_Bool)canLogWithLevel:(long long)level contextObject:(id)object;
- (void)logWithLevel:(long long)level file:(id)file function:(id)function line:(int)line contextObject:(id)object format:(id)format;

@end

#endif /* TFSTwitterServiceLogger_h */
