//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVHangUpCameraPreviewGuestCallTableViewCell_h
#define PTVHangUpCameraPreviewGuestCallTableViewCell_h
@import Foundation;

#include "PTVCameraPreviewGuestCallContentView.h"

@class UITableViewCell;

@interface PTVHangUpCameraPreviewGuestCallTableViewCell : UITableViewCell {
    /* instance variables */
    PTVCameraPreviewGuestCallContentView *_cameraPreviewContentView;
}

/* class methods */
+ (double)HeightThatFitsAvailableContainerSize:(struct CGSize { double x0; double x1; })size ShouldExpandToFillContainerHeight:(_Bool)height;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setGuestView:(id)view;
- (void)setParticipantIndex:(long long)index;

@end

#endif /* PTVHangUpCameraPreviewGuestCallTableViewCell_h */
