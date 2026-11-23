//
#ifndef TTSCashtagAutocompleteRowAdapterDelegate_Protocol_h
#define TTSCashtagAutocompleteRowAdapterDelegate_Protocol_h
@import Foundation;

@protocol TTSCashtagAutocompleteRowAdapterDelegate

@required

/* required instance methods */
- (void)cashtagAdapter:(id)adapter didSelectCashtag:(id)cashtag atIndexPath:(id)path;

@optional

@end

#endif /* TTSCashtagAutocompleteRowAdapterDelegate_Protocol_h */
