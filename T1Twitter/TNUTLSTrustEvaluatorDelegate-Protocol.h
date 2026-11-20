//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUTLSTrustEvaluatorDelegate_Protocol_h
#define TNUTLSTrustEvaluatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNUTLSTrustEvaluatorDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)TLSTrustEvaluator:(id)evaluator unmappedHostForHost:(id)host;
- (_Bool)TLSTrustEvaluator:(id)evaluator isPinnableHost:(id)host;
- (id)TLSTrustEvaluator:(id)evaluator hostForEvaluationHost:(id)host unmappedHost:(id)host trustHost:(id)host unmappedTrustHost:(id)host;

@end

#endif /* TNUTLSTrustEvaluatorDelegate_Protocol_h */
