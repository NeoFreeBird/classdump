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
