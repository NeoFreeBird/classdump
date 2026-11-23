//
#ifndef TNUWWWAuthenticateEvaluator_h
#define TNUWWWAuthenticateEvaluator_h
@import Foundation;

#include "TNLAuthenticationChallengeHandler-Protocol.h"

@class NSObject, NSString;

@interface TNUWWWAuthenticateEvaluator : NSObject <TNLAuthenticationChallengeHandler>

@property (copy, nonatomic) NSString *errorCodeChallengeKey;
@property (copy, nonatomic) NSString *matchingRealm;
@property (copy, nonatomic) id /* block */ shouldCancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRealm:(id)realm errorCodeChallengeKey:(id)key shouldCancelBlock:(id /* block */)block;
- (void)tnl_networkLayerDidReceiveAuthChallenge:(id)challenge requestOperation:(id)operation completion:(id /* block */)completion;

@end

#endif /* TNUWWWAuthenticateEvaluator_h */
