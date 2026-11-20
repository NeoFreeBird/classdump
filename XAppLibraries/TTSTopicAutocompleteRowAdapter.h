//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTopicAutocompleteRowAdapter_h
#define TTSTopicAutocompleteRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TTSTopicAutocompleteRowAdapter : TFNItemsDataViewAdapter // (Swift)

@property (nonatomic) _Bool useDarkMode;
@property (nonatomic) _Bool useInlineReplyColorMode;
@property (nonatomic) _Bool isHashflagEnabled;

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* TTSTopicAutocompleteRowAdapter_h */
