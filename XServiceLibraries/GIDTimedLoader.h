//
#ifndef GIDTimedLoader_h
#define GIDTimedLoader_h
@import Foundation;

#include "GIDActivityIndicatorViewController.h"

@class NSObject, NSTimer, UIViewController;

@interface GIDTimedLoader : NSObject

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) GIDActivityIndicatorViewController *loadingViewController;
@property (retain, nonatomic) NSTimer *loadingTimer;
@property (nonatomic) double loadingTimeStamp;
@property (nonatomic) unsigned long long animationStatus;

/* instance methods */
- (id)initWithPresentingViewController:(id)controller;
- (void)startTiming;
- (void)presentLoadingViewController;
- (void)stopTimingWithCompletion:(id /* block */)completion;
- (unsigned long long)remainingDurationToAnimate;

@end

#endif /* GIDTimedLoader_h */
