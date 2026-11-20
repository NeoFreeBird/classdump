//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
