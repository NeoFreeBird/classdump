//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRQuickComposerScribe_h
#define TCRQuickComposerScribe_h
@import Foundation;

@class NSObject;

@interface TCRQuickComposerScribe : NSObject // (Swift)

/* class methods */
+ (id)componentForKind:(long long)kind usesQuickComposer:(_Bool)composer;
+ (id)postSurfaceForPage:(id)page;
+ (void)stampFloatingActionButtonEntryOnComposition:(id)composition page:(id)page accountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* TCRQuickComposerScribe_h */
