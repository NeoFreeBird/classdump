//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
