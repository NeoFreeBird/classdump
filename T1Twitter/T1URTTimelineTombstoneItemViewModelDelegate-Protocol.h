//
#ifndef T1URTTimelineTombstoneItemViewModelDelegate_Protocol_h
#define T1URTTimelineTombstoneItemViewModelDelegate_Protocol_h
@import Foundation;

@protocol T1URTTimelineTombstoneItemViewModelDelegate

@required

/* required instance methods */
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)model;

@optional

@end

#endif /* T1URTTimelineTombstoneItemViewModelDelegate_Protocol_h */
