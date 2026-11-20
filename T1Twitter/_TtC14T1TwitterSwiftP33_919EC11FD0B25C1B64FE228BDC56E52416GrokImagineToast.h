//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_919EC11FD0B25C1B64FE228BDC56E52416GrokImagineToast_h
#define _TtC14T1TwitterSwiftP33_919EC11FD0B25C1B64FE228BDC56E52416GrokImagineToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, UIImage, UIView;

@interface T1TwitterSwift.(GrokImagineToast in _919EC11FD0B25C1B64FE228BDC56E524) : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *video;
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *action;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) UIView *thumbnailOverlayView;
@property (nonatomic, readonly) TFNToastAction *primaryAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_919EC11FD0B25C1B64FE228BDC56E52416GrokImagineToast_h */
