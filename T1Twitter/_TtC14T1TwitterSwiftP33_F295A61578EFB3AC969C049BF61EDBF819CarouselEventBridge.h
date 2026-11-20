//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_F295A61578EFB3AC969C049BF61EDBF819CarouselEventBridge_h
#define _TtC14T1TwitterSwiftP33_F295A61578EFB3AC969C049BF61EDBF819CarouselEventBridge_h
@import Foundation;

#include "T1TimelinesItemsCarouselViewControllerScribeHelper-Protocol.h"

@class _TtCs12_SwiftObject;

@interface T1TwitterSwift.(CarouselEventBridge in _F295A61578EFB3AC969C049BF61EDBF8) : Swift._SwiftObject <T1TimelinesItemsCarouselViewControllerScribeHelper> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *weakCarouselDataViewAdapter;
    NSNumber"16@0:8 *moduleViewModel;
    NSNumber"16@0:8 *cell;
    NSNumber"16@0:8 *visibleIndices;
    NSNumber"16@0:8 *hasScribedFirstAppearance;
}

/* instance methods */
- (void)scribeCarouselNextSwipeWithViewController:(id)controller;
- (void)scribeCarouselPreviousSwipeWithViewController:(id)controller;

@end

#endif /* _TtC14T1TwitterSwiftP33_F295A61578EFB3AC969C049BF61EDBF819CarouselEventBridge_h */
