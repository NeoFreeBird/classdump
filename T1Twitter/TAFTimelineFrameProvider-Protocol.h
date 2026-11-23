//
#ifndef TAFTimelineFrameProvider_Protocol_h
#define TAFTimelineFrameProvider_Protocol_h
@import Foundation;

@protocol TAFTimelineFrameProvider

@required

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timelineFrameInWindow;

@optional

@end

#endif /* TAFTimelineFrameProvider_Protocol_h */
