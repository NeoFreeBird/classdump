//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsDescriptionItemCallToAction_h
#define TFNSettingsDescriptionItemCallToAction_h
@import Foundation;

#include "TFNScribeContext-Protocol.h"

@class NSObject;

@interface TFNSettingsDescriptionItemCallToAction : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) id /* block */ actionBlock;
@property (readonly, copy, nonatomic) id <TFNScribeContext> scribeContext;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range scribeContext:(id)context actionBlock:(id /* block */)block;

@end

#endif /* TFNSettingsDescriptionItemCallToAction_h */
