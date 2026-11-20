//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewItemSizeArgs_h
#define TFNDataViewItemSizeArgs_h
@import Foundation;

#include "TFNDataViewItemArgs.h"

@interface TFNDataViewItemSizeArgs : TFNDataViewItemArgs

@property (nonatomic) struct CGSize { double x0; double x1; } constrainedToSize;

@end

#endif /* TFNDataViewItemSizeArgs_h */
