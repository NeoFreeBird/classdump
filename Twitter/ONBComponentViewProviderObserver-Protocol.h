//
#ifndef ONBComponentViewProviderObserver_Protocol_h
#define ONBComponentViewProviderObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBComponentViewProviderObserver <NSObject>

@required

/* required instance methods */
- (void)componentViewProviderDidUpdate:(id)update;

@optional

@end

#endif /* ONBComponentViewProviderObserver_Protocol_h */
