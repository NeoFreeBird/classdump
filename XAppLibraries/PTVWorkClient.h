//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWorkClient_h
#define PTVWorkClient_h
@import Foundation;

#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject;

@interface PTVWorkClient : NSObject {
    /* instance variables */
    id _loadingContext;
    id _currentContext;
}

@property (weak, nonatomic) id <PTVWorkClientDelegate> delegate;

/* instance methods */
- (id)_getContextFromDelegate;
- (_Bool)shouldExecuteEventually:(id)eventually;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context rejected:(_Bool)rejected;
- (void)error:(id)error context:(id)context;
- (void)clearCurrentState;
- (_Bool)load:(long long)load protectionPolicy:(unsigned long long)policy;
- (id)currentContext;

@end

#endif /* PTVWorkClient_h */
