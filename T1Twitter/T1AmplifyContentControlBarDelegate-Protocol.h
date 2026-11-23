//
#ifndef T1AmplifyContentControlBarDelegate_Protocol_h
#define T1AmplifyContentControlBarDelegate_Protocol_h
@import Foundation;

@protocol T1AmplifyContentControlBarDelegate

@required

/* required instance methods */
- (void)amplifyContentControlBarScrubDidBegin:(id)begin;
- (void)amplifyContentControlBarScrubDidChange:(id)change;
- (void)amplifyContentControlBarScrubDidEnd:(id)end;

@optional

@end

#endif /* T1AmplifyContentControlBarDelegate_Protocol_h */
