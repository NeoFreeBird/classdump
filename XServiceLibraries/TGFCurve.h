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
