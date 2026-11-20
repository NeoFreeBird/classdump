//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRCompositionState_h
#define TCRCompositionState_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSArray, NSObject;

@interface TCRCompositionState : NSObject

@property (readonly, nonatomic) NSArray *compositions;
@property (readonly, nonatomic) TFNTwitterAccount *authorAccount;
@property (readonly, nonatomic) _Bool worthSaving;

/* instance methods */
- (id)init;
- (id)initWithCompositions:(id)compositions authorAccount:(id)account;
- (_Bool)isWorthSaving;

@end

#endif /* TCRCompositionState_h */
