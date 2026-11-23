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
