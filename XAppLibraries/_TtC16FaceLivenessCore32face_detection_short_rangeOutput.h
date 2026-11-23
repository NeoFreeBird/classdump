//
#ifndef _TtC16FaceLivenessCore32face_detection_short_rangeOutput_h
#define _TtC16FaceLivenessCore32face_detection_short_rangeOutput_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class NSSet, _$sSo17MLFeatureProvider_p, _TtCs12_SwiftObject;

@interface FaceLivenessCore.face_detection_short_rangeOutput : Swift._SwiftObject <MLFeatureProvider> { // (Swift)
    /* instance variables */
    __C.MLFeatureProvider provider;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;

@end

#endif /* _TtC16FaceLivenessCore32face_detection_short_rangeOutput_h */
