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
