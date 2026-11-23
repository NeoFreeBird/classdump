//
#ifndef TNLSimpleBackoffBehaviorProvider_h
#define TNLSimpleBackoffBehaviorProvider_h
@import Foundation;

#include "TNLBackoffBehaviorProvider-Protocol.h"

@class NSObject, NSString;

@interface TNLSimpleBackoffBehaviorProvider : NSObject <TNLBackoffBehaviorProvider>

@property double serializeDuration;
@property double serialDelayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct TNLBackoffBehavior_T { double x0; double x1; double x2; })tnl_backoffBehaviorForURL:(id)url responseHeaders:(id)headers;

@end

#endif /* TNLSimpleBackoffBehaviorProvider_h */
