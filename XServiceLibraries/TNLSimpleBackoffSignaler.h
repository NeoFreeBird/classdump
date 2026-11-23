//
#ifndef TNLSimpleBackoffSignaler_h
#define TNLSimpleBackoffSignaler_h
@import Foundation;

#include "TNLBackoffSignaler-Protocol.h"

@class NSObject, NSString;

@interface TNLSimpleBackoffSignaler : NSObject <TNLBackoffSignaler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)tnl_shouldSignalBackoffForURL:(id)url host:(id)host statusCode:(long long)code responseHeaders:(id)headers;

@end

#endif /* TNLSimpleBackoffSignaler_h */
