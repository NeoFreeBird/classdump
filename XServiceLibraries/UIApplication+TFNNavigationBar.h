//
#ifndef UIApplication_TFNNavigationBar_h
#define UIApplication_TFNNavigationBar_h
@import Foundation;

#include "TFNBarProgressView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNNavigationBarOverlayView.h"
#include "TFNNavigationViewHiding-Protocol.h"

@class NSString, UIColor, UIImageView, UINavigationBar, UIView;

@interface UIApplication (TFNNavigationBar)

/* class methods */
+ (void)tfn_performWithEffectiveStatusBarOrientation:(long long)orientation block:(id /* block */)block;

@end

#endif /* UIApplication_TFNNavigationBar_h */
