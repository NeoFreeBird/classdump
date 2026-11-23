//
#ifndef TTSTypeaheadSearchAdapterDelegate_Protocol_h
#define TTSTypeaheadSearchAdapterDelegate_Protocol_h
@import Foundation;

@protocol TTSTypeaheadSearchAdapterDelegate

@required

/* required instance methods */
- (void)searchQueryAdapter:(id)adapter didSelectItem:(id)item atIndexPath:(id)path;
- (void)searchQueryAdapter:(id)adapter didTapAheadItem:(id)item atIndexPath:(id)path;

@optional

@end

#endif /* TTSTypeaheadSearchAdapterDelegate_Protocol_h */
