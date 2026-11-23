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
