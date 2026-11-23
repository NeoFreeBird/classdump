//
#ifndef PTVWorkClientDelegate_Protocol_h
#define PTVWorkClientDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWorkClientDelegate <NSObject>

@required

/* required instance methods */
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;

@optional

@end

#endif /* PTVWorkClientDelegate_Protocol_h */
