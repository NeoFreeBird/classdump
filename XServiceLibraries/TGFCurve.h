//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFCurve_h
#define TGFCurve_h
@import Foundation;

@class NSArray, NSObject;

@interface TGFCurve : NSObject {
    /* instance variables */
    NSArray *_rgbCurvePoints;
    NSArray *_redCurvePoints;
    NSArray *_greenCurvePoints;
    NSArray *_blueCurvePoints;
}

/* instance methods */

@end

#endif /* TGFCurve_h */
