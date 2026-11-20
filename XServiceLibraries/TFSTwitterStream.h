//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStream_h
#define TFSTwitterStream_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStream : NSObject

/* instance methods */
- (id)streamObjects;
- (_Bool)loadTopWithSource:(long long)source completion:(id /* block */)completion;
- (_Bool)loadBottomWithSource:(long long)source;
- (_Bool)retryForError:(id)error withSource:(long long)source;

@end

#endif /* TFSTwitterStream_h */
