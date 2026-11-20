//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
