//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLinkTextLink_h
#define TFNLinkTextLink_h
@import Foundation;

#include "TFNLinkTextAttributeProperties.h"

@class NSObject;

@interface TFNLinkTextLink : NSObject

@property (readonly, nonatomic) TFNLinkTextAttributeProperties *linkProperties;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range linkProperties:(id)properties;

@end

#endif /* TFNLinkTextLink_h */
