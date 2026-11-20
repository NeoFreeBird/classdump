//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposerMorphAnimation_h
#define TCRComposerMorphAnimation_h
@import Foundation;

@class NSObject;

@interface TCRComposerMorphAnimation : NSObject // (Swift)

/* class methods */
+ (void)animate:(id /* block */)animate completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* TCRComposerMorphAnimation_h */
