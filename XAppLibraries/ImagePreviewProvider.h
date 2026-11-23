//
#ifndef ImagePreviewProvider_h
#define ImagePreviewProvider_h
@import Foundation;

#include "ShareSheetPreviewProvider.h"

@interface ImagePreviewProvider : ShareSheetPreviewProvider { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 images;
}

@property (nonatomic, readonly) long long numberOfPreviews;

/* instance methods */
- (id)initWithImages:(id)images;
- (id)previewImageAt:(long long)at;
- (id)init;

@end

#endif /* ImagePreviewProvider_h */
