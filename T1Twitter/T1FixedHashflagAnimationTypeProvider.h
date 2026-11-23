//
#ifndef T1FixedHashflagAnimationTypeProvider_h
#define T1FixedHashflagAnimationTypeProvider_h
@import Foundation;

#include "TTAHashflagAnimationTypeProvider-Protocol.h"

@class NSObject;

@interface T1FixedHashflagAnimationTypeProvider : NSObject <TTAHashflagAnimationTypeProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *animation;
}

/* instance methods */
- (id)animationTypeWithStatus:(id)status displayTextOptions:(unsigned long long)options context:(id)context colorReplacement:(id)replacement didStartBlock:(id /* block */)block accountID:(id)id;
- (id)animationTypeFromAnimationURL:(id)url;
- (id)init;

@end

#endif /* T1FixedHashflagAnimationTypeProvider_h */
