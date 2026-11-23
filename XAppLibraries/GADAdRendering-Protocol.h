//
#ifndef GADAdRendering_Protocol_h
#define GADAdRendering_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdRendering <NSObject>

@required

/* class methods */
+ (id)alloc;

/* required instance methods */
- (id)init;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;

@optional

/* optional instance methods */
- (void)invalidateAndCancel;

@end

#endif /* GADAdRendering_Protocol_h */
