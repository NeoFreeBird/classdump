//
#ifndef PTVSketchSettings_h
#define PTVSketchSettings_h
@import Foundation;

@class NSObject;

@interface PTVSketchSettings : NSObject

@property (nonatomic) struct PTVSketchColor { double x0; double x1; double x2; } color;

/* instance methods */
- (void)loadFromUIColor:(id)uicolor;

@end

#endif /* PTVSketchSettings_h */
