//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAHashflagAnimationTypeProvider_Protocol_h
#define TTAHashflagAnimationTypeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAHashflagAnimationTypeProvider <NSObject>

@required

/* required instance methods */
- (id)animationTypeWithStatus:(id)status displayTextOptions:(unsigned long long)options context:(id)context colorReplacement:(id)replacement didStartBlock:(id /* block */)block accountID:(id)id;
- (id)animationTypeFromAnimationURL:(id)url;

@optional

@end

#endif /* TTAHashflagAnimationTypeProvider_Protocol_h */
