//
#ifndef TFNTextCollectionViewCellImageView_h
#define TFNTextCollectionViewCellImageView_h
@import Foundation;

#include "TFNTextCollectionViewCell.h"

@class UIImageView;

@interface TFNTextCollectionViewCellImageView : UIImageView {
    /* instance variables */
    TFNTextCollectionViewCell *_cell;
}

/* instance methods */
- (id)initWithCell:(id)cell;
- (void)setImage:(id)image;

@end

#endif /* TFNTextCollectionViewCellImageView_h */
