//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCLayoutableView_h
#define TUCLayoutableView_h
@import Foundation;

#include "TUCLayoutContext.h"

@class TFNLayoutableView;

@interface TUCLayoutableView : TFNLayoutableView

@property (readonly, nonatomic) TUCLayoutContext *layoutContext;

@end

#endif /* TUCLayoutableView_h */
