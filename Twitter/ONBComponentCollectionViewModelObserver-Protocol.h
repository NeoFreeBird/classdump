//
#ifndef ONBComponentCollectionViewModelObserver_Protocol_h
#define ONBComponentCollectionViewModelObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBComponentCollectionViewModelObserver <NSObject>

@required

/* required instance methods */
- (void)componentsViewModelDidUpdate:(id)update withUpdateType:(long long)type;

@optional

@end

#endif /* ONBComponentCollectionViewModelObserver_Protocol_h */
