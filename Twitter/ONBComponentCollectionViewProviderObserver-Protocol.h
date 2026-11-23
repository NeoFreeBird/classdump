//
#ifndef ONBComponentCollectionViewProviderObserver_Protocol_h
#define ONBComponentCollectionViewProviderObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBComponentCollectionViewProviderObserver <NSObject>

@required

/* required instance methods */
- (void)componentsViewProviderDidUpdate:(id)update;

@optional

@end

#endif /* ONBComponentCollectionViewProviderObserver_Protocol_h */
