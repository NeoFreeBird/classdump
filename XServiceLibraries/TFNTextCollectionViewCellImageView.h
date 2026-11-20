//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
