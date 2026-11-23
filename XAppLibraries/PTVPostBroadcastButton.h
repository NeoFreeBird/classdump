//
#ifndef PTVPostBroadcastButton_h
#define PTVPostBroadcastButton_h
@import Foundation;

#include "PTVVerticalButton.h"

@class NSString, UIActivityIndicatorView, UIImage;

@interface PTVPostBroadcastButton : PTVVerticalButton

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *failureTitle;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) unsigned long long replayAvailabilityState;

/* instance methods */
- (id)initWithImage:(id)image title:(id)title failureTitle:(id)title;
- (void)layoutSubviews;
- (void)replayStateDidChange;
- (void)updateAppearance;
- (id)attributedTitle;
- (id)attributedStringWithError;

@end

#endif /* PTVPostBroadcastButton_h */
