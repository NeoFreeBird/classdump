//
#ifndef TPSHostAuthenticatedServicesProvider_Protocol_h
#define TPSHostAuthenticatedServicesProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TPSHostAuthenticatedServicesProvider <NSObject>

@required

/* required instance methods */
- (id)APICommandLoader;
- (id)APICommandContext;
- (id)scribeDelegate;
- (id)scribeDelegateForAccountID:(id)id;

@optional

@end

#endif /* TPSHostAuthenticatedServicesProvider_Protocol_h */
