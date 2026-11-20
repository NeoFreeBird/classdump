//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormBooleanItem_h
#define TFNLegacyFormBooleanItem_h
@import Foundation;

#include "TFNBooleanItem.h"
#include "TFNLegacyFormAppearance.h"
#include "TFNLegacyFormItem-Protocol.h"

@interface TFNLegacyFormBooleanItem : TFNBooleanItem <TFNLegacyFormItem>

@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

/* instance methods */

@end

#endif /* TFNLegacyFormBooleanItem_h */
