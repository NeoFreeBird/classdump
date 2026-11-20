//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormItem_Protocol_h
#define TFNLegacyFormItem_Protocol_h
@import Foundation;

#include "TFNLegacyFormAppearance.h"

@protocol TFNLegacyFormItem

@required

@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

@optional

@end

#endif /* TFNLegacyFormItem_Protocol_h */
