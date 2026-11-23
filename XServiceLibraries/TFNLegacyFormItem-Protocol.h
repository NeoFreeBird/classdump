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
