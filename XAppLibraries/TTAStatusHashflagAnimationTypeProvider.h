//
#ifndef TTAStatusHashflagAnimationTypeProvider_h
#define TTAStatusHashflagAnimationTypeProvider_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "TTAHashflagAnimationTypeProvider-Protocol.h"

@class NSObject, NSString;

@interface TTAStatusHashflagAnimationTypeProvider : NSObject <TTAHashflagAnimationTypeProvider>

@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)animationTypeWithStatus:(id)status displayTextOptions:(unsigned long long)options context:(id)context colorReplacement:(id)replacement didStartBlock:(id /* block */)block accountID:(id)id;
- (id)animationTypeFromAnimationURL:(id)url;
- (id)animationTypeFromAnimationURL:(id)url colorReplacement:(id)replacement didStartBlock:(id /* block */)block;

@end

#endif /* TTAStatusHashflagAnimationTypeProvider_h */
