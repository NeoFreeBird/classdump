//
#ifndef T1UserViewFollowControlProviderDelegate_Protocol_h
#define T1UserViewFollowControlProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserViewFollowControlProviderDelegate <NSObject>

@required

/* required instance methods */
- (void)followControlProvider:(id)provider didPerformAction:(unsigned long long)action forFollowControl:(id)control inUserView:(id)view withMetadata:(id)metadata success:(_Bool)success error:(id)error;

@optional

/* optional instance methods */
- (id)followControlProvider:(id)provider metadataForAction:(unsigned long long)action withFollowControl:(id)control inUserView:(id)view;

@end

#endif /* T1UserViewFollowControlProviderDelegate_Protocol_h */
