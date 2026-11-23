//
#ifndef OCFExpandedButton_h
#define OCFExpandedButton_h
@import Foundation;

#include "OCFButton.h"
#include "OCFExpandedSeparator.h"

@interface OCFExpandedButton : OCFButton

@property (readonly, nonatomic) OCFExpandedSeparator *expandedSeparator;

@end

#endif /* OCFExpandedButton_h */
