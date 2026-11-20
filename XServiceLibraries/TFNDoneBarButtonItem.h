//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDoneBarButtonItem_h
#define TFNDoneBarButtonItem_h
@import Foundation;

#include "TFNBarButtonItem.h"

@interface TFNDoneBarButtonItem : TFNBarButtonItem

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithTitle:(id)title target:(id)target action:(SEL)action;

@end

#endif /* TFNDoneBarButtonItem_h */
