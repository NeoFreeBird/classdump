//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITimingCurveProvider_Protocol_h
#define UITimingCurveProvider_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class UICubicTimingParameters, UISpringTimingParameters;

@protocol UITimingCurveProvider <NSCoding, NSCopying>

@required

@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;

@optional

@end

#endif /* UITimingCurveProvider_Protocol_h */
