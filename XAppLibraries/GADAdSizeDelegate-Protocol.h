//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdSizeDelegate_Protocol_h
#define GADAdSizeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdSizeDelegate <NSObject>

@required

/* required instance methods */
- (void)adView:(id)view willChangeAdSizeTo:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })to;

@optional

@end

#endif /* GADAdSizeDelegate_Protocol_h */
