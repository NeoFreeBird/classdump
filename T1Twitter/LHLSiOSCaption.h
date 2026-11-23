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
