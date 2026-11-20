//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventTopModuleScore_h
#define T1LiveEventTopModuleScore_h
@import Foundation;

#include "T1LiveEventTopModule.h"

@class TFSTwitterLiveEventScore;

@interface T1LiveEventTopModuleScore : T1LiveEventTopModule

@property (readonly, nonatomic) TFSTwitterLiveEventScore *score;

/* instance methods */
- (id)initWithScore:(id)score;
- (id)initWithType:(long long)type;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToTopModule:(id)module;
- (_Bool)isEqualToTopModuleScore:(id)score;

@end

#endif /* T1LiveEventTopModuleScore_h */
