//
#ifndef THFHomeTimelineFilterStateProviderDelegate_Protocol_h
#define THFHomeTimelineFilterStateProviderDelegate_Protocol_h
@import Foundation;

@protocol THFHomeTimelineFilterStateProviderDelegate

@required

/* required instance methods */
- (void)filterStateProviderDidFetchOptions:(id)options;

@optional

/* optional instance methods */
- (void)filterStateProviderDidResetFilter:(id)filter;

@end

#endif /* THFHomeTimelineFilterStateProviderDelegate_Protocol_h */
