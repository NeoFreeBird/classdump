//
#ifndef TFNTwitterCompositionSharedDraftLoader_h
#define TFNTwitterCompositionSharedDraftLoader_h
@import Foundation;

@class NSObject;

@interface TFNTwitterCompositionSharedDraftLoader : NSObject

/* class methods */
+ (void)load;
+ (void)loadSharedDrafts;
+ (void)_importDraft:(id)draft fromDirectory:(id)directory;

@end

#endif /* TFNTwitterCompositionSharedDraftLoader_h */
