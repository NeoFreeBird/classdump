//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTextCollectionViewCellLabel_h
#define TFNTextCollectionViewCellLabel_h
@import Foundation;

#include "TFNTextCollectionViewCell.h"

@class UILabel;

@interface TFNTextCollectionViewCellLabel : UILabel {
    /* instance variables */
    TFNTextCollectionViewCell *_cell;
}

/* instance methods */
- (id)initWithCell:(id)cell;
- (void)setText:(id)text;

@end

#endif /* TFNTextCollectionViewCellLabel_h */
