//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16FaceLivenessCore31face_detection_short_rangeInput_h
#define _TtC16FaceLivenessCore31face_detection_short_rangeInput_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class NSSet, _TtCs12_SwiftObject, __C.CVBuffer;

@interface FaceLivenessCore.face_detection_short_rangeInput : Swift._SwiftObject <MLFeatureProvider> { // (Swift)
    /* instance variables */
    __C.CVBuffer image;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;

@end

#endif /* _TtC16FaceLivenessCore31face_detection_short_rangeInput_h */
