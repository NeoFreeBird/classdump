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
