//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
