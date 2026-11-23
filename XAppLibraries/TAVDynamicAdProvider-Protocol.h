//
#ifndef TAVDynamicAdProvider_Protocol_h
#define TAVDynamicAdProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVDynamicAdProvider <NSObject>

@required

/* required instance methods */
- (void)provideAdWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TAVDynamicAdProvider_Protocol_h */
