//
#ifndef TASVoiceRoomRetractableBarContainerViewDelegate_Protocol_h
#define TASVoiceRoomRetractableBarContainerViewDelegate_Protocol_h
@import Foundation;

@protocol TASVoiceRoomRetractableBarContainerViewDelegate

@required

@optional

/* optional instance methods */
- (void)retractableBarContainerView:(id)view updateScrollViewContentInsetsTop:(double)top;
- (void)retractableBarContainerView:(id)view didChangeRetractableBarHeightPercentage:(double)percentage;

@end

#endif /* TASVoiceRoomRetractableBarContainerViewDelegate_Protocol_h */
