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
