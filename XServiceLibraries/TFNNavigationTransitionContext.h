//
#ifndef TFNNavigationTransitionContext_h
#define TFNNavigationTransitionContext_h
@import Foundation;

@class NSObject;

@interface TFNNavigationTransitionContext : NSObject

@property (copy, nonatomic) id /* block */ fromChromeFactory;
@property (copy, nonatomic) id /* block */ toChromeFactory;

/* instance methods */

@end

#endif /* TFNNavigationTransitionContext_h */
