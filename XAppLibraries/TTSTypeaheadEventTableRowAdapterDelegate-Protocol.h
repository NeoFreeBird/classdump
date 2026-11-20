//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTypeaheadEventTableRowAdapterDelegate_Protocol_h
#define TTSTypeaheadEventTableRowAdapterDelegate_Protocol_h
@import Foundation;

@protocol TTSTypeaheadEventTableRowAdapterDelegate

@required

/* required instance methods */
- (void)eventAdapter:(id)adapter didSelectEvent:(id)event atIndexPath:(id)path;

@optional

@end

#endif /* TTSTypeaheadEventTableRowAdapterDelegate_Protocol_h */
