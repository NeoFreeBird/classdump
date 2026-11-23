//
#ifndef T1TabbedContainerViewControllerScrollSession_h
#define T1TabbedContainerViewControllerScrollSession_h
@import Foundation;

@class NSObject;

@interface T1TabbedContainerViewControllerScrollSession : NSObject

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } initialContentOffset;
@property (readonly, nonatomic) double initialValue;
@property (readonly, nonatomic) double valueRate;

/* instance methods */
- (id)initWithInitialContentOffset:(struct CGPoint { double x0; double x1; })offset initialValue:(double)value valueRate:(double)rate;

@end

#endif /* T1TabbedContainerViewControllerScrollSession_h */
