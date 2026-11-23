//
#ifndef TUCVideoContainerView_Protocol_h
#define TUCVideoContainerView_Protocol_h
@import Foundation;

@class UIView;

@protocol TUCVideoContainerView

@required

@property (readonly, nonatomic) UIView *currentVideoView;

@optional

@end

#endif /* TUCVideoContainerView_Protocol_h */
