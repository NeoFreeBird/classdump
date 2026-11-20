//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
