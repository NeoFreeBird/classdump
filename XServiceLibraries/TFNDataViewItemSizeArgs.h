//
#ifndef TFNDataViewItemSizeArgs_h
#define TFNDataViewItemSizeArgs_h
@import Foundation;

#include "TFNDataViewItemArgs.h"

@interface TFNDataViewItemSizeArgs : TFNDataViewItemArgs

@property (nonatomic) struct CGSize { double x0; double x1; } constrainedToSize;

@end

#endif /* TFNDataViewItemSizeArgs_h */
