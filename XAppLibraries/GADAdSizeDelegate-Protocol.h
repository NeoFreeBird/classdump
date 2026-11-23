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
