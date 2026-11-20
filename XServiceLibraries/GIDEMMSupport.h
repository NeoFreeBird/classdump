//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDEMMSupport_h
#define GIDEMMSupport_h
@import Foundation;

#include "GTMAuthSessionDelegate-Protocol.h"

@class NSObject;

@interface GIDEMMSupport : NSObject <GTMAuthSessionDelegate>

/* class methods */
+ (void)handleTokenFetchEMMError:(id)emmerror completion:(id /* block */)completion;
+ (id)updatedEMMParametersWithParameters:(id)parameters;
+ (id)parametersWithParameters:(id)parameters emmSupport:(id)support isPasscodeInfoRequired:(_Bool)required;

/* instance methods */
- (id)init;
- (id)additionalTokenRefreshParametersForAuthSession:(id)session;
- (void)updateErrorForAuthSession:(id)session originalError:(id)error completion:(id /* block */)completion;

@end

#endif /* GIDEMMSupport_h */
