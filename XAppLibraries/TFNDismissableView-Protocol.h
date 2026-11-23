//
#ifndef TFNDismissableView_Protocol_h
#define TFNDismissableView_Protocol_h
@import Foundation;

@protocol TFNDismissDelegate;

@protocol TFNDismissableView

@required

@property (weak, nonatomic) id <TFNDismissDelegate> dismissDelegate;

@optional

@end

#endif /* TFNDismissableView_Protocol_h */
