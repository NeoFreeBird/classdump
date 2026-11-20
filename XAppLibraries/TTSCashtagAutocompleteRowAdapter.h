//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSCashtagAutocompleteRowAdapter_h
#define TTSCashtagAutocompleteRowAdapter_h
@import Foundation;

#include "TTSCashtagAutocompleteRowAdapterDelegate-Protocol.h"

@class TFNItemsDataViewAdapter, TIPImagePipeline;

@interface TTSCashtagAutocompleteRowAdapter : TFNItemsDataViewAdapter // (Swift)

@property (nonatomic) _Bool useDarkMode;
@property (nonatomic) _Bool useInlineReplyColorMode;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, weak) id <TTSCashtagAutocompleteRowAdapterDelegate> delegate;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* TTSCashtagAutocompleteRowAdapter_h */
