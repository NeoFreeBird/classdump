//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSReferencedFileReference_h
#define TFSReferencedFileReference_h
@import Foundation;

@class NSObject, NSString;

@interface TFSReferencedFileReference : NSObject

@property (readonly, copy, nonatomic) NSString *path;

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;

@end

#endif /* TFSReferencedFileReference_h */
