//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSiOSCaption_h
#define LHLSiOSCaption_h
@import Foundation;

@class NSAttributedString, NSObject;

@interface LHLSiOSCaption : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } proportionalCentre;
@property (retain, nonatomic) NSAttributedString *text;

/* instance methods */

@end

#endif /* LHLSiOSCaption_h */
